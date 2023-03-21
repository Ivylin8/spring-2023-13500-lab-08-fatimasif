/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: funcs.cpp, Lab-08
*/

#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

    // inverts the colors of the image
void invert(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            img[row][col] = 255 - img[row][col];    // subtracting 255 pixel colors to invert the image
        }
    }
}

    // inverts the colors of the right side of the image
void invertRightHalf(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
            // modified the inner loop to only iterate over the columns on the right half of the image by 
            // setting the loop's starting point to w/2
            // which is the index of the first column in the right half of the image
        for (int col = w/2; col < w; col++) {   
            img[row][col] = 255 - img[row][col];    // subtracting 255 pixel colors to invert the image
        }
    }
}