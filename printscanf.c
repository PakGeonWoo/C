#include <stdio.h>
// const = ���Ծ���
int main_printscanf() {
	// %d = int
	// %f = float 
	// %lf = double
	// %s = str #scanf_s("%s", str, sizeof(str))# -> ���ڿ� �Է��� ũ�⸦ ������־����



	/*const int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/
	
	//int one, two, three;
	//printf("3���� ������ �Է��ϼ��� : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("ù��° �� : %d\n", one);
	//printf("�ι�° �� : %d\n", two);
	//printf("����° �� : %d\n", three);
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/
	
	char name[256];
	printf("�̸�? : ");
	scanf_s("%s", name, sizeof(name));
	int age;
	printf("����? : ");
	scanf_s("%d", &age);
	float weight;
	printf("������? : ");
	scanf_s("%f", &weight);
	double height;
	printf("Ű? : ");
	scanf_s("%lf", &height);
	char content[256];
	printf("�ڱ�Ұ�? : ");
	scanf_s("%s", content, sizeof(content));
	printf("\n\n------------------\n\n");
	printf("�̸�	: %s\n", name);
	printf("����	: %d\n", age);
	printf("������  : %.2f\n", weight);
	printf("Ű		: %.2lf\n", height);
	printf("�Ұ�	: %s\n", content);

	return 0;
}	