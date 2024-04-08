#include <stdio.h>

void P01()
{
    int a[5]={1, 2, 3, 4, 5};
    printf("%d", a[2]);

    printf("\n");
    return;
}

void P02()
{
    char b[3]={'t', 'r', 'y'}; // [Study] "" vs ''
    printf("%c", b[0]);

    printf("\n");
    return;
}

void P03()
{
    int a[3]={5, 6, 7};
    a[1]=10;
    printf("%d", a[1]);
    
    printf("\n");
    return;
}

void P04()
{
    int b[4]={1, 2, 3, 4};
    b[0]=b[3];
    printf("%d", b[0]);

    printf("\n");
    return;
}

void P05()
{
    int c[5]={2, 4, 6, 8, 10};
    printf("%d", c[0]+c[2]);

    printf("\n");
    return;
}

void P06()
{
    int d[4]={3, 6, 9, 12};
    // printf("%d+%d", d[1], [3]); // ?

    printf("\n");
    return;
}

void P1()
{
    int arr1[3]={1, 2, 3};
    printf("%d", arr1[0]);

    printf("\n");
    return;
}

void P2()
{
    int arr2[4]={3, 4, 5, 0};
    printf("%d", arr2[2]);

    printf("\n");
    return;
}

void P3()
{
    int nice[5]={5, 4, 3, 2, 1};
    printf("%d", nice[3]);

    printf("\n");
    return;
}

void P4()
{
    int b[4]={-3,  -1, 1, 3};
    printf("%d %d", b[3], b[1]);

    printf("\n");
    return;
}

void P5()
{
    char good[2]={'b', 'a'};
    printf("%c", good[1]);

    printf("\n");
    return;
}

void P6()
{
    char txt[3]={'e', 'g', 'g'};
    printf("%c", txt[1]);

    printf("\n");
    return;
}

void P7()
{
    int zero1[3]={0, };
    printf("%d", zero1[2]);

    printf("\n");
    return;
}

void P8()
{
    int zero2[5]={1, 2, 3};
    printf("%d", zero2[3]);

    printf("\n");
    return;
}

void P9()
{
    int p[4]={9, 8, 7, 6};
    printf("%d+%d", p[0], p[2]);

    printf("\n");
    return;
}

void P10()
{
    int q[3]={4, 8, 12};
    printf("%d-%d", q[0], q[2]);

    printf("\n");
    return;
}

void P11()
{
    int w[4]={-10, 0, 10};
    printf("%d", w[0]+w[1]-w[2]);

    printf("\n");
    return;
}

void P12()
{
    int s[5]={2, 1, 0, -1, -2};
    printf("%d %d", s[3]+s[0], s[4]);

    printf("\n");
    return;
}

void P13()
{
    int a[3]={1, 2, 3};
    int b[3]={7, 8, 9};
    printf("%d %d", a[2], b[2]);

    printf("\n");
    return;
}

void P14()
{
    char c[2]={'a', 'b'};
    char d[3]={'c', 'd', 'e'};
    printf("%c %c", c[1], d[2]);

    printf("\n");
    return;
}

void P15()
{
    int a[3]={4, 5, 6};
    char b[3]={'a', 'b', 'c'};
    printf("%d %c", a[1], b[2]);

    printf("\n");
    return;
}

void P16()
{
    char b[2]={'t', 'y'};
    int a[2]={10, 20};
    printf("%c %d", b[1], a[0]);

    printf("\n");
    return;
}

void P17()
{
    int a[2]={1, 2};
    int b[2]={3, 4};
    printf("%d+%d", a[0], b[1]);

    printf("\n");
    return;
}

void P18()
{
    int c[3]={5, 10, 20};
    int d[3]={3, 6, 9};
    printf("%d-%d", c[1], d[2]);

    printf("\n");
    return;
}

void P19()
{
    int h[3]={4, 5, 6};
    h[1]=8;
    printf("%d", h[0]+h[1]);

    printf("\n");
    return;
}

void P20()
{
    int r[3]={1, 2};
    r[2]=5;
    printf("%d", r[2]+1);

    printf("\n");
    return;
}

int main()
{
    P01();
    P02();
    P03();
    P04();
    P05();
    P06();
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