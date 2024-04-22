/*
* @Author: karlosiric
* @Date:   2024-04-22 19:47:51
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-04-22 19:57:16
*/

// this will be the first problem in a series of problems based on the Euler Project
// all the problems will be coded in the C programming language!!

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // we need to find the multiples of 3 or 5 below 1000 and sum them!
    
    int sum = 0;
    printf("Adding all the multiples of 3 or 5 below 1000!");
    
    for(int i = 0; i < 1000; i++) {  
        if(i % 3 == 0 || i % 5 == 0) {
            printf("Current num %d.\n", i);
            printf("Current sum before adding %d is %d!\n", i, sum);
            sum +=i;
            printf("Adding %d; the sum now becomes %d!\n", i, sum);
        }
    } 
    
    printf("Final sum of all the multiples of 3 or 5 below 1000 is: %d\n", sum);
    
    
    return 0;
}