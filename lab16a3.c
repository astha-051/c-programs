#include<stdio.h>
void main()
{
    int n;

    printf("enter an array:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }

    int value;

    printf("enter a value:");
    scanf("%d",&value);

    int *arr=a;
    int *end=a+(n-1);
    int *new=a;

    for(int *i=arr;i<=end;i++)
    {
        if(*i!=value)
        {
            *new = *i;
            new++;
        }
    }

    int newarray=new-arr;

    for(int i=0;i<newarray;i++)
    {
        printf("%d\t",a[i]);
    }
}





// Initialization:

// arr = &a[0], end = &a[5] (points past the last element), and writePtr = &a[0].
// First iteration (readPtr = &a[0]):

// *readPtr = 1 (value at a[0]).
// Since 1 != 2, we copy 1 to *writePtr (which is a[0]).
// Now writePtr points to a[1].
// Second iteration (readPtr = &a[1]):

// *readPtr = 2 (value at a[1]).
// Since 2 == 2, we skip this element and don’t copy it.
// Third iteration (readPtr = &a[2]):

// *readPtr = 3 (value at a[2]).
// Since 3 != 2, we copy 3 to *writePtr (which is a[1]).
// Now writePtr points to a[2].
// Fourth iteration (readPtr = &a[3]):

// *readPtr = 2 (value at a[3]).
// Since 2 == 2, we skip this element.
// Fifth iteration (readPtr = &a[4]):

// *readPtr = 4 (value at a[4]).
// Since 4 != 2, we copy 4 to *writePtr (which is a[2]).
// Now writePtr points to a[3].
// Final Array:

// The modified array will look like: 1 3 4
// The new size of the array is 3, since we have removed two occurrences of 2.
