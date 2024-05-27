#include <stdio.h>

void P01() // [Study]
{
    int a[5];
    int b[5]={10, 20, 30, 40, 50};
    int c[5]={10, 20, 30};
    int d[]={10, 20, 30};
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ", d[i]);
    }

    printf("\n------------\n");
    return;
}

void P1()
{
    int a[3]={10, 20, 30};
    printf("%d", a[2]);

    printf("\n------------\n");
    return;
}

void P2()
{
    int b[3]={10, 20, 30};
    b[1]=50;
    printf("%d", b[1]);

    printf("\n------------\n");
    return;
}

void P3()
{
    int c[3]={10, 20, 30};
    c[2]=c[0];
    printf("%d", c[2]);

    printf("\n------------\n");
    return;
}

void P4()
{
    int d[3]={10, 20, 30};
    printf("%d", d[0]+d[1]);

    printf("\n------------\n");
    return;
}

void P02() // [Study]
{
    int a[2][3];
    int b[2][3]={10, 20, 30, 40, 50, 60};
    int c[2][3]={10, 20, 30};
    int d[2][3]={{10}, {20, 30}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    printf("\n------------\n");
    return;
}

void P5()
{
    int a[2][3]={10, 20, 30};
    printf("%d", a[1][2]);

    printf("\n------------\n");
    return;
}

void P6()
{
    int a[2][3]={10, 20, 30};
    printf("%d\n", a[0][1]+a[1][2]);
    printf("%d", a[0][0]+a[1][1]);

    printf("\n------------\n");
    return;
}

int main()
{
    P01();
    P1();
    P2();
    P3();
    P4();
    P02();
    P5();
    P6();
    return 0;
}