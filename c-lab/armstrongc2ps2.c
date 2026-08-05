# include <stdio.h>
# include <math.h>

int main(void){

    int i, n;

    for(i = 100; i <= 999;i ++){
        int ones = 0, tens = 0, huns = 0, arm = 0;
        ones = i % 10;
        tens = (i / 10) % 10;
        huns = i  / 100;
        
        arm = pow(ones, 3) + pow(tens, 3) + pow(huns, 3);

        if ( arm == i){
            printf("%d ", i);
        }


        

    }

}


// for a 3 digit no. the algorithm to spilt its ddigitd are:
// ones = n % 10 
// tens = (n - ones) % 100
// humdreds = (n - tens)