#include <stdio.h>

void P01()
{
    int a=10;
    if(a>5){
        a--;
        printf("크다");
    }
    else{
        a++;
        printf("작다");
    }

    printf("\n------------\n");
    return;
}

void P02()
{
    int a=85;
    if(a>=90){
        printf("Cool");
    }
    else if(a==85){
        printf("Good");
    }
    else{
        printf("X");
    }
    printf("끝!");

    printf("\n------------\n");
    return;
}

void P1()
{
    int n=10;
    if(n>5){
        printf("big");
    }

    printf("\n------------\n");
    return;
}

void P2()
{
    int n=3;
    if(n>5){
        printf("big");
    }
    else{
        printf("small");
    }

    printf("\n------------\n");
    return;
}

void P3()
{
    int n=5;
    if(n>0){
        printf("plus");
    }
    else{
        printf("minus");
    }
    
    printf("\n------------\n");
    return;
}

void P4()
{
    char a='c';
    if(a=='c'){
        printf("answer");
    }

    printf("\n------------\n");
    return;
}

void P5()
{
    int n=9;
    if(n%2==1){
        printf("홀수");
    }

    printf("\n------------\n");
    return;
}

void P6()
{
    int n=10;
    if(n%2==0){
        printf("짝수");
    }

    printf("\n------------\n");
    return;
}

void P7()
{
    int n=3;
    if(n%2==1){
        printf("홀수");
    }
    else{
        printf("짝수");
    }

    printf("\n------------\n");
    return;
}

void P8()
{
    int n=20;
    if(n%3==0){
        printf("3의 배수");
    }
    else{
        printf("3의 배수 아님");
    }
    printf("end");

    printf("\n------------\n");
    return;
}

void P9()
{
    int n=21;
    if(n%7==0){
        printf("7의 배수");
    }
    else{
        printf("7의 배수 아님");
    }

    printf("\n------------\n");
    return;
}

void P10()
{
    int a=2, b=3;
    if(a>b){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }

    printf("\n------------\n");
    return;
}

void P11()
{
    int a=1, b=2, c, d;
    if(a>b){
        c=a-b;
        printf("%d", c+1);
    }
    else{
        d=a+b;
        printf("%d", d-1);
    }

    printf("\n------------\n");
    return;
}

void P12()
{
    int n=15;
    n%=10;
    if(n<=4){
        printf("small");
    }
    else{
        printf("big");
    }

    printf("\n------------\n");
    return;
}

void P13()
{
    int n=10;
    if(n!=10){
        printf("answer");
    }
    else{
        printf("wrong");
    }

    printf("\n------------\n");
    return;
}

void P14()
{
    int n=10;
    if(n<=10){
        n++;
        printf("%d", n);
    }
    else{
        printf("%d", n-1);
    }

    printf("\n------------\n");
    return;
}

void P15()
{
    int n=4;
    if(n>=10){
        printf("A");
    }
    else if(n>=5){
        printf("B");
    }
    else{
        printf("C");
    }

    printf("\n------------\n");
    return;
}

void P16()
{
    int key='e';
    if(key=='a'){
        printf("A");
    }
    else if(key=='c'){
        printf("C");
    }
    else{
        printf("E");
    }

    printf("\n------------\n");
    return;
}

void P17() // [Caution]
{
    int n=100;
    if(n<=1000){
        printf("천");
    }
    else if(n<=100){
        printf("백");
    }
    else{
        printf("ETC");
    }

    printf("\n------------\n");
    return;
}

void P18()
{
    int n=100;
    if(n==30){
        printf("30 ok");
    }
    else if(n==60){
        printf("60 ok");
    }
    else{
        printf("big");
    }

    printf("\n------------\n");
    return;
}

void P19()
{
    int a[5]={1, 2, 3, 4, 5};
    int b[3]={10, 20, 30};
    if(a[0]*10>=b[0]){
        printf("OK");
    }
    else{
        printf("X");
    }

    printf("\n------------\n");
    return;
}

void P20()
{
    int a=3, b=4;
    if(a>b){
        printf("a가 큼");
    }
    else if(a<b){
        printf("b가 큼");
    }
    else{
        printf("같음");
    }

    printf("\n------------\n");
    return;
}

int main()
{
    P01();
    P02();
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