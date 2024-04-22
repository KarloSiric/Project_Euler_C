/*
* @Author: karlosiric
* @Date:   2024-04-22 19:57:55
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-04-22 20:37:52
*/

// this is the Fibonacci sequence problems
// the problem will also be coded in C programming language 
// All the problems I am doing are for fun and educational purposes
// To sharpen your skills and become better at anything you have to put in the work!

#include <stdio.h>
#include <stdlib.h>

#define MAX 4000000

int main(int argc, char const *argv[])
{
    // In this problem we need to find the sum of all the even numbers in the Fibonacci sequence less than 4 million!
    // also for this problems since we are dealing with less than 4 million those values might get out of range for an int data type so we can use long
    
    long long int sum = 0;
    long long int first = 1; // first one is 1 
    long long int second = 1; // make sure here that you put also 1 and not 2 , because real fibonacci goes e.g 1,1,2,3,5,8,.... and so on!
    long long int next = 0;
    
    // e.g let's say that the first is 3 and the second is 5, the next will become 8 because we will sum the first and the second.
    // in the for loop which we will create we can sum them, then the first will become 5 and the second one will become 8, so we shift them!
    // so next time we will have that the first one is 5 and the second one is 8 and the result is 13 and then we put 8 to be first and 13 second
    // and we continue going like this till our limit is reached!
    
    printf("FInding all the even numbers in the Fibonacci sequence less than 4 million!");
    
    for(int i = 0; i < MAX; i++) {
        // printf("Current first number is %d and second number is %d\n", first, second);
        next = first + second;
        first = second;
        second = next;
        
        if(next > MAX) {
            break;
        }
        
        if(next % 2 == 0) {
            // printf("Adding %lld to the sum of %lld\n", next, sum);
            printf("Next is: %lld\n", next);
            sum += next;
            printf("Sum is: %lld\n", sum);
        }
    }
    
    printf("The final sum of all the even fibonacci sequence numbers below 4 million is %lld\n", sum);
    
    
    
    return 0;
}