/*
Nhập vào t giây, hãy đổi t giây ra dạng giờ - phút - giây.
*/
#include <stdio.h>
#include <stdlib.h>

int seconds;

int main()
{
    printf("Enter number of seconds: \ns = ");
    scanf("%d", &seconds);
    printf("%dh %dm %ds", seconds/3600, (seconds/60 >= 60)?(seconds/60%60):(seconds/60), seconds%60);
    return 0;
}
