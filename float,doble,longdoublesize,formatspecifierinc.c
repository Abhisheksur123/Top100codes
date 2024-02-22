#include <stdio.h>
int main()
{
    float a = 3.14;
    double b = 3.14;
    long double c = 3.14;
 
    printf("Float : Value : %f size:  %u bytes.\n", a, sizeof(float));
    printf("Double : Value : %lf size:  %u bytes.\n", b, sizeof(double));
    printf("Long Double : Value : %Lf size:  %u bytes.\n", c, sizeof(long double));

    return 0;
}