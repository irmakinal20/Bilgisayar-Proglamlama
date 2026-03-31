#include <stdio.h>
int main() {
    int i, j;
    int satir = 5; 
    
    for (i = satir; i >= 1; i--) {
        
        
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        
        printf("\n");
    }
