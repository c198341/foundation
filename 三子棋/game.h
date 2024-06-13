#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initboard(char a[row][col], int row, int col);
void displayboard(char a[row][col], int row, int col);
void playermove();
void computermove();
char iswin();