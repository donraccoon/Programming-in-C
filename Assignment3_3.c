/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 3.3
*/

#include<stdio.h>

int prime(int number){
    
    int result= 1;
  
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
    
        // If not a prime number, return false (0), if a prime number, return true (1)
        if (result == 0 ){
            return 0;
        }
        else {
            return 1;
        }
}

int main(){
    int lowerlimit;
    int upperlimit;

    // Look for input 
    scanf("%d \n%d", &lowerlimit, &upperlimit);

    if (upperlimit < lowerlimit){ //if the lower limit is higer than the upperlimit swaps them around so upper becomes lower and vise versa
        int temp = lowerlimit; // save the lowerlimit in a temporary variable, so it is not overwritten
        lowerlimit = upperlimit;
        upperlimit = temp;
    }

    for(int i = lowerlimit; i <= upperlimit; i++) // gives all the numbers betweeen and including the lower and upper limit
    {
        if(prime(i)){
            printf("%d\n",i); // prints the prime numbers
        }
    }

    return 0;
}