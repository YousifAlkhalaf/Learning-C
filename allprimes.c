#include <stdio.h>
#include <stdbool.h>
// Primes from 1 to 100.

bool isPrime(int num) {
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}