#include <stdio.h>

int main(){
    int arr[3][4];

    printf("Matritsani to'ldiring (12 ta son kiriting): \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("To'liq matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n 0 chi-qatordagi qiymatlar:\n");
    for (int j = 0; j < 4; j++) {
        printf("%d ", arr[0][j]);
    }
    printf("\n");

    return 0;
}
