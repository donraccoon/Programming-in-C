/*
Student1: Lars Meijer
Number1: s3662780
Student2: Rob Loman
Number1: s3318559
Assignment: 4.6
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// define a function for swapping two value's
void swap(double **p, double **q)
{
    double *tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main(void)
{
    int dim, num;
    int i, j;
    double **w, *v, tmp;
    
    scanf("%d %d", &dim, &num); // ask user for vectors, number and dimensions
    w = calloc(num, sizeof(double *)); // create an empty list
    // for every vector given, it is placed in a list
    for (i = 0; i < num; i++)
    {
        w[i] = calloc(dim, sizeof(double));

        for (j = 0; j < dim; j++)
        {
            scanf("%lf", &w[i][j]);
        }
    }
    
    v = calloc(num, sizeof(double)); //create an empty list for vector lenth's

    tmp = 0; // set a variable that will be used temporarily to 0 for the first run
    // calculate the lenth of the vector for every vector
    for(i = 0; i < num; i++)
    {
        
        for(j = 0; j < dim; j++)
        {
            tmp += w[i][j] * w[i][j];
        }
        
        v[i] = sqrt(tmp); //put the calculated lenth in a list
        tmp = 0;
        // printf("%.6f \n", v[i]);
    }

    //for loop for bubble sorting the vectors
    for(i = 0; i < num - 1; i++)
    {
        for(j = 0; j < num -1 - i; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(&w[j], &w[j + 1]);

                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
// loop for for printing the vectors in the sorted order
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < dim; j++)
        {
            printf("%e ", w[i][j]);
        }

        printf("\n");
    }

    return 0;
}