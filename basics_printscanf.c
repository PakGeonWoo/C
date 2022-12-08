#include <stdio.h>
// const = 변함없는
int main_printscanf() {
	// %d = int
	// %f = float 
	// %lf = double
	// %s = str #scanf_s("%s", str, sizeof(str))# -> 문자열 입력은 크기를 명시해주어야함



	/*const int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/
	
	//int one, two, three;
	//printf("3개의 정수를 입력하세요 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("첫번째 값 : %d\n", one);
	//printf("두번째 값 : %d\n", two);
	//printf("세번째 값 : %d\n", three);
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/
	
	char name[256];
	printf("이름? : ");
	scanf_s("%s", name, sizeof(name));
	int age;
	printf("나이? : ");
	scanf_s("%d", &age);
	float weight;
	printf("몸무게? : ");
	scanf_s("%f", &weight);
	double height;
	printf("키? : ");
	scanf_s("%lf", &height);
	char content[256];
	printf("자기소개? : ");
	scanf_s("%s", content, sizeof(content));
	printf("\n\n------------------\n\n");
	printf("이름	: %s\n", name);
	printf("나이	: %d\n", age);
	printf("몸무게  : %.2f\n", weight);
	printf("키		: %.2lf\n", height);
	printf("소개	: %s\n", content);

	return 0;
}	
