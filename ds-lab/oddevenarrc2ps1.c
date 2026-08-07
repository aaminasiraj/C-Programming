# include <stdio.h>


int main(void){

    int arr[20], odd[20],oddi =0,countodd = 0, even[20], eveni=0, counteven = 0;
    
    int n, i;

    for (i = 0; i < 15; i ++){

        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0 ; i < 15; i ++){

        if (arr[i] % 2 == 0){
            even[eveni] = arr[i];
            eveni++;
            counteven ++;
        }
        else{
            odd[oddi] = arr[i];
            oddi++;
            countodd ++;
        }
    }

    printf("The number ot elents in the odd array is %d \n", countodd);
    for(i = 0; i < 15; i ++){
        printf("%d ", odd[i]);
    }

    printf("\n");

    printf("The number ot elents in the even array is %d \n", counteven);
    for(i = 0; i < 15; i ++){
        printf("%d ", even[i]);
    }
    
    printf("\n");


}