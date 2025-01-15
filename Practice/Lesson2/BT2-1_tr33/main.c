/*
Cho tam giác ABC có chiều dài 3 cạnh lần lượt là a, b, c (a = BC, b = AC, c = AB).
Hãy tìm chu vi, diện tích của tam giác ABC và độ dài đường cao AH.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a, b, c;
float perimeter, acreage, AH, p;

float heronAlgorithm(float a, float b, float c){
    perimeter = a+b+c;
    p = perimeter/2;
    acreage = sqrt(p*(p-a)*(p-b)*(p-c));
    AH = 2*acreage/a;
}

int main()
{
    printf("Enter 3 angles of the ABC triangle: ");
    printf("\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    heronAlgorithm(a, b, c);
    printf("Acreage = %.3f\n", acreage);
    printf("Perimeter = %.3f\n", perimeter);
    printf("AH = %.3f", AH);
    return 0;
}
