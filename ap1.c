#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----[son seunghye] [2023078010]---]");
int list[5];// 5개의 정수를 담는 배열 'list' 선언
int *plist[5] = {NULL,};// 5개의 정수 포인터를 담는 배열 'plist' 선언하고 모두 NULL로 초기화
plist[0] = (int *)malloc(sizeof(int));//sizeof(int)만큼의 메모리를 동적으로 할당하고 해당 주소를 plist[0]에 저장
list[0] = 1;//list 배열의 첫번째 요소에 값 1 할당
list[1] = 100;//list 배열의 두번째 요소에 값 100 할당
*plist[0] = 200;// plist[0]이 가리키는 메모리에 값 200 할당
printf("list[0] = %d\n", list[0]);//list[0]의 값 출력
printf("&list[0] = %p\n", &list[0]);//list[0]의 주소 출력
printf("list = %p\n", list);//list 배열의 시작 주소 출력
printf("&list = %p\n", &list);//list 배열의 주소 출력
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]);//list[1]의 값 출력
printf("&list[1] = %p\n", &list[1]);//list[1]의 주소 출력
printf("*(list+1) = %d\n", *(list + 1));//list의 두번째 요소의 값 출력
printf("list+1 = %p\n", list+1);//list 배열의 두번째 요소의 주소 출력
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]);//plist[0]이 가리키는 값 출력
printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소 출력
printf("&plist = %p\n", &plist);//plist 배열의 주소 출력
printf("plist = %p\n", plist);//plist 배열의 시작 주소 출력
printf("plist[0] = %p\n", plist[0]);//plist[0]이 가리키는 주소 출력
printf("plist[1] = %p\n", plist[1]);//plist[1]의 값 (NULL) 출력
printf("plist[2] = %p\n", plist[2]);//plist[2]의 값 (NULL) 출력
printf("plist[3] = %p\n", plist[3]);//plist[3]의 값 (NULL) 출력
printf("plist[4] = %p\n", plist[4]);//plist[4]의 값 (NULL) 출력
free(plist[0]);// plist[0]이 가리키는 동적할당된 메모리를 해제하여 메모리 누수 방지
}