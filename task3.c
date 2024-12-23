#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLS 5

int main() {
    int arr[ROWS][COLS];

    srand(time(0));

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 50 - 10; // minus lar bilan ham toldirish uchun 
        }
    }

    printf("To'liq matritsa:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    
    printf("\n Qatori => ROWda Toq bo'lgan qiymatlar:\n");
    for (int i = 1; i < ROWS; i += 2) { 
        for (int j = 0; j < COLS; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
