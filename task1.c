#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 27;
    // 1. Asosiy massivga xotira ajratamiz
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) return 1;
    // 2. Massivni [-50; 50] oraliqda to'ldiramiz va ko'ramiz
    printf("Boshlang'ich massiv:\n");
    int count = 0;
    for (int i = 0; i < n; i++) {
        *(arr + i) = (rand() % 101) - 50; // Random son [-50; 50]
        printf("%d ", *(arr + i));
        // 3 ga bo'linadiganlarini sanab ketamiz
        if (*(arr + i) % 3 == 0) {
            count++;
        }
    }
    printf("\n\n");
    // 3. Yangi massiv uchun xotira ajratamiz
    int *yangi = (int *)malloc(count * sizeof(int));
    if (yangi == NULL && count > 0) {
        free(arr);
        return 1;
    }
    // 4. 3 ga bo'linadiganlarini yangi massivga ko'chiramiz
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 3 == 0) {
            *(yangi + index) = *(arr + i);
            index++;
        }
    }
    // 5. Natijani chiqaramiz
    printf("3 ga bo'linadiganlar:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", *(yangi + i));
    }
    printf("\n");
    // 6. Xotirani bo'shatamiz
    free(arr);
    free(yangi);
    return 0;
}