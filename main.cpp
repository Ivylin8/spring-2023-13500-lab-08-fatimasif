/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: main.cpp, Lab-08
*/

#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main() {
    int img[MAX_H][MAX_W];
    int h = 0;
    int w = 0;
    std::string input("inImage.pgm");

        // read the original image
    readImage(input, img, h, w);

        // TASK A
    invert(img, h, w);
    writeImage("task-a.pgm", img, h, w);

        // reverting image back to original state
    readImage(input, img, h, w);
    // revert(img, h, w);
    // writeImage("revert-1.pgm", img, h, w);

        // TASK B
    invertRightHalf(img, h, w);
    writeImage("task-b.pgm", img, h, w);

        // reverting image back to original state
    readImage(input, img, h, w);
    // revertRightHalf(img, h, w);
    // writeImage("revert-2.pgm", img, h, w);

         // TASK C
    whiteBox(img, h, w);
    writeImage("task-c.pgm", img, h, w);

        // TASK D
    readImage(input, img, h, w);
    whiteBoxFrame(img, h, w);
    writeImage("task-d.pgm", img, h, w);

        // TASK E
    readImage(input, img, h, w);
    scale(img, h, w);

        // TASK F
    readImage(input, img, h, w);
    pixelate(img, h, w);   
   

    return 0;
}