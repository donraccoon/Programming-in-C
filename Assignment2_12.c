/*
Student: Lars Meijer
Number: s3662780
Assignment: 2.12
*/

// the compile command: gcc -std=c99 -Wall -Werror "name of the .c file" -lm -o Hello 
// the run command ./Hello because i named the executable Hello


#include<stdio.h>


int main(void){
    int number;
    int result= 1;

    scanf("%d", &number);
  
        if (number < 2){ // checks if number is less than 2 because all numbers less or equal to 1 are not prime
            result = 0; // sets the result to 0
            }
        else{
            for (int i = 2; i*i <= number; i++){ //this loop checks if the remainder of the division is equal to 0 till the sqrt of the number
                if (number % i == 0){
                    result = 0;
                    break;
                }
               
            }
        }
    
        if (result == 0 ){printf("%d is not a prime number\n", number);}
        else {printf("%d is a prime number\n", number);}
        
    return 0;
}

