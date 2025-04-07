#include <stdio.h>

// Swap function for float
void swap(float *x, float *y) {
    float temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(float a[], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                // Interchange a[j] and a[j+1]
               swap( &a[j], &a[j+1]);
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float a[n];

    printf("Enter %d Elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    bubble_sort(a, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");

    return 0;
}

