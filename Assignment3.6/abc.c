/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 3.6
*/

#include<stdio.h>
#include<math.h>


static double calculate_discriminant(double a, double b, double c)
{
    return b*b - 4*a*c; 
}

void abc(double a, double b, double c)
{
    printf("The roots of %.4fx^2 + %.4fx + %.4f are:\n", a, b, c);
    double D = calculate_discriminant(a, b, c);
    
    if (D == 0)
    {
        double x = -b  / (2*a);
        printf("x = %.4f\n", x);
    }
    else if(D > 0)
    {
        double root = sqrt(D);
        double x1 = (-b + root) / (2*a);
        double x2 = (-b - root) / (2*a);
        printf("x1 = %.4f, x2 = %.4f\n", x1, x2);
    }

    else
    {
        double real = -b / (2 * a);
        double imag = sqrt(-D) / (2*a);
        printf("x1 = %.4f+%.4fi, x2 = %.4f-%.4fi\n", real, imag, real, imag);
    }
    return;
}
