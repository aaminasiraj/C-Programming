# include <stdio.h>

int main(void){

    int n, i;

    printf("Till which natural number you want the sum: \n");
    scanf("%d", &n);

    int sum = 0;
    for (i = 1; i <= n; i++){
        sum += i;
    }

    printf("the sum of the first %d natural numbers is %d. \n", n, sum);
}