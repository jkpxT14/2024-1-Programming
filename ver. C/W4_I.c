#include <stdio.h>

void P01()
{
    printf("%d\n", 0&&0);
    printf("%d\n", 1||0);
    printf("%d\n", 5||1);
    printf("%d\n", !1);
    printf("%d\n", 7>5 && 7<10);
    printf("%d\n", 3&&0);
    printf("%d\n", 3&&5);

    printf("\n");
    return;
}

void P02()
{
    int a=10;
    if(a>5){
        if(a>7){
            printf("7보다 큼");
        }
        else{
            printf("5보다 큼");
        }
    }

    printf("\n");
    return;
}

void P1()
{
    int n=10;
    if(n&&n){
        printf("참");
    }

    printf("\n");
    return;
}

void P2()
{
    int n=3;
    if(n&&n){
        printf("O");
    }
    else{
        printf("X");
    }

    printf("\n");
    return;
}

void P3()
{
    int n=0;
    if(n||2){
        printf("A");
    }
    printf("B");
    
    printf("\n");
    return;
}

void P4()
{
    int n=0;
    if(n||0){
        printf("A");
    }
    printf("B");

    printf("\n");
    return;
}

void P5()
{
    int n=3;
    if(n||2==1){
        printf("true");
    }
    else{
        printf("false");
    }

    printf("\n");
    return;
}

void P6()
{
    int n=0;
    if(!n==0){
        printf("true");
    }
    else{
        printf("false");
    }

    printf("\n");
    return;
}

void P7()
{
    int n=0;
    if(++n && 1){
        printf("true");
    }
    else{
        printf("false");
    }

    printf("\n");
    return;
}

void P8()
{
    int n=15;
    if(--n != 14){
        printf("A");
    }
    else{
        printf("B");
    }

    printf("\n");
    return;
}

void P9()
{
    int a=1, b=2;
    if(a&&b){
        printf("참");
    }
    else{
        printf("거짓");
    }

    printf("\n");
    return;
}

void P10()
{
    int a=0, b=1;
    if(a&&b){
        printf("참");
    }
    else{
        pritnf("거짓");
    }

    printf("\n");
    return;
}

void P11()
{
    int a=1, b=2;
    if(a<b && b==2){
        printf("참");
    }
    else{
        pritnf("거짓");
    }

    printf("\n");
    return;
}

void P12()
{
    int a=1, b=2;
    if(a>10 && b<10){
        printf("참");
    }
    else{
        pritnf("거짓");
    }

    printf("\n");
    return;
}

void P13()
{
    int a=10;
    if(a>3){
        if(a>5){
            printf("OK");
        }
    }

    printf("\n");
    return;
}

void P14()
{
    int a=0;
    if(a>1){
        if(a>2){
            printf("OK");
        }
    }
    printf("NO");

    printf("\n");
    return;
}

void P15()
{
    int a=10, b=5;
    if(a&&b){
        if(a||b){
            printf("A");
        }
    }
    printf("B");

    printf("\n");
    return;
}

void P16()
{
    int a=5;
    if(a>2){
        if(a>5){
            printf("A");
        }
        else{
            printf("B");
        }
    }

    printf("\n");
    return;
}

void P17()
{
    int n=1;
    if(n/3==1){
        printf("A");
    }
    else if(n/3==2){
        printf("B");
    }
    else if(n/3==3){
        printf("C");
    }
    else{
        printf("D");
    }

    printf("\n");
    return;
}

void P18()
{
    int n=4;
    if(n>=9){
        printf("A");
    }
    else if(n>=7){
        printf("B");
    }
    else if(n>=5){
        printf("C");
    }
    else if(n>=3){
        printf("D");
    }
    else{
        printf("E");
    }

    printf("\n");
    return;
}

void P19()
{
    int n=1;
    if(!n==1){
        printf("A");
    }
    else if(n&&0){
        printf("B");
    }
    else{
        printf("C");
    }

    printf("\n");
    return;
}

void P20()
{
    int a=3, b=5;
    if(a>b){
        if(a<b+3){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    else{
        if(a+3>b){
            printf("C");
        }
        else{
            printf("D");
        }
    }

    printf("\n");
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