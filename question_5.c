#include <stdio.h>
//Write a program to find the sum and average of array elements. You have to take array size, array elements from the user.

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; 
    }

    average = sum / n;
    
    printf("Sum of the array elements is: %.2f\n", sum);
    printf("Average of the array elements is: %.2f\n", average);

    return 0;
}
