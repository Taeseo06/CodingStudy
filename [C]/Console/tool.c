#include "tool.h"

int COLS = 50;
int LOWS = 20;

void setWindowSize(int cols, int lows)
{
	char buffer[128];

	COLS = cols;
	LOWS = lows;

	sprintf(buffer,
		"mode con:cols=%d lines=%d",
		cols, lows);
	system(buffer);
}

void gotoxy(int x, int y)
{
	// 우리가 실행할 프로그램의 기본 출력 장치
	// console의 핸들을 가지고 올것!
	HANDLE hOut =
		GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {x, y};
	
	//콘솔화면의 커서 위치를 pos로 변경
	SetConsoleCursorPosition(hOut, pos);
}

void clear()
{
	unsigned long dw;
	COORD pos = {0, 0};

	FillConsoleOutputCharacter(
		GetStdHandle(STD_OUTPUT_HANDLE),
		' ',
		COLS * LOWS,
		pos,
		&dw
	);
	FillConsoleOutputAttribute(
		GetStdHandle(STD_OUTPUT_HANDLE),
		getColorBit(0,1,1,1,1),
		COLS * LOWS,
		pos,
		&dw
	);
	gotoxy(0, 0);
	textColor(getColorBit(0, 1, 1, 1, 1));
}

void textColor(int colorCode)
{
	// 콘솔창에서 커서의 색을 변경하는 코드
	SetConsoleTextAttribute(
		GetStdHandle(STD_OUTPUT_HANDLE),
		colorCode
	);
}

// textColor(getColorBit(1,1,1,1,1)
// | getColorBit(0,0,0,0,0))
int getColorBit(int background, int bright, int red, int green, int blue)
{
	return (bright << 3 | red << 2
		| green << 1 | blue)
		<< background * 4;
}
