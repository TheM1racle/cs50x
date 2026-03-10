#include <stdio.h>
#include <string.h>


int main(void) 
{
    int salam[5];
    int tabak[5] = {5, 25, 125, 1255, 10000};
    salam[0] = 3;
    salam[1] = 6;
    salam[2] = 12;
    salam[3] = 22;
    salam[4] = 44;

    for (int i = 0; i < 5; i++) 
    {
        printf("%d -->> %d\n", salam[i] * 2, tabak[i] * 2);
    }
}