/*
Cho số tự nhiên n và một số thực x. Hãy tính tổng sau:
S(n,x) = sin(x) + sin(sin x) +...+sin(sin(...(sin(sin x))...)) n lần sin.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x;
double sinX = 0;
double sumOfSinX = 0;
int n;

double sumOfSin(int n, float x){
    double sum = 0;
    sinX = sin(x);
    for(int i = 0; i < n; i++){
        sum += sinX;
        sinX = sin(sinX);
    }
    return sum;
}
int main()
{
    printf("Enter n and x: ");
    scanf("%d%lf", n, x);

    sumOfSinX = sumOfSin(n, x);

    printf("Result: %.2lf", sumOfSinX);
    return 0;
}
