#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* arr2);
int main(void) {

	// 포인터

	// 철수 : 101호 -> 메모리 공간의 주소
	// 영희 : 102호
	// 민희 : 103호
	// 문 앞에 암호가 걸려 있음
	//int 철수 = 1; // 암호
	//int 영희 = 2;
	//int 민희 = 3;

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : % d, 암호 : %d\n", &영희, 영희);
	//printf("민희네 주소 : %d, 암호 : %d\n", &민희, 민희);

	//// 미션맨!

	//// 첫 번째 미션 : 아파트의 각 집에 바문하여 문에 적힌 암호 확인
	//int * 미션맨; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &민희;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	////두 번째 미션 : 각 암호에 3을 곱해라
	//미션맨 = &철수;
	//*미션맨 *= 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//*미션맨 *= 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//미션맨 = &민희;
	//*미션맨 *= 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 %d\n", 미션맨, *미션맨);

	//// 스파이
	//// 미션맨이 바꾼 암호에서 2를 빼라
	//int* 스파이 = 미션맨;
	//printf("-------------------스파이가 미션 수행하는 중 ----------------------\n");
	//스파이 = &철수;
	//*스파이 -= 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 %d\n", 스파이, *스파이);

	//스파이 = &영희;
	//*스파이 -= 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 %d\n", 스파이, *스파이);

	//스파이 = &민희;
	//*스파이 -= 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 %d\n", 스파이, *스파이);

	//printf("----------------철수 영희 민희는 집에 오고서는 바뀐 암호에 깜놀--------------------\n");


	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : % d, 암호 : %d\n", &영희, 영희);
	//printf("민희네 주소 : %d, 암호 : %d\n", &민희, 민희);

	//printf("미션맨집 주소 : %d\n", &미션맨);
	//printf("스파이집 주소 : %d", &스파이);



	// 배열?
	/*int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++) {

		printf("배열 arr[%d]의 값 : %d\n", );

	}*/


	// Swap
	//int a = 10;
	//int b = 20;
	//printf("a의 주소 : %d\n", &a);
	//printf("b의 주소 : %d\n", &b);

	////a와 b의 값을 바꾼다.
	//printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	//swap(a, b);
	//printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

	//// 값에 의한 복사(Call by Value) => 값만 복사한다는 의미

	//// 주소값을 넘기면? 메모리 공간에 있는 조소값 자체를 넘기면...
	//printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a, b);
	//swap_addr(&a, &b);
	//printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b);

	int arr2[3] = { 10, 20, 30 };

	// changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++) {

		printf("%d\n", arr2[i]);


	}




	
	
	return 0;

}

void swap(int a, int b) {

	printf("(Swap 함수 내)a의 주소 : %d\n", &a);
	printf("(Swap 함수 내)b의 주소 : %d\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int * arr2) {

	arr2[2] = 50;

}
