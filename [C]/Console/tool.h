#pragma once
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

extern int COLS;
extern int LOWS;

// 윈도우 크기를 설정하는 코드
void setWindowSize(int cols,
	int lows);

// 커서 이동 코드
void gotoxy(int x, int y);

// 화면을 지우는 코드
void clear();

// 커서의 색을 변경하는 코드
void textColor(int colorCode);

int getColorBit(int background,
	int bright, int red, int green, int blue);