#include <stdio.h>

int main(void) {
    int x[10];
    int i, n, first, second;

    printf("Input the size of array :");
    if (scanf("%d", &n) != 1 || n < 0 || n > 10) {
        printf("invalid input\n");
        return 1;
    }

    if (n <= 0) {
        first = second = 0;
    } else {    
        printf("Input %d elements in the array:\n", n);
        for (i = 0; i < n; i++) {
            printf("x[%d]: ", i);
            if (scanf("%d", &x[i]) != 1) {
                printf("invalid input\n");
                return 1;
            }
        }
        first = second = x[0];
        for (i = 1; i < n; ++i) {
            if (first < x[i]) {
                second = first;
                first = x[i];
            } else
            if (x[i] > second && x[i] != first) {
                second = x[i];
            }
        }
    }

    if (second == first)
        printf("There is no second largest element\n");
    else
        printf("\nThe Second largest element in the array is: %d\n", second);

    return 0;
}
