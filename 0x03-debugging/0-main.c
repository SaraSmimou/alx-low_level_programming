#include "main.h"
void positive_or_negative(int n) {
    if (n == 0) {
        printf("The number %d is zero.\n", n);
    } else if (n > 0) {
        printf("The number %d is positive.\n", n);
    } else {
        printf("The number %d is negative.\n", n);
    }
}
int main(void) {
    int i;
    i = 0;
    positive_or_negative(i);
    return 0;
}
