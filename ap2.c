#include <stdio.h>
#include <stdlib.h>

void main() {
    printf("[----[son seunghye] [2023078010]---]");
    int list[5];// 정수형 배열 'list' 선언
    int *plist[5];// 정수형 포인터 배열 'plist' 선언
    list[0] = 10;    // list 배열의 첫 번째 요소에 10을 할당
    list[1] = 11;    // list 배열의 두 번째 요소에 11을 할당
    plist[0] = (int*)malloc(sizeof(int));    // plist 배열의 첫 번째 요소에 동적으로 메모리를 할당
    printf("list[0] \t= %d\n", list[0]);    // list 배열의 첫 번째 요소 값 출력
    printf("list \t\t= %p\n", list);    // list 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]);    // list 배열의 첫 번째 요소의 주소 출력
    printf("list + 0 \t= %p\n", list+0);    // list 배열의 시작 주소와 0을 더한 주소 출력
    printf("list + 1 \t= %p\n", list+1);    // list 배열의 시작 주소와 1을 더한 주소 출력
    printf("list + 2 \t= %p\n", list+2);    // list 배열의 시작 주소와 2을 더한 주소 출력
    printf("list + 3 \t= %p\n", list+3);    // list 배열의 시작 주소와 3을 더한 주소 출력
    printf("list + 4 \t= %p\n", list+4);    // list 배열의 시작 주소와 4을 더한 주소 출력
    printf("&list[4] \t= %p\n", &list[4]);    // list 배열의 다섯 번째 요소의 주소 출력

    free(plist[0]);    // 동적할당한 메모리를 해제

}
