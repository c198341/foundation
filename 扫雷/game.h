#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initboard(char a[ROWS][COLS], int row, int col, char set);
void showboard(char a[ROWS][COLS], int row, int col);
void setmine(char a[ROWS][COLS], int row, int col, int count);
void findmine(char a[ROWS][COLS],char b[ROWS][COLS],int row,int col);