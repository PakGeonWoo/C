#include <stdio.h>

// 선언
void p(int num); // 함수 정의 전 함수를 선언 해주어야 함.

int main() {

	int num = 10;
	p(num);

}

// 정의
void p(int num) {
	printf("num은 %d입니다.\n", num);
}
