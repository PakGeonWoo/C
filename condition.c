#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_condition() {
	
	srand(time(NULL)); // ���� �ʱ�ȭ
	int i = rand() % 3;
	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if(i == 2) {
		printf("��\n");
	}
	else {
		printf("��ȿ\n");
	}
	
		
}