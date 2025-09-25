#include <stdio.h>

int bilangan;
 int main() {
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("Bilangan positif.\n", bilangan);
    } else if (bilangan < 0) {
        printf("Bilangan negatif.\n");
    } else {
        printf("Bilangan nol.\n");
    }

    return 0;
}