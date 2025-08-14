#include<stdio.h>
#include<graphics.h>

// ✅ #include <graphics.h>
// This is a header file used in older versions of C (especially Turbo C/C++) to perform graphical operations, like drawing lines, shapes, or filling colors.

// It provides functions like:

// initgraph(): Initializes the graphics system.

// line(), rectangle(), circle(): Drawing functions.

// setcolor(), setfillstyle(): Set color and fill style.

// closegraph(): Closes the graphics mode.

#include<conio.h>

// ✅ #include <conio.h>
// This is a console input/output header used mainly in DOS/Windows compilers like Turbo C++.

// It provides functions like:

// getch(): Waits for a key press without displaying it.

// clrscr(): Clears the screen.

// kbhit(): Checks if a key has been pressed.

void tdbar(int x,int y,int width,int depth,int height)
{
    //front rectangle
    rectangle(x, y, x+width, y+height);

    //top face
    line(x, y, x+depth, y-depth);
    line(x+width, y, x+depth+width, y-depth);
    line(x+depth, y-depth, x+width+depth, y-depth);

    // Side face
    line(x + width, y, x + width + depth, y - depth);
    line(x + width, y + height, x + width + depth, y + height - depth);
    line(x + width + depth, y - depth, x + width + depth, y + height - depth);
    // Connecting edges
    line(x + width, y + height, x + width + depth, y + height - depth);
    line(x, y + height, x + depth, y + height - depth);
    line(x + depth, y + height - depth, x + width + depth, y + height - depth);
}
void main()
{
    int gd=DETECT , gm;
    initgraph(&gd,&gm," ");

    tdbar(150,150,100,100,20);

    getch();
    closegraph();
}