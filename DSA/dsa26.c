#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[j] > arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0 ; i < n; i++){
        printf("%d\n", &arr[i]);
    }
    return 0;
}