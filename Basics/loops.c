#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);

    while (sum <= 900) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Sum = %d\n", sum);
    return 0;
}