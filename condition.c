#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_condition() {
	
	srand(time(NULL)); // 난수 초기화
	int i = rand() % 3;
	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if(i == 2) {
		printf("보\n");
	}
	else {
		printf("무효\n");
	}
	
		
}