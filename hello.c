#include <stdio.h>


int main()
{
    char a[20];
    printf("What is your name? ");
    scanf("%19s", a);

    printf("Hello, %s\n", a );

    return 0;
}