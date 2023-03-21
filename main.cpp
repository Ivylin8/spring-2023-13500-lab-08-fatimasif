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
        // TASK A 
        // reading the invert function and creating a new inverted version of the image
    int img[MAX_H][MAX_W];
    int h = 0;
    int w = 0; 
    std::string input("image1.pgm");
    std::string output("task-a.pgm");
    readImage(input, img, h, w);
    invert(img, h, w);
    writeImage(output, img, h, w);
    return 0; 
}