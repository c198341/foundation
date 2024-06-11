#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initboard();
void displayboard();
void playermove();
void computermove();
char iswin();