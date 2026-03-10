#include <stdio.h>
#include <string.h>
#include <ctype.h>


const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int count_points(const int POINTS[], char player1[50], int length1);
const char *who_win(int count1, int count2);

int main(void)
{
    int length1;
    int length2;
    char player1[50];
    char player2[50];

    printf("Player 1: ");
    scanf("%49s", player1);
    printf("Player 2: ");
    scanf("%49s", player2);
    
    length1 = strlen(player1);
    length2 = strlen(player2);
    
    int count1 = count_points(POINTS, player1, length1);
    int count2 = count_points(POINTS, player2, length2);
    const char *win = who_win(count1, count2);
    printf("%s", win);
}

const char *who_win(int count1, int count2)
{
    
    if (count1 > count2)
    {
        return "Player 1 wins!\n";
    }
    else if (count2 > count1)
    {
        return "Player 2 wins!\n";
    }
    else
    {
        return "Tie!\n";
    }

}

int count_points(const int POINTS[], char player[50], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (isupper(player[i]))
        {
            sum += POINTS[player[i] - 'A'];
        }
        else if (islower(player[i]))
        {
            sum += POINTS[player[i] - 'a'];
        }
    }
    
    return sum;

}