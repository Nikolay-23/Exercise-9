
#include <stdio.h>

int main() {
    int a, b;

    
    
    scanf_s("%d", &a);
    
    scanf_s("%d", &b);

    
    if (a <= 0 || b <= 0 || a >= b) {
        printf("Please ensure that a and b are positive and a < b.\n");
      
    }

    
    printf("The numbers ending in 3 in the interval [%d, %d] are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 10 == 3) {
            printf("%d", i);
        }
    }

    
}


