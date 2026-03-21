#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    *p = 25;
    printf("%d\n", *p);
    printf("%d\n", n);
}