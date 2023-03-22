/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: main.cpp, Lab-08
*/

// #include <iostream>
// #include <string>
// #include "funcs.h"
// #include "imageio.h"

// int main() {
//     int img[MAX_H][MAX_W];
//     int h = 0;
//     int w = 0;
//     std::string input("image1.pgm");
//     // std::string output1("task-a.pgm");
//     // std::string output2("task-b.pgm");
//     // std::string output3("task-c.pgm");

//         // read the original image
//     readImage(input, img, h, w);

//         // call the invert function on the original image
//     invert(img, h, w);
//     // writeImage("task-a.pgm", img, h, w);

//         // call the invertRightHalf function on the same image
//     invertRightHalf(img, h, w);
//     // writeImage("task-b.pgm", output, h, w);

//         // call the invertRightHalf function on the same image
//     whiteBox(img, h, w);
//     // writeImage(output3, img, h, w);

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include "funcs.h"
// #include "imageio.h"

// int main() {
//     int img[MAX_H][MAX_W];
//     int h = 0;
//     int w = 0;
//     std::string input("image1.pgm");
//     std::string output1("task-a.pgm");
//     std::string output2("task-b.pgm");
//     std::string output3("task-c.pgm");

//     // read the original image
//     readImage(input, img, h, w);

//     // create a copy of the original image
//     int imgCopy[MAX_H][MAX_W];
//     // copyImage(img, h, w, imgCopy);

//     // call the invert function on the copy of the original image
//     invert(imgCopy, h, w);
//     writeImage(output1, imgCopy, h, w);

//     // create another copy of the original image
//     int imgCopy2[MAX_H][MAX_W];
//     // copyImage(img, h, w, imgCopy2);

//     // call the invertRightHalf function on the second copy of the original image
//     invertRightHalf(imgCopy2, h, w);
//     writeImage(output2, imgCopy2, h, w);

//     // create a third copy of the original image
//     int imgCopy3[MAX_H][MAX_W];
//     // copyImage(img, h, w, imgCopy3);

//     // call the whiteBox function on the third copy of the original image
//     whiteBox(imgCopy3, h, w);
//     writeImage(output3, imgCopy3, h, w);

//     return 0;
// }


#include <iostream>
#include <string>
#include "funcs.h"
#include "imageio.h"

int main() {
    int img[MAX_H][MAX_W];
    int h = 0;
    int w = 0;
    std::string input("image1.pgm");
    // std::string output1("task-a.pgm");
    // std::string output2("task-b.pgm");
    // std::string output3("task-c.pgm");

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

    //     // TASK E
    // readImage(input, img, h, w);
    // scale(img, h, w);
    // writeImage("task-e.pgm", img, h, w);       
   

    return 0;
}