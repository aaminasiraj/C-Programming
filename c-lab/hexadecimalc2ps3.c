#include <stdio.h>

int main(void)
{
    int n, i = 0, j;
    char hex[20];

    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
        return 0;
    }

    while (n > 0)
    {
        int rem = n % 16;

        if (rem <= 9)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        n = n / 16;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }

    printf("\n");

    return 0;
}