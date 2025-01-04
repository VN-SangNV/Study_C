/*Nhập vào bán kính của hình tròn. Tính chu vi và diện tích hình tròn đó*/

#include <stdio.h>
#include <stdlib.h>

const float Pi = 3.14;
float radius = 0;
float premeter = 0;
float acreage = 0;

int main()
{
    printf("Enter Radius (m): ");
    scanf("%f", &radius);

    premeter = 2*Pi*radius;
    acreage = Pi*radius*radius;

    printf("Premeter = %f (m)\nAcreage  = %f (m^2)\n\n\t!!!Program ends!!!\n\n", premeter, acreage);
    return 0;
}
