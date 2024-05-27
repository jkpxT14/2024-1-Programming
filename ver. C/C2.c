#include <stdio.h>

void P1() // 변수의 할당, Swap
{
    int a=1, b=2;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d %d", a, b, temp);

    printf("\n------------\n");
    return;
}

void P2() // 변수의 할당
{
    int a=1, b=2;
    a=a+b; // a+=b;
    b=a-b;
    printf("%d %d", a, b);

    printf("\n------------\n");
    return;
}

// [For Your Information, FYI] sizeof

void P3() // putchar()
{
    char c='h';
    putchar(c);
    putchar(66);

    printf("\n------------\n");
    return;
}

void P4() // puts()
{
    puts("hello");
    puts("world");

    printf("\n------------\n");
    return;
}

void P5() // printf()
{
    printf("hello");
    printf("world");

    printf("\n------------\n");
    return;
}

void P6() // printf()
{
    printf("hello \n");
    printf("world");

    printf("\n------------\n");
    return;
}

void P7() // printf()
{
    printf(" 이름: %s\n", "김영상");
    printf(" 나이: %d살", 17);

    printf("\n------------\n");
    return;
}

void P8() // printf()
{
    int a=5;
    printf("a의 값은 %d", a);

    printf("\n------------\n");
    return;
}

void P9() // printf()
{
    printf("%s \t", "Good");
    printf("%s", "bye!");

    printf("\n------------\n");
    return;
}

void P10() // printf()
{
    float a=51.78312;
    printf("몸무게: %f \n", a);
    printf("몸무게: %.2f", a);

    printf("\n------------\n");
    return;
}

void P11() // getchar()
{
    char c=getchar();
    putchar(c);

    printf("\n------------\n");
    return;
}

void P12() // gets()
{
    getchar();
    char s[100];
    gets(s);
    puts(s);

    printf("\n------------\n");
    return;
}

void P13()
{
    char c1, c2[100];
    c1=getchar(); // [Caution] getchar(c1);
    putchar(c1);

    getchar();
    printf("\n");

    gets(c2);
    puts(c2);

    printf("\n------------\n");
    return;
}

void P14() // scanf()
{
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("입력한 수는 %d와 %d입니다.", a, b);

    printf("\n------------\n");
    return;
}

void P15() // scanf()
{
    int a, b;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("두 수의 합은 %d입니다.", a+b);

    printf("\n------------\n");
    return;
}

void P16() // scanf()
{
    int height, weight;
    printf("키와 몸무게를 입력하세요 : ");
    scanf("%d %d", &height, &weight);
    printf("키는 %dcm이고 몸무게는 %dkg입니다.", height, weight);

    printf("\n------------\n");
    return;
}

void P17() // scanf()
{
    getchar();
    char c;
    printf("좋아하는 알파벳을 입력하세요 : ");
    c=getchar();
    printf("당신은 %c를 좋아하는군요.", c);

    printf("\n------------\n");
    return;
}

// void P18_Wrong() // scanf()
// {
//     int i;
//     printf(" 두 수를 입력하세요 : ")
//     scanf("%d %d", &i, &j);
//     printf("입력한 수는 %d, %d이고 두 수의 합은 i+j이다.", i, j);

//     printf("\n");
//     return;
// }

void P18_Correct() // scanf()
{
    int i, j;
    printf(" 두 수를 입력하세요 : ");
    scanf("%d %d", &i, &j);
    printf("입력한 수는 %d, %d이고 두 수의 합은 %d이다.", i, j, i+j);

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
    P18_Correct();
    return 0;
}