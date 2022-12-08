#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc �Լ��� ���Ե� ��� ����
// �޸� ���� �Ҵ�
// ex) int arr[100];

// calloc
// ex) void *calloc(size_t n, size_t size)
//calloc�� malloc�� �������� �Ҵ��ϴ� ���� �Ȱ����ϴ�.������ �ʱⰪ�� �ٸ�����.
//calloc�� �Ҵ�� �޸𸮸� ���� 0���� �ʱ�ȭ�մϴ�.malloc�� 0���� ���� �ʱ�ȭ ��Ű�� ����.
//���ӻ��� �Ʒ��� �ڵ�� �����ϴ�.

// realloc
// ex) void *realloc(void *memblock, size_t size)
//realloc�Լ��� �Ҵ�� �޸𸮸� �ٽ� �Ҵ��Ҷ� ���Դϴ�.
//������ �Ҵ��ߴ� �����Ϳ� �ٽ� �Ҵ��� size�� �Ű������� �����մϴ�.
//������ �ִ� ���� ������ �����ϴ�.

void main()
{
    int mallocInt;
    printf("int �����Ҵ� ���� >> ");
    scanf("%d", &mallocInt);
    printf("%d", mallocInt);
    
    int* arr;
    arr = (int*)malloc(sizeof(int) * mallocInt); // size 4 �����Ҵ�

    for (int j = 0; j < mallocInt; j++) {
        arr[j] = j;
    }

    for (int i = 0; i < mallocInt; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    free(arr); // ��!! �����Ҵ� ���� �ؾ��Ѵ�!!
}