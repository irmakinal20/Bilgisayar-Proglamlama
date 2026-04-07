#include <stdio.h>

int main() {
    int dizi[5] = {1, 2, 5, 8, 10};
    int sayi = 8;
    int i;
    int varmi = 0;

    for(i = 0; i < 5; i++) {
        if(dizi[i] == sayi) {
            varmi = 1;
        }
    }

    if(varmi == 1) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
