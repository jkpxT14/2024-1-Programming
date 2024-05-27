#include <stdio.h>

void P01()
{
    int a=10;
    a=9;
    a=8;
    a=1;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P02()
{
    char c='b';
    c='a';
    c='t';
    c='Q';
    printf("%c", c);

    printf("\n------------\n");
    return;
}

void P03()
{
    int a=3;
    int b=6;
    int c=4;
    a=b+c;
    printf("%d", a);
    
    printf("\n------------\n");
    return;
}

void P04()
{
    int a=10;
    a=a+1; // a+=1;
    a=a+4; // a+=4;
    a=a+a; // a+=a; a*=2;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P1()
{
    int a;
    a=1;
    a=2;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P2()
{
    int a=5;
    a=a+a; // a+=a; a*=2;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P3()
{
    int a, b;
    a=10;
    b=15;
    printf("%d", a+b);

    printf("\n------------\n");
    return;
}

void P4()
{
    int a=5;
    a=a*a;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P5()
{
    int a, b;
    a=1;
    a=2;
    b=10;
    printf("%d", a+b);

    printf("\n------------\n");
    return;
}

void P6()
{
    int a, b, sum=0;
    a=3;
    b=6;
    sum=a+b;
    printf("%d", sum);

    printf("\n------------\n");
    return;
}

void P7()
{
    int a, b;
    a=5;
    b=10;
    a=a+a;
    b=a+b;
    printf("%d %d", a, b);

    printf("\n------------\n");
    return;
}

void P8()
{
    int a=1;
    a=a+1;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P9()
{
    int a=1, b=2, c=3;
    a=b+c;
    b=a+c;
    c=a+b;
    printf("%d %d %d", a, b, c);

    printf("\n------------\n");
    return;
}

void P10()
{
    int a=10;
    printf("%d ", a+a);
    printf("%d", a/2);

    printf("\n------------\n");
    return;
}

void P11()
{
    int a[5]={0, 1, 2, 3, 4};
    printf("%d ", a[0]);
    printf("%d ", a[1]);
    printf("%d ", a[2]);
    printf("%d ", a[3]);
    printf("%d", a[4]);

    // for(int i=0; i<5; i++){
    //     printf("%d ", a[i]);
    // }

    printf("\n------------\n");
    return;
}

void P12()
{
    int n=32;
    n=n/2;
    n=n/2;
    n=n/2;
    n=n/2;
    n=n/2;
    printf("%d", n);

    // for(int i=0; i<5; i++){
    //     n/=2;
    // }
    // printf("%d", n);

    printf("\n------------\n");
    return;
}

void P13()
{
    int a, b, c;
    a=1;
    b=3;
    c=5;
    a=a+a;
    b=a+b;
    c=b*c;
    printf("%d %d %d", a, b, c);

    printf("\n------------\n");
    return;
}

void P14()
{
    int i=1;
    int a[2]={0, 0};
    a[i]=i;
    printf("%d %d", a[0], a[1]);

    printf("\n------------\n");
    return;
}

void P15()
{
    int i=1;
    int a[3]={5, 25, 50};
    i=i*2;
    printf("%d", a[i]*2);

    printf("\n------------\n");
    return;
}

void P16()
{
    int i=1;
    int a[5]={10, 20, 30, 40, 50};

    // int a[5];
    // for(int i=1; i<=5; i++){
    //     a[i]=10*i;
    // }

    printf("%d ", a[i]);
    i=i*2;
    printf("%d", a[i]);

    printf("\n------------\n");
    return;
}

void P17()
{
    int a=1;
    printf("%d ", a);
    a=a+2;
    printf("%d ", a);
    a=a+2;
    printf("%d ", a);
    a=a+2;
    printf("%d ", a);
    a=a+2;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P18()
{
    int a=1;
    printf("%d ", a);
    a=a*2;
    printf("%d ", a);
    a=a*2;
    printf("%d ", a);
    a=a*2;
    printf("%d ", a);
    a=a*2;
    // printf("%d", a);

    printf("\n------------\n");
    return;
}

void P19()
{
    int a=1;
    a=a*2;
    a=a+1;
    a=a*2;
    a=a+1;
    a=a*2;
    a=a+1;
    a=a*2;
    a=a+1;
    printf("%d", a);

    printf("\n------------\n");
    return;
}

void P20()
{
    int a=64;
    a=a+1;
    printf("%c ", a);
    a=a+1;
    printf("%c ", a);
    a=a+1;
    printf("%c", a);

    printf("\n------------\n");
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