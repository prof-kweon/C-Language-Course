#include <stdio.h>
// Represents a point in two-dimensional space as a structure .
struct point {
    int x;
    int y;
};

int main( void )
{
    struct point p = { 1, 2 };                 // ①
    struct point q = { .y = 2, .x = 1 };   // ②


    struct point r = p;                           // ③ 
    r = ( struct point ) { 1, 2 };               // ④

    printf( "p=(%d, %d)\n" , p.x, p.y);
    printf( "q=(%d, %d) \n" , q.x, q.y);
    printf( "r=(%d, %d)\n" , r.x, r.y);
    return 0;
}
