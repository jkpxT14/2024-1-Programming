#include <stdio.h>

int main()
{
    char c1, c2[100];
    c1=getchar(); // [Caution] getchar(c1);
    putchar(c1);
    gets(c2);
    puts(c2);
}