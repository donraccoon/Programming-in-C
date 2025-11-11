/*
Student: Lars Meijer
Number: s3662780
Assignment: 1.4
*/

#include<stdio.h>
#include<math.h>

int main(void){
    double a; 
    double r;
    int N;
    double sum = 0.0;
    int n;
    N = 0;
    
    scanf("%lf%d%lf",&a ,&N, &r);
    printf("\na is %.2lf, N is %d , r is %.2lf", a, N, r);

    for (n = 0; n <= N; n++){
        sum += a*pow(r, n);
    }

    printf("\n%0.2lf\n", sum);

}