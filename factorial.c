#include <stdio.h>

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num -1);
    }
    return 1;
}

int main() {
    int num;
    printf("Enter an integer greater than 0: ");
    scanf("%d", &num);
    printf("%d! =  %d", num, factorial(num));
    return 0;
}