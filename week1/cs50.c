#include <stdio.h>

void print(int count) {
    for (int i = 1; i <= count; i++) {
        printf("#");
    }
}
int main(void) {
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        print(row);
        printf("\n");
    }
}