#include <stdio.h>

void P1()
{
    int a;
    a=1;
    a++;
    printf("%d", a);

    printf("\n");
    return;
}

void P2()
{
    int a=5;
    a=++a;
    printf("%d", a);

    printf("\n");
    return;
}

void P3()
{
    int a, b;
    a=15;
    b=10;
    printf("%d", ++a + --b);

    printf("\n");
    return;
}

void P4()
{
    int a=10, n;
    n=a++;
    printf("%d", n);

    printf("\n");
    return;
}

void P5()
{
    int a=5;
    a*=2;
    printf("%d", a);

    printf("\n");
    return;
}

void P6()
{
    int a=10;
    a+=a;
    printf("%d", a);

    printf("\n");
    return;
}

void P7()
{
    int n=20;
    n/=3;
    printf("%d", n);

    printf("\n");
    return;
}

void P8()
{
    int a=15, b=25;
    b-=a;
    printf("%d", b);

    printf("\n");
    return;
}

void P9()
{
    int a=10;
    printf("%d ", --a);
    printf("%d", a);

    printf("\n");
    return;
}

void P10()
{
    int b=20;
    printf("%d ", b++);
    printf("%d", b--);

    printf("\n");
    return;
}

void P11()
{
    int c=11;
    printf("%d ", --c+2);
    printf("%d", ++c);

    printf("\n");
    return;
}

void P12()
{
    int d=15;
    printf("%d ", d-5);
    printf("%d", --d);

    printf("\n");
    return;
}

void P13()
{
    int n=32;
    n/=2;
    n/=2;
    n/=2;
    printf("%d", n);

    printf("\n");
    return;
}

void P14()
{
    int n=15;
    n+=10;
    n-=5;
    n*=2;
    printf("%d", n);

    printf("\n");
    return;
}

void P15()
{
    int a=10, b=20, n;
    n=a+b;
    n-=a;
    n+=b;
    printf("%d", n);

    printf("\n");
    return;
}

void P16()
{
    int a=5, b=50, n;
    n=b-a;
    n-=++a;
    n+=--b;
    printf("%d", n);

    printf("\n");
    return;
}

void P17()
{
    int a=1, b=5, c=10;
    a=++a;
    b=b++;
    c=a*b+c;
    printf("%d %d %d", a, b, c);

    printf("\n");
    return;
}

void P18()
{
    int n=10, k=5;
    k++;
    n=k++;
    n=n*k++;
    printf("%d %d", n, k);

    printf("\n");
    return;
}

void P19()
{
    int i=0;
    int a[3]={4, 5, 6};
    a[i++]=i;
    printf("%d %d", a[0], a[1]);

    printf("\n");
    return;
}

void P20()
{
    int i=0;
    int a[5]={5, 4, 3, 2, 1};
    printf("%d ", a[i++]);
    printf("%d ", a[i*2]);
    printf("%d", a[--i]);

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