#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[3][3];

    printf("Matritsani 9ta sob bn to'ldiring :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("To'liq matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Faqat toqlar:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            if (arr[i][j] % 2 != 0)   // 2ga bulsak va 0ga teng bulmasa demak - TOQ
                printf("%d ", arr[i][j]);
            
        }
    }
    return 0;
}
