// Remainder operator program
#include <stdio.h> 
#define SEC_PER_MINUTE 60 // 1 minute is 60 seconds 

void remainder_op( void ) 
{
    // Remainder operator
    int input, minute, second;

    printf("Please enter seconds : " );
    scanf ( "%d" , &input); // Read the time in seconds . 

    minute = input / SEC_PER_MINUTE; // how many minutes 
    second = input % SEC_PER_MINUTE; // how many seconds

    printf ( "%d seconds are %d minutes %d seconds. \n" , input, minute, second);
    return;
}

void increment_decrement( void )
{
    int x=10, y=10;

    printf ("x=%d\n", x);
    printf ("++x value = %d\n", ++x);
    printf ("x=%d\n\n", x);

    printf ("y=%d\n", y);
    printf ("value of y++ =%d\n", y++);
    printf ("y=%d\n", y);

    // Examples of increment and decrement operators
    x = 0;
    y = 10;
    y = (1 + x++) + 10; 
    printf("X = %d, Y = %d\n", x, y);    
    return;
}

int relational_op( void ) 
{
    int x, y;

    printf ("Enter two integers : ");
    scanf ("% d%d " , &x, &y);

    printf ("The result of x == y : %d\n", x == y);
    printf ("The result of x != y : %d\n", x != y);
    printf ("Result of x > y : %d\n", x > y);
    printf ("The result of x < y : %d\n ", x < y);
    printf ("The result of x >= y : %d\n ", x >= y);
    printf ("The result of x <= y : %d\n ", x <= y);
    
    int n = -3;
    if(!n){
        printf("%d == True\n", n);
    } else {
        printf("%d == False\n", n);
    }
    
    return 0;
}

void leap_year(){
    int year, result;

    printf ( " Enter the year : " );
    scanf ( "%d" , &year);
    
    result = ( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    printf ( "result=%d \n" , result);
    
}

int conditional_op( void )
{
    int x,y ;

    printf("Two integers : " );
    scanf("%d %d" , &x, &y);

    printf("large number = %d\n" , (x > y) ? x : y );
    printf("small number = %d\n" , (x < y) ? x : y );

    return 0;
}

int main(){
    // remainder_op();
    // increment_decrement();
    // relational_op();
    // leap_year();
    conditional_op();
}