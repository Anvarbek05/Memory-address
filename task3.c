#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 4, c = 4;
    int k = 7;

    // 1. Satrlar uchun ko'rsatkichlar massivini ajratamiz
    int **matritsa = (int **)malloc(r * sizeof(int *));
    if (matritsa == NULL) return 1;

    // 2. Har bir satr uchun ustunlarni ajratamiz va sonlar bilan to'ldiramiz
    for (int i = 0; i < r; i++) {
        *(matritsa + i) = (int *)malloc(c * sizeof(int));
        if (*(matritsa + i) == NULL) return 1;

        for (int j = 0; j < c; j++) {
            *(*(matritsa + i) + j) = i + j + 1; // Oddiy sonlar: 1, 2, 3...
        }
    }

    // 3. Matritsani chiqaramiz va k ga ko'paytiramiz
    printf("Boshlang'ich Matritsa va 7 ga ko'paytirilgani:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(*(matritsa + i) + j) *= k; // 7 ga ko'paytirish
            printf("%4d", *(*(matritsa + i) + j));
        }
        printf("\n");
    }

    // 4. Xotirani to'g'ri tozalash (Aks holda Valgrind xatolik beradi)
    for (int i = 0; i < r; i++) {
        free(*(matritsa + i)); // Har bir satrni free qilamiz
    }
    free(matritsa); // Asosiy matritsani free qilamiz

    return 0;
}