/*Nhập vào 1 chuỗi n số nguyên
Hãy sắp xếp theo thứ tự tăng dần và giảm dần
*/
#include <stdio.h>
#include <stdlib.h>

int n = 0;
int a = 0;
//int arr[100];

int main()
{
    printf("Enter the quantity number of the list: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the list of number: \n");
    for(int i = 0; i < n; i++){
        printf("[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j < n; j++){
        for(int x = 0; x < n-1; x++){
            if(arr[x] < arr[x+1]){
            a = arr[x];
            arr[x] = arr[x+1];
            arr[x+1] = a;
        }
        }
    }

    printf("The arranged list (min to max): \n");
    for(int k = 0; k < n; k++){
        printf("[%d] = %d\n", (k+1), arr[k]);
    }
    printf("The arranged list (max to min): \n");
    for(int k = 0; k < n; k++){
        printf("[%d] = %d\n", (k+1), arr[n-k-1]);
    }

    return 0;
}
