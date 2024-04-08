#include <stdio.h>

void P1()
{
    int a[3]={10, 20, 30};
    printf("%d", a[2]);

    printf("\n");
    return;
}

void P2()
{
    int b[3]={10, 20, 30};
    b[1]=50;
    // printf("%d", a[1]); // ?

    printf("\n");
    return;
}

void P3()
{
    int c[3]={10, 20, 30};
    c[2]=c[0];
    printf("%d", c[2]);

    printf("\n");
    return;
}

void P4()
{
    int d[3]={10, 20, 30};
    printf("%d", d[0]+d[1]);

    printf("\n");
    return;
}

void P5()
{
    int a[2][3]={10, 20, 30};
    printf("%d", a[1][2]);

    printf("\n");
    return;
}

void P6()
{
    int a[2][3]={10, 20, 30};
    printf("%d", a[0][1]+a[1][2]);
    printf("%d", a[1][1]+a[2][2]);

    printf("\n");
    return;
}

int main()
{
    P1();
    P2();
    P3();
    P4();
    P5();
    P6();
    return 0;
}