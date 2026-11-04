# Operatsion Tizimlar — Amaliy Topshiriq (2-topshiriq, 18-variant)

Ushbu repozitoriyda C tilida dinamik xotira bilan ishlash, pointerlar arifmetikasi hamda xotira xavfsizligini ta'minlashga bag'ishlangan amaliy topshiriqlar joylashgan.

## 📋 Topshiriqlar Ro'yxati

1. **`task1.c`** — Dynamik massiv (`malloc`), random sonlar bilan to'ldirish, faqat pointer arifmetikasi (`*(p+i)`) yordamida 3 ga karrali elementlarni yangi massivga ajratish.
2. **`task2.c`** — Satrni dinamik xotirada saqlash va faqat pointerlar yordamida (`string.h` funksiyalarisiz) undosh harflarni o'chirish.
3. **`task3.c`** — $4 \times 4$ o'lchamli dinamik matritsa (`int **`), elementlarni $k=7$ ga ko'paytirish va xotirani bosqichma-bosqich `free()` qilish.

---

## 🛠️ Kompilyatsiya va Ishga Tushirish

Terminal orqali dasturlarni kompilatsiya qilish va ishga tushirish:

### 1-Task:
```bash
gcc -Wall task1.c -o task1
./task1