#include <stdio.h>
#include <stdlib.h>
int a = 5;
int b = 89;
int c = 789;
int d = 7894;
float e = 1.1111;
float f = 56.65432;
float g = 123.456789;
float h = 1234.5678988;
double i = 98765.456987;
int main()
{
    printf("%6.1d\n", d);
    printf("%3d\n",d);
    printf("%3.2f", h);
    printf("\n%.5f",h);
    printf("\n%.5lf", i);
    return 0;
}
