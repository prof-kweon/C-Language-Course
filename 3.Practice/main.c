#include <stdio.h>

int main(){

    printf("%c%10d\n", '*', 456);  // Right-aligned, width 10
    printf("%-10d%c\n", 123, '*'); // Left-aligned, width 10
    printf("%.2f\n", 3.14159);  // Prints with 2 decimal places
    printf("%05d\n", 42);  // Pads with zeros up to 5 digits

    printf("Hello\nworld\n");
    printf("Hello\tworld\n");
    printf("\\Hello\\world\n");
    printf("\"Hello world\"\n");


    int age = 25;
    float pi = 3.14;
    printf("Age: %d, PI: %.2f\n", age, pi);

    int count = printf("Hello");
    printf("Characters printed: %d\n", count);

    int count2 = printf("Hello\n");
    printf("Characters printed: %d\n", count2);


    /* puts */
    

    return 0;
}
