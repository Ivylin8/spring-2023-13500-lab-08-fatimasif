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

        // TASK B
    readImage(input, img, h, w);    // reverting image back to original state
    invertRightHalf(img, h, w);
    writeImage("task-b.pgm", img, h, w);

         // TASK C
    readImage(input, img, h, w);    // reverting image back to original state
    whiteBox(img, h, w);
    writeImage("task-c.pgm", img, h, w);

        // TASK D
    readImage(input, img, h, w);    // reverting image back to original state
    whiteBoxFrame(img, h, w);
    writeImage("task-d.pgm", img, h, w);

        // TASK E
    readImage(input, img, h, w);    // reverting image back to original state
    scale(img, h, w);

        // TASK F
    readImage(input, img, h, w);    // reverting image back to original state
    pixelate(img, h, w);   
   

    return 0;
}