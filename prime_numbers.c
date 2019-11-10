#include <stdio.h>

int main(){

    int i, c; // check if i is prime number

    printf("1\n");

    for (i=3; i<23; i++){
        int no_prime_number = 0;

        for(c=2; c<i; c++){

            if (i % c == 0){
                no_prime_number = 1;
                break;
            }
        }
        if(no_prime_number == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}
