/*
Student: Lars Meijer
Number: s3662780
Assignment: 1.4
*/

#include<stdio.h> 
#include<math.h> //for r^n

int main(void){
    double a, r; //makes a and r doubles
    int N, n; // N and n intergers
    double sum = 0.0; // for easy output
    
    scanf("%lf%d%lf",&a ,&N, &r); // user in puts
    //printf("\na is %.2lf, N is %d , r is %.2lf", a, N, r); //prints user inputs for testing

    for (n = 0; n <= N; n++){ //a forloop to make the sum
        sum += a*pow(r, n); //the base function
    }

    printf("%0.2lf\n", sum);//prints the final value of the sum

}