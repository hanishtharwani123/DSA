#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int counter = 1;
    while (counter < n){
        for (int i = 0; i < n-counter; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for (int i = 0 ; i <n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}