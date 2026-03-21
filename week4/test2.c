#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const int HEADER_SIZE = 44;

int main(void)
{
    FILE *output = fopen("elnur.wav", "r");
    FILE *read = fopen("input.wav", "r");
    uint8_t header[8];
    if (read == NULL)
    {
        printf("doesn't exists.");
        return 1;
    }
    else
    {
        char c;
        while (fread(&c, sizeof(char), 1, read) != 0)
        {
            printf("%c", c);
        }
    }
}