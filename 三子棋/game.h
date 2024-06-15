#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initboard(char a[ROW][COL], int row, int col);
void displayboard(char a[ROW][COL], int row, int col);
void playermove(char a[ROW][COL], int row, int col);
void computermove(char a[ROW][COL], int row, int col);
char iswin(char a[ROW][COL], int row, int col);