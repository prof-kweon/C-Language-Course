#include <stdio.h>

int main() {
   printf("%10d\n", 123);  // Right-aligned, width 10
   printf("%-10d\n", 123); // Left-aligned, width 10
   printf("%.2f\n", 3.14159);  // Prints with 2 decimal places
   printf("%05d\n", 42);  // Pads with zeros up to 5 digits

   printf("Hello\tWorld\n");
   printf("Hello\nWorld\n");
   printf("!!!");
   printf("C:\\Program Files\\\n");
   printf("\"Hello\"");

   int age = 25;
   float pi = 3.1412345;
   printf("Age: %d, PI: %.2f\n", age, pi);

   int count = printf("12345\n");
   printf("\nCharacters: %d\n", count);

   puts("Hello, World"); //automatically appends a newline (\n) at the end


   putchar('A');
   putchar('B');
   putchar('C');
   printf("====\n");

   // ======================================

   printf("---------------------------------------\n");

   int age2;
   float height;
   printf("Enter your age and height:");
   scanf("%d %f", &age, &height);
   printf("You are %d years old and %.2f meters tall.\n", age, height);

   char ch;
   printf("Enter a character: ");
   ch = getchar();
   printf("You entered: %c\n", ch);


   char name[50];
   printf("Enter your name: ");
   // fgets reads a whole line from the input (up to n-1 characters). 
   // It includes spaces and stops at a newline (\n). 
   // Adds a newline character (\n) if the user presses Enter. 
   fgets(name, sizeof(name), stdin);
   printf("Hello, %s", name);

   return 0;
}
