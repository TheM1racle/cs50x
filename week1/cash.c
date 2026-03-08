#include <stdio.h>

int calculate_quarters(int cents);

int calculate_quarters(int cents)
{
    int quarters = 0;

    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }

    while (cents >= 10)
    {
        quarters++;
        cents = cents - 10;
    }

    while (cents >= 5)
    {
        quarters++;
        cents = cents - 5;
    }

    while (cents >= 1)
    {
        quarters++;
        cents = cents - 1;
    }

    return quarters;
}
int main(void)
{
    int cents;

    do
    {
        printf("Change owed: ");
        scanf("%d", &cents);
    }
    while (cents <= 0);

    int result = calculate_quarters(cents);
    printf("Result: %d\n", result);
}
