#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int is_prime(int a){
    
    //devides the range in half to reduce time to run
    int x = a / 2;

    //loops through remaining in x, if there is no remainder its prime
    for (int i = 2; i <= x; ++i){
        if ((a % i) == 0 ){
            return false;
        }
    }
    return true;
}

int main(){
    
    // Begins the clock for calc of time to run
    clock_t begin = clock();
    
    // Initialize variables
    int num = 1000000;
    int array[num/2];
    int i = 0;
    
    //loops until num is reached starts at 2 as anything under is not prime
    for (int x = 2; x <= num; ++x ){
        if (is_prime(x)){
            /*printf("%i is prime\n", x);*/
            array[i] = x;
            ++i;
        } else {
            /*printf("%i is not prime\n", x);*/
        }
    }

    // Uncomment for a print of the primes

    // for (int j = 0; j < i; ++j){
    //     printf("%i ", array[j]);
    // }

    // End clock and calc time to run
    clock_t end = clock();
    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    // Print number of primes and runtime
    printf("\nNumber of primes found: %i", i);
    printf("\nTime taken to complete: %f seconds", time);
    return 0;
}