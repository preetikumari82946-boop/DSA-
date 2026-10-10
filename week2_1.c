#include <stdio.h>

int main() {
    int arr[100], n, i, k, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &k);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if(k < 1 || k > n + 1) {
        printf("Invalid position!");
        return 0;
    }

    for(i = n; i >= k; i--)
        arr[i] = arr[i - 1];

    arr[k - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}