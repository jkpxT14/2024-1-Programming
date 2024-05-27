#include <stdio.h>

void P1()
{
    printf("나도 이제\nC마스터");

    printf("\n------------\n");
    return;
}

void P2()
{
    int a;
    a=30;
    printf("%d\n", a);
    printf("%d\n", a*2);

    printf("\n------------\n");
    return;
}

void P3()
{
    int a=7, b, c;
    scanf("%d", &b); // 20 입력
    scanf("%d", &c); // 21 입력
    printf("%d %d %d", a, b, c);

    printf("\n------------\n");
    return;
}

void P4()
{
    int a=10;
    a=a*10;
    printf("정답은\n%d", a);

    printf("\n------------\n");
    return;
}

void P5()
{
    int a=3.14;
    float b=3.14;
    printf("%d %f", a, b);

    printf("\n------------\n");
    return;
}

void P6()
{
    float a=3.14;
    printf("%.4f", a);

    printf("\n------------\n");
    return;
}

void P7()
{
    float a=5.1234;
    float b=6.678910;
    printf("%.2f %.3f", a, b);

    printf("\n------------\n");
    return;
}

void P8()
{
    float c=0.9624;
    printf("%.1f", c);

    printf("\n------------\n");
    return;
}

void P9()
{
    int a=4;
    float b=0.12;
    char c='y';
    printf("%c ", c);
    printf("%d ", a);
    printf("%f", b);

    printf("\n------------\n");
    return;
}

void P10()
{
    int a=65, b;
    scanf("%d", &b); // 100 입력
    printf("점수는 %c, %d점", a, b);

    printf("\n------------\n");
    return;
}

void P11()
{
    int a=30, b=10, temp;
    printf("%d %d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d", a, b);

    printf("\n------------\n");
    return;
}

void P12()
{
    printf("\\ \" \'");

    printf("\n------------\n");
    return;
}

void P13()
{
    char a;
    scanf("%c", &a); // A 입력
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P14()
{
    int n;
    scanf("%d", &n); // 66 입력
    printf("%c", n);

    printf("\n------------\n");
    return;
}

void P15()
{
    char a;
    scanf("%c", &a); // E 입력
    printf("%c", a+32);

    printf("\n------------\n");
    return;
}

void P16()
{
    char a;
    scanf("%c", &a); // F 입력
    printf("%d %c\n", a, a);
    a+=10;
    printf("%d %c", a, a);

    printf("\n------------\n");
    return;
}

void P17()
{
    int a=11;
    printf("%x", a);

    printf("\n------------\n");
    return;
}

void P18()
{
    int a=10;
    printf("%o", a);

    printf("\n------------\n");
    return;
}

void P19()
{
    int a=13;
    printf("%X", a);

    printf("\n------------\n");
    return;
}

void P20()
{
    int a=13;
    printf("%X", a-3);

    printf("\n------------\n");
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