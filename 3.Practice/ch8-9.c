// #include <stdio.h>

// int max( int x , int y )
// {
//         if ( x > y )
//                 return x ;
//         else
//                 return y ;
// }
// int main( void )
// {

//         int x, y, larger;

//         printf ( " Enter two integers : " ) ;
//         scanf( "%d %d" , &x, &y);

//         larger = max(x, y);
//         printf ( " The larger value is %d . \n" , larger);
//         return 0;
// }

/**************************************************************/

// #include <stdio.h>

// int get_integer ()
// {
//         int value;
//         printf ( " Enter an integer : " );
//         scanf ( "%d" , &value);
//         return value;
// }

// //
// int add( int x , int y )
// {
//         return x + y ;
// }

// int main2( void )
// {
//         int x = get_integer ();
//         int y = get_integer ();

//         int sum = add(x, y);
//         printf ( " The sum of the two numbers is %d . \n" , sum);
//         return 0;
// }

/**************************************************************/

#include <stdio.h>
#include <math.h> 

/* gcc ch9.c -o ch9 -lm */
int menu(void);
void factorial();
void sine();
void logBase10();

int menu( void )
{
    int n;
    printf("1. Factorial\n");
    printf("2. Sign\n");
    printf("3. log (base 10)\n");
    printf("4. Square root\n");
    printf("5. Permutation (nPr)\n");
    printf("6. Combination ( nCr )\n");
    printf("7. End\n");
    printf("Please select : ");
    scanf("%d", &n);
    return n;
}

void factorial()
{
    long long n, result = 1, i;
    printf("Enter an integer : ");
    scanf("%lld", &n);
    for (i = 1; i <= n; i++){
        result = result * i ;
    }
    printf("result = % lld\n\n" , result);
}

void sine()
{
    double a, result;
    printf("Enter the angle : ");
    scanf("%lf", &a);
    result = sin(a);
    printf("result = %lf\n\n", result);
}

void logBase10()
{
    double a, result;
    printf("The real number Enter : " );
    scanf("%lf" , &a);
    if (a <= 0.0){
        printf ( " Error \n" );
    }
    else {
        result = log10(a);
        printf ( " result = % lf \n\n" , result);
    }
}

int main( void )
{
    while (1) {
        switch (menu()) {
            case 1:
                factorial();
                break ;
            case 2:
                sine();
                break ;
            case 3:
                logBase10();
                break ;
            case 7:
                printf("Quitting.\n");
                return 0;
            default :
                printf("Bad choice.\n");
                break ;
        }
    }
}
