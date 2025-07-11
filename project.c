#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *patient;
    FILE *appointment_1;
    FILE *doctor;
    FILE *bill;
    FILE *time;

    int number;
    int dr_select;
    int pa_select;
    char patient_name[10];
    int patient_age;
    int patient_count;
    int dr_count;
    char patient_illness;
    char ch; //for print patient detail
    int appointment;
    float time_appointment;
    char doctor_name[20];
    int app_count;
    char ch1,ch2;
    int num_3;
    int time_1,time_2;
    int management;
    int room_ac=10,room_general=10;
    char room[10];
    int totalroom=20;
    char password[20];
    char name[20];
    char treatment[20];
    float finalcost;
    char dr_name[20];
    float dr_time;

    printf("your password is hospital_123\n");

    printf("enter your name:");
    scanf("%s",name);
    printf("enter your password:");
    scanf("%s",password);

    if(strcmp(password,"hospital_123")==0)
    {

    while(1)
    {
        printf("type 1 if you are doctor \n type 2 if you are  patient:");
        scanf("%d",&number);

        if(number==1)
        {
            printf("select 1)manage patient record:,2)manage appointments:,3)view and manafe doctoe schedule, 4)access hospital room avilability and allocate rooms,5)view financial report:,6)log out");
                scanf("%d",&dr_select);

                if(dr_select == 1)
                {

                    printf("select 1)add patient :,2)update  patient  details:,3)delete patient:,4)view  patient details:");

                        scanf("%d ",&dr_count);
                    if(dr_count == 1)
                    {
                            printf("enter pationt name:,patient age: \n");
                                scanf("%s",patient_name);
                                scanf("%d",&patient_age);

                                patient_count++;

                                patient=fopen("patient.txt","a"); 

                                fprintf(patient,"patient name:%s \n ",patient_name);
                                fprintf(patient,"patient age:%d \n ",patient_age);

                                fclose(patient);

                                printf("information addedd sucessfully\n");

                            // break;
                    }

                    else if(dr_count == 2)  //error
                    {
                        printf("enter patient's illness:");
                        scanf("%c",&patient_illness);
                        printf("illness=%s\n ",patient_illness);
                        // break;
                    }

                    else if(dr_count == 3)
                    {
                        printf("enter pationt name:,patient age: \n");
                            scanf("%s",patient_name);
                            scanf("%d",&patient_age);

                            patient_count--;

                            // break;
                    }

                    else if(dr_count == 4)
                    {
                        printf("patient details:\n ");

                        patient=fopen("patient.txt","r");

                        if(patient== NULL)
                        {
                            printf("ERROR");
                        }
                        else 
                        {
                            while((ch=fgetc(patient))!= EOF)
                            {
                                printf("%c",ch);
                            }

                            fclose(patient);
                        }

                        printf("total patient:%d ",patient_count);

                        // break;
                    }

                                
                }

                else if(dr_select == 2)
                {
                    printf("select 1)schdeule appointmnet:, 2)cancel appointments:, 3)view all appointments:");
                    scanf("%d",&appointment);

                    if(appointment == 1)
                    {
                        printf("give time and doctor name:");
                        scanf("%f",&time_appointment);
                        scanf("%s",&doctor_name);

                        app_count++;

                        appointment_1=fopen("appointment_1.txt","a");

                        fprintf(appointment_1,"appointment time:%f\n",time_appointment);
                        fprintf(appointment_1,"doctor name:%s\n",doctor_name);

                        fclose(appointment_1);

                        printf("appointmnet booked\n");

                        // break;
                    }
                

                else if(appointment == 2)
                {
                    printf("appointment cancelled:");

                    app_count--;

                    // break;
                }

                else if(appointment == 3) 
                {
                    printf("all appointments status:");

                    appointment_1=fopen("appointment_1.txt","r");

                    while((ch1=fgetc(appointment_1))!=EOF)
                    {
                        printf("%c",ch1);
                    }

                    fclose(appointment_1);

                    break;
                }
            }

            else if(dr_select  == 3)
            {
                printf("select 1)add doctor schedule, 2)view doctor details:");
                scanf("%d",&num_3);

                if(num_3 == 1)
                {
                    printf("enter  your(doctor) name and time for coming hospital and go back to home:");
                    scanf("%s",&doctor_name);
                    scanf("%d",&time_1);
                    scanf("%d",&time_2);

                    doctor=fopen("doctor.txt","a");

                    fprintf(doctor,"doctor  nmae:%s\n",doctor_name);
                    fprintf(doctor,"coming time:%d\n",time_1);
                    fprintf(doctor,"going back time:%d\n",time_2);

                    fclose(doctor);

                    printf("information addedd successfully");

                    // break;
                }

                else if(num_3 == 2)
                {

                    printf("doctor details:");

                    doctor=fopen("doctor.txt","r");

                    while((ch=fgetc(doctor))!=EOF)
                    {
                        printf("%c",ch);
                    }

                    fclose(doctor);

                    break;
                }
            }

            else if(dr_select == 4)
            {
                printf("select 1)allocate room: ,2)relese room:, 3)view room avilability:");
                scanf("%d",&management);

                if(management==1)
                {
                    printf("enter what kind of room you want general or ac:");
                    scanf("%s",&room);

                    if(strcmp(room,"general")==0)
                    {
                        room_general--;
                        printf("general room allocated");
                        printf("your room number=%d\n",room_general);
                    }
                    else if(strcmp(room,"ac")==0)
                    {
                        room_ac--;
                        printf("ac room allocated");
                        printf("your room number=%d\n",room_ac);
                    }

                    // break;
                }

                else if(management==2)
                {
                    printf("enter type of room ac or genral:");
                    scanf("%s",room);

                    if(strcmp(room,"general")==0)
                    {
                        room_general++;
                    }
                    else if(strcmp(room,"ac")==0)
                    {
                        room_ac++;
                    }

                    // break;
                }

                else if(management==3)
                {
                    printf("avilable general room=%d\n",room_general);
                    printf("avilable ac room=%d\n",room_ac);

                    break;
                }
            }

            else if(dr_select==5)
            {
                printf("enter patient name:");
                scanf("%s",patient_name);
                printf("enter what kind of traetmentv he/she had:");
                scanf("%s",treatment);
                printf("enter final cost:");
                scanf("%f",&finalcost);

                bill=fopen("bill.txt","a");

                fprintf(bill,"patient name:%s\n",patient_name);
                fprintf(bill,"tratment:%s\n",treatment);
                fprintf(bill,"cost:%f\n",finalcost);

                fclose(bill);

                printf("billing done\n");
            }

            else if(dr_select==6)
            {
                printf("sucessfully exicted");

                break;
            }
        }


        else if(number == 2)
        {
            printf("select 1)view pesonal details:,2)book appointmnet:,3)cancel appointment:,4)view visit history:,5)view room status:, 6)acess personal billing details:,7)logout");
                scanf("%d",&pa_select);

                if(pa_select == 1)
                {
                    printf("patient details:\n ");

                        patient=fopen("patient.txt","r");

                        if(patient== NULL)
                        {
                            printf("ERROR");
                        }
                        else 
                        {
                            while((ch=fgetc(patient))!= EOF)
                            {
                                printf("%c",ch);
                            }

                            fclose(patient);
                        }

                        printf("total patient:%d \n",patient_count);

                }

                else if(pa_select == 2)
                {
                    printf("enter your name:");
                    scanf("%s",patient_name);
                    printf("enter yor doctor name:");
                    scanf("%s",dr_name);

                    appointment_1=fopen("appointment_1.txt","a");

                    fprintf(appointment_1,"patient name:%s\n",patient_name);
                    fprintf(appointment_1,"doctor name:%s\n",dr_name);

                    fclose(appointment_1);

                    printf("appointmnet booked\n");
                }

                else if(pa_select == 3)
                {
                    printf("your appointmemnt is cancelled\n");
                }

                else if(pa_select == 4)
                {
                    printf("enter your time to meet doctor:");
                    scanf("%f",&dr_time);

                    time=fopen("time.txt","a");

                    fprintf(time,"your visit time:%f\n",dr_time);

                    fclose(time);

                    time=fopen("time.txt","r");

                    while((ch=fgetc(time))!=EOF)
                    {
                        printf("%c",ch);
                    }

                    fclose(time);

                }

                else if(pa_select == 5)
                {
                    printf("select 1)allocate room: ,2)relese room:, 3)view room avilability:");
                scanf("%d",&management);

                if(management==1)
                {
                    printf("enter what kind of room you want general or ac:");
                    scanf("%s",&room);

                    if(strcmp(room,"general")==0)
                    {
                        room_general--;
                        printf("general room allocated");
                        printf("your room number=%d\n",room_general);
                    }
                    else if(strcmp(room,"ac")==0)
                    {
                        room_ac--;
                        printf("ac room allocated");
                        printf("your room number=%d\n",room_ac);
                    }

                    printf("your room is booked\n");
                }
                }

                else if(pa_select == 6)
                {

                    printf("billing details");

                    bill=fopen("bill.txt","r");

                    while((ch=fgetc(bill))!=EOF)
                    {
                        printf("%c",ch);
                    }
                    fclose(bill);
                }

                else if(pa_select == 7)
                {
                    printf("patient logout seccessfully\n");
                }

        }
    }
}

else{
    printf("invalid password");
}

}