/*Enter an integer. Check if it's a perfect number.*/
#include <stdio.h>
#include <stdlib.h>
int number, sum;

int main()
{
    printf("Enter the number: ");
    scanf("%d", &number);

    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    if(number == sum){
        printf("%d is a perfect number!", number);
    }else{
        printf("%d isn't a perfect number!", number);
    }

    return 0;
}
