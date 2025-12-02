/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 3.4
*/

#include<stdio.h>

int gcd(int p, int q){
    int r;
    
    while(q != 0){ // determines the greatest comon divisor, by calculating the lowest possible modulus, and returns this value
        r = p % q;
        p = q;
        q = r;
    }
    return p;

}


int main(void){
    int p, q; //initializes p and q as intergers
    
    scanf("%d \n%d", &p, &q);//scans for p and q
    
    printf("%d\n", gcd(p, q)); //prints the greatest common divisor of p and q
    
    return 0;
}