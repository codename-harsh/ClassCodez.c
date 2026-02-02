#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("Bitonic point = %d", arr[i]);
            break;
        }
    }
    return 0;
}