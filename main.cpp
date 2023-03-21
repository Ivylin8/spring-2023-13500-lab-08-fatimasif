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
    std::string input("image1.pgm");
    std::string output1("task-a.pgm");
    std::string output2("task-b.pgm");

        // read the original image
    readImage(input, img, h, w);

        // call the invert function on the original image
    invert(img, h, w);
    writeImage(output1, img, h, w);

        // call the invertRightHalf function on the same image
    invertRightHalf(img, h, w);
    writeImage(output2, img, h, w);

    return 0;
}


// int main() {
//         // TASK A 
//         // reading the invert function and creating a new inverted version of the image
//     int img[MAX_H][MAX_W];
//     int h = 0;
//     int w = 0; 
//     std::string input("image1.pgm");
//     std::string output("task-a.pgm");
//     readImage(input, img, h, w);
//     invert(img, h, w);
//     writeImage(output, img, h, w);
//     return 0; 
// }