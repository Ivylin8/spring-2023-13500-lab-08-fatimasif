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

// TASK A
    // inverts the colors of the image
void invert(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            img[row][col] = 255 - img[row][col];    // subtracting 255 pixel colors to invert the image
        }
    }
}

/*
    // revert the image to the orignal 
void revert(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            img[row][col] = 255 - img[row][col]; // subtracting 255 from each pixel color inverts the image
        }
    }
}
*/

// TASK B
    // inverts the colors of the right half of the image
void invertRightHalf(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {   
            // modified the inner loop to only iterate over the columns on the right half of the image by 
            // setting the loop's starting point to w/2
            // which is the index of the first column in the right half of the image
            if(col > w/2){
                img[row][col] = 255 - img[row][col];    // subtracting 255 pixel colors to invert the image
            }
            else {
                img[row][col] = img[row][col];
            }
            }
        }
    }

/*
    // reverts the image back to the original
void revertRightHalf(int img[MAX_H][MAX_W], int& h, int& w) {
   for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {   
            // modified the inner loop to only iterate over the columns on the right half of the image by 
            // setting the loop's starting point to w/2
            // which is the index of the first column in the right half of the image
            if(col > w/2){
                img[row][col] = 255 - img[row][col];    // subtracting 255 pixel colors to invert the image
            }
            else {
                img[row][col] = img[row][col];
            }
            
        }
    }
}
*/

// TASK C
     // draw a white box exactly in the middle of the picture
void whiteBox(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {   
            if(col > w/4 && col < w - w/4 && row > h/4 && row < h - h/4 && row - h - h/4)
            img[row][col] = 255;    // subtracting 255 pixel colors to invert the image
        }
    }
}

// TASK D
    // draw a white box exactly in the middle of the picture with a one pixel thick frame
void whiteBoxFrame(int img[MAX_H][MAX_W], int& h, int& w) {
    int thickness = 1; // set thickness of the frame to one pixel
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {   
            if (col >= w/4 - thickness && col <= w - w/4 + thickness && 
                row >= h/4 - thickness && row <= h - h/4 + thickness &&
                (row < h/4 || row > h - h/4 || col < w/4 || col > w - w/4)) {
                // set pixel values of the frame to white
                img[row][col] = 255;
            }
        }
    }
}

// // TASK E
//     // scales the picture up
// void scale(int img[MAX_H][MAX_W], int& h, int& w) {
//     int newH = h * 2; // double the height of the image
//     int newW = w * 2; // double the width of the image
//     int newImg[MAX_H][MAX_W]; // create a new image array to hold the scaled image
    
//     for (int row = 0; row < h; row++) {
//         for (int col = 0; col < w; col++) {
//             // copy the pixel value into a 2x2 square in the new image array
//             newImg[row * 2][col * 2] = img[row][col];
//             newImg[row * 2][col * 2 + 1] = img[row][col];
//             newImg[row * 2 + 1][col * 2] = img[row][col];
//             newImg[row * 2 + 1][col * 2 + 1] = img[row][col];
//         }
//     }
    
//     // update the original image height and width variables
//     h = newH;
//     w = newW;
    
//     // copy the new image array back into the original image array
//     for (int row = 0; row < h; row++) {
//         for (int col = 0; col < w; col++) {
//             img[row][col] = newImg[row][col];
//         }
//     }
// }
