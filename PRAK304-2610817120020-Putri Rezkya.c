#include <stdio.h>

int main() {
    int a;

    if (scanf("%d", &a) != 1) {
        return 1;
    }

    if (a < 0 || a >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (a == 0) {
        printf("Nol\n");
    } else if (a >= 1 && a <= 9) {
        printf("Satuan\n");
    } else if (a >= 10 && a <= 19) {
        printf("Belasan\n");
    } else if (a >= 20 && a <= 99) {
        printf("Puluhan\n");
    }

    return 0;
}