#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void encrypt(char name[100], int shift);
void decrypt(char name[100], int shift);

int main(int argc, char *argv[])
{
    //logic of argv || check what user input || we get only 2 argv ./ceaser X (digit)
    if (argc != 2)
    {
        printf("Usage: ./test1 key\n");
        return 1;
    }
    //checking that our argv[1] equil only digit in all array
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./test1 key\n");
            //if we return 1; it's mean that program over
            return 1;
        }
    }

    //argv is a string(char *) and we need convert to int 
    int shift = atoi(argv[1]);
    char name[100];

    printf("plaintext:  ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    //the most interesting moment we don't need declare new function because encrypt works with char and this already pointer
    encrypt(name, shift);
    
    printf("ciphertext: %s\n", name);
    return 0;
}

void encrypt(char name[100], int shift)
{
    int n = 0;
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        char c = name[i];
        if (isupper(c))
        {
            name[i] = ((c - 'A') + shift + 26) % 26 + 'A';
        }
        else if (islower(c))
        {
            name[i] = ((c - 'a') + shift + 26) % 26 + 'a';
        }

    }
}

void decrypt(char name[100], int shift)
{
    int n = 0;
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        char c = name[i];
        if (isupper(c))
        {
            name[i] = ((c - 'A') - shift + 26) % 26 + 'A';
        }
        else if (islower(c))
        {
            name[i] = ((c - 'a') - shift + 26) % 26 + 'a';
        }

    }
}