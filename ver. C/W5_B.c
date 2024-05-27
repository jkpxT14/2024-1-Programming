#include <stdio.h>

void P1()
{
    for(int i=1; i<=3; i++){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P2()
{
    for(int i=1; i<=5; i++){
        printf("*");
    }

    printf("\n");
    return;
}

void P3()
{
    for(int i=1; i<=3; i++){
        printf("Hi ");
    }
    
    printf("\n");
    return;
}

void P4()
{
    for(int i=0; i<5; i++){
        printf("%d ", 5-i);
    }

    printf("\n");
    return;
}

// [Study]
void P5()
{
    int n;
    for(n=0; n<10; n++){
        n++;
    }
    printf("%d", n);

    printf("\n");
    return;
}

void P6()
{
    int a;
    for(int i=0; i<5; i++){
        a=i;
    }
    printf("%d", a);

    printf("\n");
    return;
}

void P7()
{
    int cnt=0;
    for(int i=1; i<=5; i++){
        cnt++;
    }
    printf("%d", cnt);

    printf("\n");
    return;
}

void P8()
{
    int s=10;
    for(int a=0; a<3; a++){
        s++;
        printf("%d ", a);
    }

    printf("\n");
    return;
}

void P9()
{
    for(int i=0; i<10; i+=2){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P10()
{
    for(int i=10; i<=14; i+=2){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P11()
{
    for(int a=3; a>0; a--){
        printf("%d ", a);
    }

    printf("\n");
    return;
}

void P12()
{
    for(int a=5; a>0; a-=2){
        printf("%d ", a);
    }

    printf("\n");
    return;
}

void P13()
{
    int a=5;
    while(a>0){
        printf("%d ", a);
        a--;
    }

    printf("\n");
    return;
}

void P14()
{
    int a=5;
    while(a>0){
        a--;
        printf("%d ", a);
    }

    printf("\n");
    return;
}

void P15()
{
    int a=0, n=10;
    while(a<n){
        a+=2;
        printf("%d ", a);
    }

    printf("\n");
    return;
}

void P16()
{
    int a=0, n=10;
    while(a<n){
        printf("%d ", a);
        a+=2;
    }

    printf("\n");
    return;
}

void P17()
{
    int n=1;
    while(n<50){
        n*=2;
        pritnf("%d ", n);
    }

    printf("\n");
    return;
}

void P18()
{
    int n=1;
    while(n<50){
        printf("%d ", n);
        n*=2;
    }

    printf("\n");
    return;
}

void P19()
{
    int s=0;
    for(int a=0; a<5; a++){
        s+=a;
    }
    printf("%d", s);

    printf("\n");
    return;
}

void P20()
{
    int a=1, s=0;
    while(a<7){
        s+=a;
        a++;
    }
    printf("%d", s);

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