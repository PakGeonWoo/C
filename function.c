#include <stdio.h>

// ����
void p(int num); // �Լ� ���� �� �Լ��� ���� ���־�� ��.

int main_function() {

	int num = 10;
	p(num);

}

// ����
void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}