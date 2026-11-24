#include <stdio.h>
//zum kompilieren: gcc -o add.exe add.c, falls keine ahnung, ki fragen
int main(void) {
    int x, y;
    int sum;
    int rem;// remainder
    float div;
    printf("Gib den ersten Wert ein: ");
    scanf("%d", &x);
    printf("Gib den zweiten Wert ein: ");
    scanf("%d", &y);
    sum = x + y;
    div = (float)x / (float)y;
    rem = x % y;
    printf("Der Wert von x+y ist: %d\n", sum);
    printf("Der Wert von x/y ist: %.2f\n", div);
    printf("Der Wert von x/y ist: %d\n", x/y);
    printf("Der Wert von x%%7.y ist: %d\n", rem);
    
    return 0;
}