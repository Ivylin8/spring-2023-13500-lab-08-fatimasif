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
