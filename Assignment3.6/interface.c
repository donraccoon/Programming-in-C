/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 3.6
*/

#include<stdio.h>
#include<math.h>

extern void abc(double a, double b, double c);

void get_parameters(void){
    double a, b, c;
    int times;

    scanf("%d", &times);

    if(times == 0){
        return;
    }

    for(int i = 1; i <= times; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        abc(a, b, c);
    }

    return;
}

int main(void){
    get_parameters();
    return 0;
}