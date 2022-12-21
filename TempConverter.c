#include <stdio.h>

float celsiusToFahrenheit(int celsius) {
    return (float) celsius * 1.8 + (float) 32;
}

void printTable(int low, int high, int step) {
    printf("Celsius  \tFahrenheit\n");
    printf("---------\t----------\n");
    for (int i = low; i <= high; i += step) {
        printf("%f         %f\n", (float) i, (float) celsiusToFahrenheit(i));
    }
}

int main() {
    const int MIN_TEMP = -100, MAX_TEMP = 300;
    int low, high, step;

    printf("Lower temperature limit in Celsius (>= -100): ");
    scanf("%d", &low);
    if (low < MIN_TEMP) {
        printf("Invalid lower limit.");
        return 1;
    }

    printf("Higher temperature limit in Celsius (<= 300): ");
    scanf("%d", &high);
    if (high > MAX_TEMP) {
        printf("Invalid higher limit.");
        return 1;
    }

    printf("Temperature step in Celsius (> 0 & < difference between limits): ");
    scanf("%d", &step);
    if (step <= 0 || step >= (high - low)) {
        printf("Invalid step.");
        return 1;
    }

    printTable(low, high, step);

    return 0;
}