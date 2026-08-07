# include <stdio.h>

int main(void){


    int next, first = 0, second = 1;
    for (int i = 1; i <= 5; i++){

        for (int j = 1; j <= 5 - i; j ++){
            printf("    ");
        }


        for ( int k = 1; k <= (2*i) - 1; k ++){
            printf("%4d", first);
            next = first + second;
            first = second;
            second = next ;
        }
        printf("\n");
    }
}