#include <stdio.h>
#define MAX_SIZE 100

// 함수 선언
float sum1(float list[], int); // Call by Value를 이용하여 배열의 합을 계산하는 함수 선언
float sum2(float *list, int); // Call by Reference를 이용하여 배열의 합을 계산하는 함수 선언
float sum3(int n, float *list); // Call by Value를 이용하여 배열의 합을 계산하는 함수 선언

// 전역 변수 선언
float input[MAX_SIZE], answer; // 입력 배열과 합을 저장할 변수 선언
int i; // 반복문에서 사용할 변수 선언

void main(void) {

    // input 배열 초기화
    for(i = 0; i < MAX_SIZE; i++)
        input[i] = i;

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf("[----[son seunghye] [2023078010]---]");

    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);// 함수 호출 전 input 배열의 주소 출력
    answer = sum1(input, MAX_SIZE);// sum1 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer);// 함수 호출 후 결과 출력
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);// 함수 호출 전 input 배열의 주소 출력
    answer = sum2(input, MAX_SIZE);// sum2 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer);// 함수 호출 후 결과 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);// 함수 호출 전 input 배열의 주소 출력
    answer = sum3(MAX_SIZE, input); // sum3 함수 호출하여 배열의 합 계산
    printf("The sum is: %f\n\n", answer);// 함수 호출 후 결과 출력
}

// 배열의 합을 구하는 함수 (Call by Value)
float sum1(float list[], int n) {
    printf("list \t= %p\n", list);// 배열의 시작 주소 출력
    printf("&list \t= %p\n", &list);// 배열의 주소 출력 (주소 값은 함수 호출 시 변하지 않음)
    
    // 지역 변수 선언
    int i;
    float tempsum = 0;

    // 배열의 합을 구함
    for(i = 0; i < n; i++)
        tempsum += list[i];
    
    return tempsum;// 합을 반환
}

// 배열의 합을 구하는 함수 (Call by Reference)
float sum2(float *list, int n) {
    printf("list \t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list \t= %p\n", &list); // 배열의 주소 출력 (주소 값은 함수 호출 시 변하지 않음)

    // 지역 변수 선언
    int i;
    float tempsum = 0;

    // 배열의 합을 구함
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    
    // 합을 반환
    return tempsum;
}

// 배열의 합을 구하는 함수 (Call by Value)
float sum3(int n, float *list) {
    printf("list \t= %p\n", list); // 배열의 시작 주소 출력
    printf("&list \t= %p\n", &list); // 배열의 주소 출력 (주소 값은 함수 호출 시 변하지 않음)

    // 지역 변수 선언
    int i;
    float tempsum = 0;

    // 배열의 합을 구함
    for(i = 0; i < n; i++)
        tempsum += *(list + i);
    
    return tempsum;  // 합을 반환

}
