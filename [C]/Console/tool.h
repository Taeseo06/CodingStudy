#pragma once
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

extern int COLS;
extern int LOWS;

// ������ ũ�⸦ �����ϴ� �ڵ�
void setWindowSize(int cols,
	int lows);

// Ŀ�� �̵� �ڵ�
void gotoxy(int x, int y);

// ȭ���� ����� �ڵ�
void clear();

// Ŀ���� ���� �����ϴ� �ڵ�
void textColor(int colorCode);

int getColorBit(int background,
	int bright, int red, int green, int blue);