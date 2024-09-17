#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
    // Initialize a graphics window with a larger size, e.g., 400x400 pixels
    initwindow(400, 400);

    // Draw a circle with center at (40, 50) and radius 10 pixels
    circle(40, 50, 10);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}

