#include <stdio.h>

void print_row(int bricks, int spaces);


void print_row(int bricks, int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");        
    }
    for (int j = 0; j < bricks; j++) {    
        printf("#");
    }
    printf("  ");
    for (int j = 0; j < bricks; j++) {    
        printf("#");
    }

    
}
int main(void) {
    int n;
    
    do {
        printf("Height: ");
        scanf("%d", &n);
    } while (n < 1);

    for (int i = 1; i <= n; i++) {
        print_row(i, n - i);
        printf("\n");
        
    }
    
}