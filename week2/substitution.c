#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char key[27], char key_lower[27], char message[]);
void convert_to_lower(char key_lower[27]);
void convert_to_upper(char key[27]);
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    
    if (strlen(argv[1]) > 26)
        {
            printf("More then 26 letter\n");
            return 1;
        }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./substitution key\n");
            //if we return 1; it's mean that program over
            return 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
    for (int j = i + 1; j < 26; j++)
    {
        // Check for duplicates (case-insensitive)
        if (tolower(argv[1][i]) == tolower(argv[1][j]))
        {
            printf("Key contains duplicate characters.\n");
            return 1; // THIS IS CRITICAL TO STOP THE PROGRAM
        }
    }
}

    char key[27];
    char key_lower[27];
    strcpy(key, argv[1]);
    strcpy(key_lower, argv[1]);
    
    convert_to_upper(key);
    convert_to_lower(key_lower);

    char message[100];

    printf("plaintext:");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    encrypt(key, key_lower, message);
    printf("ciphertext:%s\n", message);


    
    


}

void encrypt(char key[27], char key_lower[27], char message[])
{
    
    for (int i = 0, length = strlen(message); i < length; i++)
    {
        char c = message[i];
        if (isupper(c))
        {
            message[i] = key[c - 'A'];
        }
        else if (islower(c))
        {
            message[i] = key_lower[c - 'a'];
            
        }

    }
}

void convert_to_lower(char key_lower[27])
{
    for (int i = 0, n = strlen(key_lower); i < n; i++)
    {
        if(isupper(key_lower[i]))
        {
            key_lower[i] = tolower(key_lower[i]);
        }
    }
}

void convert_to_upper(char key[27])
{
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if(islower(key[i]))
        {
            key[i] = toupper(key[i]);
        }
    }

}
