#include <stdio.h>
#include <limits.h>

int main(){
    unsigned int sales = 2800000000; 
    printf ("%u\n" , sales); 

    // https://www.rapidtables.com/convert/number/decimal-to-binary.html
    // 2800000000 => 10100110111001001001110000000000
    printf ("%d\n" , sales); // If you use %d , it will be printed as a negative number



    short s_money = SHRT_MAX; // Initialize to maximum value. 32767
    unsigned short u_money = USHRT_MAX; // Initialize to maximum value. 65535

    // 32767 => 0111111111111111 + 1 => 1000000000000000
    // 65535 => 1111111111111111 + 1 => 0000000000000000
    s_money = s_money + 1;
    printf ("s_money = %d\n" , s_money );

    u_money = u_money + 1;
    printf ("u_money = %d\n" , u_money );


    int x = 10; // 10 is a decimal number, is of type int , and has a value of 10 in decimal . 
    int y = 010; // 010 is an octal number, of type int , and its value is 8 in decimal .
    int z = 0x10; // 010 is a hexadecimal number, int type, and its value is 16 in decimal .
    printf ( "x = %d\n" , x);
    printf ( "y = %d\n" , y);
    printf ( "z = %d\n" , z);

    printf("%d\n", +3 + (-3));

    char beep = 7;
    printf("%c", beep);


    char c;
    int i;
    float f;
    
    c = 10000; // Round down 
    i = 1.23456 + 10; // Round down 
    f = 10 + 20; // round up 
    printf( "c = %d, i = %d, f = %f \n" , c, i, f);
    return 0;
}