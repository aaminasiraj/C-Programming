#include <stdio.h>


int main(void){

    int n, i ;

    while(1){
        printf("Enter Number: ");
        scanf("%d", &n);

        if ( n % 7 != 0){
            printf("Number %d is not a multiple of 7 !! \n", n);
            break;
        }
    }
}

















//int main(void){
//
//   int n , i;
//     
//    
//
//    while(1){
//        printf("Enter Number: ");
//        scanf("%d", &n);
//
//        if (n % 2 != 0){
//            printf("Oops! %d is an odd number \n", n);
//            break;
//        }
//
//    }
//    
//}
