/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 3.6
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int m, n, i, j;             // intitalize all the used variables
    double total[100] = {0.0};
    double price[100];

    scanf("%d ", &n); // scan for input for the amount of customers
    
    for(i = 0; i < n; i++) // scans prices and puts them in an array that is n long
    {
        scanf("%lf", &price[i]);
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        double sum = 0.0;
        for (j = 0; j < n; j++) // sums all the prices for all the products
        {
            int qty;
            scanf("%d", &qty);
            sum += price[j] * qty;
        }
        total[i] = sum; // save the sum in an array
    }

    for(i = 0; i < m; i++) // print all the sum value's individually
    {
        printf("%.2f\n", total[i]);
    }

    return 0;
}