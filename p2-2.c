#include <stdio.h>

void print_one(int *ptr, int rows);// 함수 선언


// 메인 함수
int main() {
    printf("[----[son seunghye] [2023078010]---]");

    int one[] = {0, 1, 2, 3, 4}; // 배열 one을 선언하고 초기화합니다.

    printf("one = %p\n", one); // 배열 one의 시작 주소를 출력합니다.
    printf("&one = %p\n", &one); // 배열 one의 주소를 출력합니다. 배열의 주소는 첫 번째 요소의 주소와 동일합니다.

    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소를 출력합니다.

    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); // 함수 print_one을 호출하며 배열 one의 첫 번째 요소의 주소와 배열의 길이를 전달합니다.

    printf("------------------------------------\n");
    print_one(&one[0], 5); // 배열 one을 출력하는 함수 print_one을 호출합니다.

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); // 함수 print_one을 호출하며 배열 one의 이름과 배열의 길이를 전달합니다.

    printf("------------------------------------\n");
    print_one(one, 5); // 배열 one을 출력하는 함수 print_one을 호출합니다.

    return 0;
}

// 배열의 요소를 출력하는 함수
void print_one(int *ptr, int rows) {
    
    //포인터의 주소와 해당 주소에 저장된 값 출력
    printf("Address \t Contents\n");

    for (int i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}
