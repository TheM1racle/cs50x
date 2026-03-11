#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int count_letters(char text[4096]);
int count_words(char text[4096]);
int count_sentences(char text[4096]);

int main(void)
{
    char text[4096];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
    return 0;
}

int count_letters(char text[4096])
{
    int length = 0;
    int letters = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    } 
    return letters; 
}

int count_words(char text[4096])
{
    int length = 0;
    int words = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words + 1;
}

int count_sentences(char text[4096])
{
    int length = 0;
    int sentences = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences++;
        }
    }
    
    return sentences;
}
