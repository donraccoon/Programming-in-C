/*
Student: Lars Meijer
Number: s3662780
Assignment: 1.3
*/

#include<stdio.h>

int main(){
    double TC; // Temperature in Celsius
    double TK; // Temperature in Kelvin
    double TF; // Temperature in Fahrenheit

    printf("Enter temperature in Celsius: "); 
    scanf("%lf", &TC); //The input as a double to temp in celsius

    TK =  TC + 273.15; //convert celsius to kelviun
    TF = 1.8*TC + 32; //convert celcius to farnheid

    printf("\nC\tK\tF"); //print the letters 
    printf("\n%.2f\t%.2f\t%.2f\n",TC , TK, TF); //print the values

    return 0;//end the main
}