#include <stdio.h>

void P01()
{
    int a[5]={1, 2, 3,};
    printf("%d", a[3]);

    printf("\n");
    return;
}

void P02()
{
    char c[]="ABC";
    printf("%c", c[1]);

    printf("\n");
    return;
}

void P03()
{
    int a[2][2]={1, 2, 3, 4};
    printf("%d", a[0][1]);
    
    printf("\n");
    return;
}

void P04()
{
    int a[3][2]={0,};
    printf("%d", a[1][2]);

    printf("\n");
    return;
}

void P1()
{
    int a[3]={1, 2, 3};
    printf("%d", a[1]);

    printf("\n");
    return;
}

void P2()
{
    int a[3]={1,};
    printf("%d", a[1]);

    printf("\n");
    return;
}

void P3()
{
    int a[3]={0,};
    printf("%d", a[1]);

    printf("\n");
    return;
}

void P4()
{
    int a[3]={4, 5, 6};
    printf("%d", a[0]+a[2]);

    printf("\n");
    return;
}

void P5()
{
    int a[]={1, 2, 3,};
    printf("%d", a[0]+a[4]);

    printf("\n");
    return;
}

void P6()
{
    char a[]="apple";
    printf("%c", a[3]);

    printf("\n");
    return;
}

void P7()
{
    char a[]="APPLE";
    printf("%c", a[0]);

    printf("\n");
    return;
}

void P8()
{
    char a[]="APPLE";
    printf("%d", a[0]);

    printf("\n");
    return;
}

void P9()
{
    int a[2][2]={0,};
    printf("%d", a[0][0]);

    printf("\n");
    return;
}

void P10()
{
    int a[2][2]={{1, 2}, {3, 4}};
    printf("%d", a[0][0]);

    printf("\n");
    return;
}

void P11()
{
    int a[2][2]={{0,}, {1,}};
    printf("%d", a[1][1]);

    printf("\n");
    return;
}

void P12()
{
    int a[2][2]={1, 2, 3, 4};
    printf("%d", a[1][1]);

    printf("\n");
    return;
}

void P13()
{
    int a[3][2]={1, 2, 3, 4, 5, 6};
    printf("%d", a[1][1]);

    printf("\n");
    return;
}

void P14()
{
    int a[2][3]={1, 2, 3, 4, 5, 6};
    printf("%d", a[1][0]+a[0][1]);

    printf("\n");
    return;
}

void P15()
{
    int a[3][2]={1, 2, 3, 4, 5, 6};
    printf("%d", a[0][1]+a[2][1]);

    printf("\n");
    return;
}

void P16()
{
    int a[3][2]={0, 1, 5, 6, 2, 3};
    printf("%d", a[1][1]+a[2][0]);

    printf("\n");
    return;
}

void P17()
{
    int a[2][3]={0, 2, 4, 8, 10,};
    printf("%d", a[1][2]+a[0][1]);

    printf("\n");
    return;
}

void P18()
{
    int a[3]={1, 2, 3};
    int b[3]={0,};
    b[1]=a[2];
    printf("%d %d", a[1], b[1]);

    printf("\n");
    return;
}

void P19()
{
    int a[2][3]={0, 2, 4, 8, 10,};
    printf("%d", a[0][2]+a[1][1]);

    printf("\n");
    return;
}

void P20()
{
    int a[3]={1, 2, 3};
    int b[3]={0,};
    b[1]=a[2];
    printf("%d", a[1]+b[1]);

    printf("\n");
    return;
}

int main()
{
    P01();
    P02();
    P03();
    P04();
    P1();
    P2();
    P3();
    P4();
    P5();
    P6();
    P7();
    P8();
    P9();
    P10();
    P11();
    P12();
    P13();
    P14();
    P15();
    P16();
    P17();
    P18();
    P19();
    P20();
    return 0;
}