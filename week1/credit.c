#include <stdio.h>

int main(void) 
{
    long long number = 0;

    //input from user
    do 
    {
        printf("Number: ");
        scanf("%lli", &number);

    } while (number <= 0);

    long long first_digit_two = number;
    
    int digit1 = 0;
    int summa_odd = 0; 
    int summa_even = 0;
    int isSecond = 0;
    int digit = 0;
    int count = 0; //length of our number
    //algorithm luna
    while (number >= 1)
    {
        digit = number % 10;
        if (isSecond == 1)
        {
            digit1 = digit;
            digit1 *= 2;
            if (digit1 > 9)
            {
                digit1 -= 9;
                summa_even += digit1;
            }
            else
            {
                summa_even += digit1;
            }

        }
        else 
        {
            summa_odd += digit;
        }
        
        isSecond = 1 - isSecond;
        number = number / 10;
        count++;
    }

    int result = summa_even + summa_odd;
    char *name = "INVALID\n";

    if (result % 10 == 0)
    {
        while (first_digit_two >= 100)
        {
            first_digit_two /= 10;
        }

        int first_digit = first_digit_two / 10;

        if ((count == 13 || count == 16) && first_digit == 4)
        {
            name = "VISA\n";
        }
        else if (count  == 16 && (first_digit_two >= 51 && first_digit_two <= 55))
        {
            name = "MASTERCARD\n";
        }
        else if (count == 15 && (first_digit_two == 34 || first_digit_two == 37))
        {
            name = "AMEX\n";
        }
        
        
    }
    else
    {
        name = "INVALID\n";
    }
    printf("%s", name);
    return 0;
}