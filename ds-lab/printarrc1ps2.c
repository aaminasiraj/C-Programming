# include <stdio.h>

int main(void){

    int arr[100];
    
    int n, i;

    for (i = 0; i < 10; i ++){

        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

   for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}