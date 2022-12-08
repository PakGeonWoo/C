#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc 함수가 포함된 헤더 파일
// 메모리 정적 할당
// ex) int arr[100];

// calloc
// ex) void *calloc(size_t n, size_t size)
//calloc은 malloc과 힙영역에 할당하는 것을 똑같습니다.사용법과 초기값이 다른데요.
//calloc은 할당된 메모리를 전부 0으로 초기화합니다.malloc은 0으로 전부 초기화 시키지 않죠.
//쓰임새는 아래의 코드와 같습니다.

// realloc
// ex) void *realloc(void *memblock, size_t size)
//realloc함수는 할당된 메모리를 다시 할당할때 쓰입니다.
//기존에 할당했던 포인터와 다시 할당할 size를 매개변수로 전달합니다.
//기존에 있던 값은 변함이 없습니다.

void main()
{
    int mallocInt;
    printf("int 동적할당 갯수 >> ");
    scanf("%d", &mallocInt);
    printf("%d", mallocInt);
    
    int* arr;
    arr = (int*)malloc(sizeof(int) * mallocInt); // size 4 동적할당

    for (int j = 0; j < mallocInt; j++) {
        arr[j] = j;
    }

    for (int i = 0; i < mallocInt; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    free(arr); // 꼭!! 동적할당 해제 해야한다!!
}