#include <stdio.h>
#include <stdlib.h>
// Harf unli yoki undoshligini tekshirish
int unli_harfmi(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1; // Unli
    }
    return 0;
}
// Undosh harflarni o'chirish funksiyasi (Faqat pointerlar bilan)
void undoshlarni_ochirish(char *str) {
    char *oqish = str;
    char *yozish = str;
    while (*oqish != '\0') {
        // Agar belgi harf bo'lmasa (probel, belgi) YOKI unli harf bo me'yoriy qolsa - saqlaymiz
        int harfmi = (*oqish >= 'a' && *oqish <= 'z') || (*oqish >= 'A' && *oqish <= 'Z');
        if (!harfmi || unli_harfmi(*oqish)) {
            *yozish = *oqish; // O'z o'rnida qoldiramiz
            yozish++;
        }
        oqish++;
    }
    *yozish = '\0'; // Satr oxirini belgilaymiz
}
int main() {
    // Dynamic xotira ajratish
    char *satr = (char *)malloc(100 * sizeof(char));
    if (satr == NULL) return 1;
    printf("Satr kiriting: ");
    fgets(satr, 100, stdin);
    undoshlarni_ochirish(satr);
    printf("Natija: %s", satr);
    // Xotirani bo'shatamiz
    free(satr);
    return 0;
}