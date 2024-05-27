#include <stdio.h>

void P1()
{
    int a=4;
    if(a==4){
        printf("네잎클로버");
    }

    printf("\n------------\n");
    return;
}

void P2()
{
    int a;
    printf("대여기간을 입력하세요 : ");
    scanf("%d", &a); // 입력 9
    if(a>7){
        printf("%d\n", a);
        printf("일주일 뒤");
    }

    printf("\n------------\n");
    return;
}

void P3()
{
    int a=3, b=1;
    if(a>=b){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }

    printf("\n------------\n");
    return;
}

void P4()
{
    int score;
    printf("점수를 입력하세요 : "); // 입력 82
    scanf("%d", &score);
    if(score>=70){
        printf("합격");
    }
    else{
        printf("불합격");
    }

    printf("\n------------\n");
    return;
}

void P5()
{
    int a=6, b=2;
    if(a>b){
        printf("a가 큼");
    }
    else if(a==b){
        printf("a와 b가 같음");
    }
    else{
        printf("b가 큼");
    }

    printf("\n------------\n");
    return;
}

void P6()
{
    int score;
    char grade;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    switch(score){
        case 10:
        case 9:
            grade='A';
            break;
        case 8:
            grade='B';
            break;
        case 7:
            grade='C';
            break;
        case 6:
            grade='D';
            break;
        default:
            grade='F';
    }
    printf("점수는 %d점으로 학점은 %c입니다.", score, grade);

    printf("\n------------\n");
    return;
}

// [Incomplete]
void P7()
{
    getchar();
    char alp;
    printf("영문자를 입력하세요 : ");
    scanf("%c", &alp);
    switch(alp){
        case 'a':
        case 'A':
            printf("에이");
            break;
        default:
            printf("영문자가 아닙니다.");
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
    return 0;
}