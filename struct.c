#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	//����ü �ȿ� ����ü
	struct GameInfo* friendGame;
};
typedef struct GameInformation
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct(void) {

	// ����ü ���
	struct GameInfo gameinfo1;
	gameinfo1.name = "��������";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "����ȸ��";

	// ����ü ���
	printf("���Ӹ� >> %s\n", gameinfo1.name);
	printf("�߸ų⵵ >> %d\n", gameinfo1.year);
	printf("���� >> %d\n", gameinfo1.price);
	printf("���ۻ� >> %s\n", gameinfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameinfo2 = {"�ʵ�����", 2017, 100, "�ʵ�ȸ��"};
	printf("\n");
	printf("���Ӹ� >> %s\n", gameinfo2.name);
	printf("�߸ų⵵ >> %d\n", gameinfo2.year);
	printf("���� >> %d\n", gameinfo2.price);
	printf("���ۻ� >> %s\n", gameinfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {

		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}

	};


	// ����ü ������
	struct GameInfo* gamePtr;
	gamePtr = &gameinfo1;
	printf("------------ ����ü ������ -----------\n");
	//printf("���Ӹ� >> %s\n", (*gamePtr).name); // *ptr
	//printf("�߸ų⵵ >> %d\n", (*gamePtr).year);
	//printf("���� >> %d\n", (*gamePtr).price);
	//printf("���ۻ� >> %s\n", (*gamePtr).company);
	printf("���Ӹ� >> %s\n", gamePtr->name); // *ptr
	printf("�߸ų⵵ >> %d\n", gamePtr->year);
	printf("���� >> %d\n", gamePtr->price);
	printf("���ۻ� >> %s\n", gamePtr->company);

	// ����ü �ȿ� ����ü
	gameinfo1.friendGame = &gameinfo2;
	printf("------------ ����ü �ȿ� ����ü -----------\n");
	printf("���Ӹ� >> %s\n", gameinfo1.friendGame->name);
	printf("�߸ų⵵ >> %d\n", gameinfo1.friendGame->year);
	printf("���� >> %d\n", gameinfo1.friendGame->price);
	printf("���ۻ� >> %s\n", gameinfo1.friendGame->company);
	
	// typedef
	// �ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	���� �������� = 3;
	printf("%d\n", ��������);


	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�������";
	game1.year = 2017;

	GAME_INFO game2;
	game2.name = "�ѱ۰���";


	return 0;
}