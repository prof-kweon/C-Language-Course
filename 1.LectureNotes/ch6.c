#include <stdio.h>


int grades( void ) 
{
    int score;
    
    printf ( " Enter your grades : " );
    scanf ( "%d" , &score);

    if (score >= 90)
        printf ( " Passed : Grade A\n" );
    else if (score >= 80)
        printf ( " Passed : Grade B\n" );
    else if (score >= 70)
        printf ( " Passed : Grade C\n" );
    else if (score >= 60)
        printf ( " Passed : Grade D\n" );
    else 
        printf ( " Failed : Grade F\n" );
    return 0;
}

int if_state( void )
{
    int number;

    printf ( " Enter an integer :" );
    scanf ( "%d" , &number);

    if ( number > 0 ) {
        printf ( " It is a positive number ." );
     }
    printf ( " The entered value is %d .", number );

    return 0;
}

int calculator_ifelse( void )
{
    char op;
    int x, y, result;

    printf ( " Enter a formula ( e.g. 2 + 5) >> " );
    scanf ( "%d %c %d" , &x, &op, &y);

    if ( op == '+' )
        result = x + y;
    else if ( op == '-' )
        result = x - y;
    else if ( op == '*' )
        result = x * y;
    else if ( op == '/' )
        result = x / y;
    else if ( op == '%' )
        result = x % y;
    else 
        printf ( " Unsupported operator ." );

    printf( "%d %c %d = %d \n" , x, op, y, result);
    return 0;
}

int calculator_switch( void )
{
	 char op;
	 int x, y, result;
	 printf ( " Enter a formula ( e.g. 2 + 5) >> " );
	 scanf ( "%d %c %d" , &x, &op, &y);
     switch (op){
        case '+' :
            result = x + y;
            break ;
        case '-' :
            result = x - y;
            break ;
        case '*' :
            result = x * y;
            break ;
        case '/' :
            result = x / y;
            break ;
        case '%' :
            result = x % y;
            break ;
        default :
            printf ( " Unsupported operator . \n" );
            break ;
    }
    printf( "%d %c %d = %d \n" , x, op, y, result);
    return 0;

}

int main( void )
{
    // if_state();
    // grades();
    // calculator_ifelse();
    calculator_switch();

    return 0;
}
