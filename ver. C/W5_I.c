#include <stdio.h>

void P1()
{
    for(int i=5; i<10; i++){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P2()
{
    for(int i=1; i<=3; i++){
        printf("** ");
    }

    printf("\n");
    return;
}

void P3()
{
    int a=5, d=4, n=5;
    for(int i=1; i<n; i++){
        a+=d;
    }
    printf("%d", a);
    
    printf("\n");
    return;
}

void P4()
{
    int a=20, d=3, n=0;
    for(int i=5; i>=n; i--){
        a-=d;
    }
    printf("%d", a);

    printf("\n");
    return;
}

void P5()
{
    for(int i=10; i<=15; i++){
        if(i>12){
            printf("%d ", i);
        }
    }

    printf("\n");
    return;
}

void P6()
{
    for(int i=0; i<10; i+=2){
        if(i==4){
            printf("%d ", i);
            break;
        }
    }

    printf("\n");
    return;
}

void P7()
{
    int sum=0;
    for(int n=0; n<=10; n++){
        if(n>5){
            sum++;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P8()
{
    int sum=0;
    for(int n=0; n<=5; n++){
        if(n>=3){
            sum+=2;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P9()
{
    int sum=0;
    for(int n=0; n<=10; n++){
        if(n<3){
            sum+=n;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P10()
{
    int sum=0;
    for(int n=0; n<5; n++){
        if(n>2){
            sum+=n;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P11()
{
    int sum=0;
    for(int n=0; n<=10; n++){
        if(n%2==0){
            sum+=n;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P12()
{
    int sum=0;
    for(int n=0; n<=9; n++){
        if(n%3==0){
            sum+=n;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P13()
{
    int n=5, sum=0;
    for(int i=12; i>n; i--){
        if(i%4==0){
            sum++;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P14()
{
    int b=18, n=0;
    for(int i=3; i<=b; i++){
        n++;
        if(i%7==0){
            break;
        }
    }
    printf("%d", n);

    printf("\n");
    return;
}

void P15()
{
    int n, sum=0;
    scanf("%d", &n); // 30 입력
    for(int i=1; i<=n; i++){
        if(i%10==3){
            sum++;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P16()
{
    int n, sum=10;
    scanf("%d", &n); // 20 입력
    for(int i=1; i<=n; i++){
        if(i%5==0){
            sum--;
        }
    }
    printf("%d", sum);

    printf("\n");
    return;
}

void P17()
{
    int a=7;
    for(;;){
        printf("%d ", a--);
        if(a<3){
            break;
        }
    }

    printf("\n");
    return;
}

void P18()
{
    int n=1000, num=0;
    for(;;){
        if(n>0){
            num++;
        }
        else{
            break;
        }
        n/=10;
    }
    printf("%d", num);

    printf("\n");
    return;
}

void P19()
{
    int cnt=0;
    while(1){
        cnt+=2;
        if(cnt>20){
            break;
        }
    }
    printf("%d", cnt);

    printf("\n");
    return;
}

void P20()
{
    int i=10;
    while(1){
        i-=2;
        if(i==5){
            printf("A");
        }
        if(i<5){
            break;
        }
    }
    printf("%d", i);

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