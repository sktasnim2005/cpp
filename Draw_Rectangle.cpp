#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
    // Initialize a graphics window with a larger size, e.g., 400x400 pixels
    initwindow(400, 400);

    // Draw a rectangle with top-left corner at (40, 50), width 100 pixels, and height 50 pixels
    rectangle(40, 50, 140, 100);  // (x1, y1) for top-left, (x2, y2) for bottom-right

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();
    return 0;
}

