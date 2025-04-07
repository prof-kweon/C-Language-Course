#include <stdio.h> 
#include <math.h>

int sum_while( void ) 
{
    int i, n, sum; // variable declaration 
    
    printf( " Enter an integer :" ); // Output input guidance message 
    scanf( "%d" , &n); // Input integer value 
    
    i = 1; // initialize variable 
    sum = 0;

    while (i <= n)
	{
		sum += i; // Same as sum = sum + i ; 
		i++; // Same as i = i + 1 .
	}
      
	printf( " The sum from 1 to %d is %d \n" , n, sum);
    return 0;
}

int sum_user( void ) 
{
    int i, n, sum;
    i = 0; // initialize variables 
    sum = 0; // Initialize variables 
    while (i < 5)
    {
        printf( " Enter a value : " );
        scanf( "%d" , &n);
        sum = sum + n; // Same as sum += n ; 
        i++;
}
    printf( " The total is %d .\n" , sum);
    return 0;
}

int sum_for( void ) 
{
    int i, sum;

	  sum = 0;
    for (i = 1;i <= 10;i++)
		sum += i; // same as sum = sum + i; 

    printf( " Sum of integers from 1 to 10 = %d\n" ,sum);
    printf (" The absolute value of -12.0 is %f\n", fabs (-12.0));

    return 0;
}


int main( void ) 
{
    // sum_while();
    // sum_user();
    sum_for();
    return 0;
}
