#include <stdio.h>

void P1()
{
    printf("start");
    return;
}

void P2()
{
    int a=1;
    printf("%d", a);
    return;
}

void P3()
{
    char c='t';
    printf("%c", c);
    return;
}

void P4()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
    return;
}

void P5()
{
    printf("1+2");
    return;
}

void P6()
{
    printf("4*7");
    return;
}

void P7()
{
    printf("a-b");
    return;
}

void P8()
{
    printf("good job");
    return;
}

void P9()
{
    printf("띄어 쓰기");
    return;
}

void P10()
{
    printf("ab 12 호");
    return;
}

void P11()
{
    printf("%d", 5);
    return;
}

void P12()
{
    int a=60;
    printf("%d", a);
    return;
}

void P13()
{
    int a=10;
    printf("a");
    return;
}

void P14()
{
    printf("%s", "string");
    return;
}

void P15()
{
    char txt='p';
    printf("%c", txt);
    return;
}

void P16()
{
    int a=1, b=4;
    printf("%d %d", b, a);
    return;
}

void P17()
{
    char t1='t', t2='5';
    printf("%c %c%c", t1, t2, t1);
    return;
}

void P18()
{
    int s1;
    scanf("%d", &s1); // 8 입력
    printf("%d%d", s1, s1);
    return;
}

void P19()
{
    char c2;
    scanf("%d", &c2); // s 입력
    printf("%c %c", c2, c2);
    return;
}

void P20()
{
    int a, b;
    scanf("%d", &a); // 5 입력
    scanf("%d", &b); // 10 입력
    printf("%d %d", b, a);
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