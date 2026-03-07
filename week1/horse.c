#include <stdio.h>

int main(void) {
    int N = 5; // Размер массива
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < N / 2; i++) {
    // 1. Находим "зеркальный" индекс
        int j = N - 1 - i;
        
        // 2. Делаем SWAP (обмен) через "третий стакан"
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}
}