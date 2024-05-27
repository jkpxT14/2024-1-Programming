#include <stdio.h>

void P1()
{
    int a=1;
    while(a!=0){
        printf("숫자를 입력하고 [Enter]키를 누르세요 : ");
        scanf("%d", &a);
        if(a%2==1){
            printf("%d은 홀수입니다.\n", a);
        }
        else{
            printf("%d은 짝수입니다.\n", a);
        }
    }

    printf("\n------------\n");
    return;
}

void P2()
{
    int a=1;
    while(a!=0){
        printf("숫자를 입력하고 [Enter]키를 누르세요 : ");
        scanf("%d", &a);
        if(a%4==0){
            printf("%d은 4의 배수입니다.\n", a);
        }
        else{
            printf("%d은 4의 배수가 아닙니다.\n", a);
        }
    }

    printf("\n------------\n");
    return;
}

void P3()
{
    int sum=0;
    for(int i=1; i<=100; i++){
        if(i%7==0){
            sum+=i;
        }
    }
    printf("합계는 %d입니다.", sum);

    printf("\n------------\n");
    return;
}

void P4()
{
    int a, sum=0;
    printf("값을 입력하세요 : ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        sum+=i;
    }
    printf("입력한 수는 %d이고, 합계는 %d입니다.", a, sum);

    printf("\n------------\n");
    return;
}

void P5()
{
    for(int i=0; i<10; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n------------\n");
    return;
}

void P6()
{
    for(int i=0; i<10; i++){
        for(int j=10; j>i; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n------------\n");
    return;
}

void P7()
{
    for(int a=5; a>=0; a--){
        for(int b=0; b<a; b++){
            printf(" ");
        }
        for(int c=0; c<11-2*a; c++){
            printf("*");
        }
        printf("\n");
    }

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
    return 0;
}