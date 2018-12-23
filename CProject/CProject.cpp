#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

#define U 1
#define D 2
#define L 3
#define R 4

typedef struct snake
{
	int x;
	int y;
	struct snake *next;
}snake;
int score = 0, add = 10;
int HighScore = 0;
int status, sleeptime = 200;
snake *head, *food;
snake *q;
int endgamestatus = 0;
HANDLE hOut;

void voidgotoxy(int x, int y);
int intcolor(int c);
void printsnake();
void weicometogame();
void createMap();
void scoreandtips();
void initsnake();
void createfood();
int biteself();
void cantcrosswall();
void speedup();
int main()
{
	printf("Hello World");
}