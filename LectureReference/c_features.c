#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition
// 구조체 정의
struct Person {
    char name[50];
    int age;
};

// Function pointer usage
// 함수 포인터 사용
typedef void (*PrintFunc)(const char*);

void print_message(const char* msg) {
    printf("%s\n", msg);
}

int main() {

    // Comment
    // 주석
    // This is a single-line comment
    printf("Single line comment"); // Print the value of a
    /* 
       This is a multi-line comment.
       It can span multiple lines.

       *Tip: ctrl + "/" 
    */

    // Data types and operators
    // 데이터 타입 및 연산자
    int a = 10, b = 20;
    float c = 3.14;
    char d = 'A';
    printf("Integer: %d, Float: %.2f, Char: %c\n", a + b, c, d);

    // Conditional statement
    // 조건문
    if (a < b) {
        printf("a is smaller than b\n");
    }

    // Loop statement
    // 반복문
    for (int i = 0; i < 3; i++) {
        printf("Loop iteration: %d\n", i);
    }

    // Standard input
    // 표준 입력
    char input[100];
    printf("Enter a string: ");
    scanf("%99s", input);
    printf("You entered: %s\n", input);

    // Arrays
    // 배열
    int arr[3] = {1, 2, 3};
    printf("Array: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Using structures
    // 구조체 사용
    struct Person p = {"Alice", 25};
    printf("Person: %s, Age: %d\n", p.name, p.age);

    // Pointers and function pointers
    // 포인터와 함수 포인터
    int x = 100;
    int *ptr = &x;
    printf("Pointer: %d\n", *ptr);

    PrintFunc func = print_message;
    func("Function pointer test");

    // File input/output
    // 파일 입출력
    FILE *file = fopen("test.txt", "w");
    if (file) {
        fprintf(file, "Hello, file!\n");
        fclose(file);
    }
    
    // Dynamic memory allocation
    // 동적 메모리 할당
    int *dynArr = (int*)malloc(3 * sizeof(int));
    if (dynArr) {
        dynArr[0] = 10; dynArr[1] = 20; dynArr[2] = 30;
        printf("Dynamic Array: %d, %d, %d\n", dynArr[0], dynArr[1], dynArr[2]);
        free(dynArr);
    }

    return 0;
}