// LINEAR SEARCH

#include <stdio.h>

int linerarSearch(int arr[], int n, int key){
    for (int i = 0 ; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key for searching: ");
    scanf("%d", &key);

    printf("%d", linerarSearch(arr, n, key));
    return 0;


}