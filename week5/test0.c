#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int *list = malloc(3 * sizeof(int));
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //time passes

    int *tmp = malloc(5 * sizeof(int));

    //copy old array into new array

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    
    tmp[3] = 4; 
    tmp[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", tmp[i]);
    }
}