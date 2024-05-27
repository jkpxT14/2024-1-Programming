#include <stdio.h>

void P1()
{
    for(int i=1; i<=5; i++){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P2()
{
    int num;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        printf("%d ", i);
    }

    printf("\n");
    return;
}

void P3()
{
    printf("구구단 출력\n");

    for(int i=1; i<10; i++){
        printf("2 * %d = %d\n", i, 2*i);
    }

    printf("\n");
    return;
}

void P4()
{
    int num;
    printf("출력하고 싶은 단수를 입력하세요 : ");
    scanf("%d", &num);
    printf("%d단 출력\n", num);

    for(int i=1; i<10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }

    printf("\n");
    return;
}

void P5()
{
    int a=1;
    while(a<6){
        printf("%d ", a);
        a++;
    }

    printf("\n");
    return;
}

void P6()
{
    int a=1, sum=0;
    while(a!=0){
        printf("값을 입력하세요 : ");
        scanf("%d", &a);
        sum+=a;
    }
    printf("총 %d입니다.", sum);

    printf("\n");
    return;
}

void P7()
{
    int a=1;
    do{
        printf("%d ", a);
        a++;
    } while(a<6);

    printf("\n");
    return;
}

void P8()
{
    for(int i=1; i<=9; i++){
        printf("%d단\n------------\n", i);
        for(int j=1; j<=9; j++){
            printf("%d * %d = %2d\n", i, j, i*j);
        }
        printf("\n");
    }

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
    return 0;
}