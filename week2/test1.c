#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./test1 key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][0]))
        {
            printf("Usage: ./test1 key\n");
            return 1;
        }
    }

    int shift = atoi(argv[1]);
    
}