#include <stdio.h>
// Represents a point in two-dimensional space as a structure .
struct point {
    int x;
    int y;
};

int main1( void )
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

/////////////

struct TIME {
    int hour;
    int minute;
    int second;
};

struct BIRTHDAY {
    char year[10];
    char month[10];
    char day[10];
    struct TIME time;
};

struct STUDENT {
    int number;
    char name[20];
    double grade;
    struct BIRTHDAY day;
};

int main( void )
{
    struct STUDENT s = { 1, " Hong Gil-dong " , 4.3 };
    struct STUDENT * p;

    p = &s;

    printf("Student number=%d Name=%s Grade=%f\n" , s.number , s.name, s.grade );
    printf("Student number=%d Name=%s Grade=%f\n" , (*p).number, (*p).name, (*p).grade);
    printf("Student number=%d Name =%s Grade=%f\n" , p->number, p->name, p->grade);

    struct BIRTHDAY b = { "2005", "5", "28" };
    struct TIME t = { 10, 5, 28 };

    p->day = b;
    p->day.time = t;

    printf("Birthday %s / %s / %s\n" , p->day.year, p->day.month, p->day.day);
    printf("Time %d : %d : %d\n" , p->day.time.hour, p->day.time.minute, p->day.time.second);
    return 0;
}
