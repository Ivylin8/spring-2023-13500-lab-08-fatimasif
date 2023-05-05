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

// TASK B
    // inverts the colors of the right half of the image
void invertRightHalf(int img[MAX_H][MAX_W], int& h, int& w) {
    for (int row = 0; row < h; row++) {
        for (int col = w/2; col < w; col++) {   
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

// TASK E
    // scales the picture up
void scale(int img[MAX_H][MAX_W], int& h, int& w) {
	int newImg[MAX_H][MAX_W];   // create a new image array to hold the scaled image
	for(int row = 0; row < h; row++) { 
            // copy the pixel value into a 2x2 square in the new image array
		for(int col = 0; col < w; col++) {
			newImg[row*2][col*2] = img[row][col];
			newImg[row*2+1][col*2] = img[row][col];
			newImg[row*2][col*2+1] = img[row][col];
			newImg[row*2+1][col*2+1] = img[row][col];
		}
	}
	    // double the height and width of the image
        // write the image 
	writeImage("task-e.pgm", newImg, h*2, w*2);
}

// TASK F
    // pixelates the image
void pixelate(int img[MAX_H][MAX_W], int& h, int& w) {
    int newImg[MAX_H][MAX_W];   // create a new image array to hold the scaled image
    int sum, avg, row2, col2;   // declaring variables
    for(int row = 0; row < h; row += 2) { // loop through the rows of the original image in steps of 2
        for(int col = 0; col < w; col += 2) { // loop through the columns of the original image in steps of 2
        
            // compute the sum of the pixel values in the current 2x2 window
        sum = img[row][col] + img[row][col+1] + img[row+1][col] + img[row+1][col+1];
        
            // compute the average of the pixel values in the current 2x2 window
        avg = (sum + 2) / 4; // add 2 to round the average to the nearest integer
        
            // set the pixel values in the corresponding 2x2 window in the new image array to the computed average
        for(int i = 0; i < 2; i++) {   // loop through the rows in the current 2x2 window
            for(int j = 0; j < 2; j++) {   // loop through the columns in the current 2x2 window
                row2 = row + i; // compute the row index in the new image array
                col2 = col + j; // compute the column index in the new image array
                newImg[row2][col2] = avg;   // set the pixel value in the new image array to the computed average
            }
        }
    }
}
    // write the pixelated image to file
writeImage("task-f.pgm", newImg, h, w);

}

