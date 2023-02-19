#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() % RAND_MAX - RAND_MAX/2; // generate random number between -RAND_MAX/2 and RAND_MAX/2
    printf("%d ", n); // print the number
    if (n > 0) {
        printf("is positive\n"); // print if n is positive
    } else if (n == 0) {
        printf("is zero\n"); // print if n is zero
    } else {
        printf("is negative\n"); // print if n is negative
    }
    return 0;
}

