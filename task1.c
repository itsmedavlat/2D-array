#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4 // const qilsam ha mbulardi 

int main(){

   int arr[N][N];  // 4 ga 4 deb tushunsak ham boladi
   int SUM = 0;

   srand(time(0));

   for(int i = 0; i < N; i++){   // randomlarni chiqarish uchun
        for(int j = 0; j < N; j++){
            arr[i][j] = rand() % 20;    // 20dan past bulgan random sonlar un
              SUM += arr[i][j];
        }
    }
    printf("Jadval : \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%4d ",arr[i][j]); // %4d qilish sababi - 4ta katak joyi un - ciroyli korinadi
        }
        printf("\n");
    }

    printf("Yig`indisi : %d\n", SUM);
   return 0;
}