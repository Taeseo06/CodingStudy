#include "tool.h"

int processInput();
void update();

int input;
int frameCount;
int n;

int main() {
	setWindowSize(50, 20);
	int exit;
	int frameRate = 1000 / 10;
	int startTimer = clock();

	while (1) {
		startTimer = clock();

		exit = processInput();
		update();

		if (exit == 1)
			break;
		
		int tmp = startTimer + frameRate - clock();  // 수행하고 남은 시간을 sleep으로 먹임 (표현하고자 하는 프레임에 맞춰서)
		if (tmp > 0 ) Sleep(tmp);
	}
}

int processInput() {
	if (kbhit()) { 
		char c = getch();

		// d키 입력시 별 크기 증가
		if (c == 'd') input++;

		// a키 입력시 별 크기 감소
		if (c == 'a') input--;

		// 공백 입력시 프로그램 종료 (while문)
		if (c == ' ') return 1;
	}
	return 0;
}

void update() {
	frameCount++;

	if (frameCount > n | input != 0) {
		n += input;
		input = 0;
		frameCount = 0;
		if (n < 2) n = 2;
		else if (n > 20) n = 20;

		clear();
		return;
	}

	int x = n - frameCount;
	int y = frameCount - 1;
	gotoxy(x, y);
	for (int i = 0; i < 2 * frameCount - 1; i++) {
		printf("*");
	}
}