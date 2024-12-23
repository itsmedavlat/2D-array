#include <stdio.h>

int main(){
    int n;

    printf("Matritsa o'lchamini kiriting (N):");
    scanf("%d", &n);

    int arr[n][n];

    printf("Matritsani toldiring (%dta son kirit):\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("To'liq matritsa:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < n; j++){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i][j];
        }
        printf("%d-ustun yig'indisi : %d\n", j + 1, sum);
    }
    return 0;
}
