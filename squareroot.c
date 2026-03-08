// This algorithm initially uses Heron's method of calculating square roots. 

#include <stdio.h>
#include <math.h> //Only used for the fabs() function.

int main() {
    double initial;
    scanf("%lf", &initial);
    double x1 = initial;
    double x2 = initial/x1;
    double temp = 0;
    double epsilon = 0.00000000000001; //A miniscule constant to terminate the while loop when the difference becomes tiny.
    int counter = 0;
    while (fabs(x1 - temp) > epsilon) {
        temp = (double) x1;
        x1 = (double) .5*(x1+x2);
        x2 = (double) initial/x1;
        counter++;
        printf("%.15f, %d\n", x1, counter);
    }
//    printf("%.15f, %d", x1, counter);
    return 0;
}