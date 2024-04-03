#include <stdio.h>

void P1()
{
    int result=4+3*5;
    printf("%d", result);

    printf("\n");
    return;
}

void P2()
{
    int a=13, b=5;
    printf("%d %d %d %d %d", a+b, a-b, a*b, a/b, a%b);

    printf("\n");
    return;
}

void P3()
{
    int a=13, b=5;
    printf("%d %d %d %d %d %d", a<b, a>b, a<=b, a>=b, a!=b, a==b);

    printf("\n");
    return;
}

void P4()
{
    int a=13, b=5, temp;
    printf("%d %d \n", a==13 && b==5, a==13 && b==4);
    printf("%d %d \n", a==13 || b==5, a==13 || b==4);
    temp=a;
    printf("%d", !temp);
    temp=0;
    printf("%d", !temp);

    printf("\n");
    return;
}

void P5()
{
    int a=13;
    int b=5;
    printf("%d %d %d %d", a&b, a|b, a^b, ~a);

    printf("\n");
    return;
}

void P6()
{
    int i=13, j=5, temp, a=10, b=20, c=30, d=40;
    temp=++i;
    printf("%d %d \n", temp, i);
    temp=i++;
    printf("%d %d \n", temp, i);
    temp=--j;
    printf("%d %d \n", temp, i);
    temp=j--;
    printf("%d %d \n", temp, i);
    ++a;
    b++;
    --c;
    d--;
    printf("%d %d %d %d", a, b, c, d);

    printf("\n");
    return;
}

void P7() // [Study]
{
    int a=13, b=5, result;
    result=a<b ? 10:100;
    printf("%d", result);

    printf("\n");
    return;
}

void P8()
{
    int price, person;
    printf("총 금액: "); // 입력 10000
    scanf("%d", &price);
    printf("총 인원: "); // 입력 4
    scanf("%d", &person);
    printf("%d명이 각각 %d원씩 지불", person, price/person); // 출력 4명이 각각 2500원씩 지불

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