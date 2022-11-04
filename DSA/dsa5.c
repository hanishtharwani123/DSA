// SORTING OF ARRAY

// SELECTION SORT

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}