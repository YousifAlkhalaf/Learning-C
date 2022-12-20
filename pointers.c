#include <stdio.h>

int main() {
    int num = 22;
    int* p_num = &num;
    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%d", *p_num);
    return 0;
}