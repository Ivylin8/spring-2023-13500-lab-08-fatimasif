/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: funcs.h, Lab-08
*/

#pragma once
#include <iostream>
#include <string>
#include "imageio.h"

// add prototypes here

#ifndef FUNCS_H
#define FUNCS_H
    
// void revert(int img[MAX_H][MAX_W], int& h, int& w);
// void revertRightHalf(int img[MAX_H][MAX_W], int& h, int& w);

void revert(int img[MAX_H][MAX_W], int& h, int& w);
    // TASK A
void invert(int img[MAX_H][MAX_W], int& h, int& w);
    // TASK B
void invertRightHalf(int img[MAX_H][MAX_W], int& h, int& w);
    // TASK C
void whiteBox(int img[MAX_H][MAX_W], int& h, int& w);
    // TASK D
void whiteBoxFrame(int img[MAX_H][MAX_W], int& h, int& w);
    // TASK E
// void scale(int img[MAX_H][MAX_W], int& h, int& w);


#endif