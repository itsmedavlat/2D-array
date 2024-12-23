#include <stdio.h>

int main() {
    int n;

    printf("Matritsa o'lchamini kiriting (N): ");
    scanf("%d", &n);

    int arr[n][n];
  
    printf("Matritsani to'ldiring (%d ta son kiriting):\n", n * n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("To'liq matritsa:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        printf("%d-qatorda %d\n", i + 1, sum);
    }

    return 0;
}
