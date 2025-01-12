#include<stdio.h>

int main() {
    int array[] = {10, 20, 5, 15, 25, 3, 30};
    int length = sizeof(array) / sizeof(array[0]);
    int min = array[0]; // Assume first element is the smallest

    for(int i = 1; i < length; i++) {
        if(array[i] < min) {
            min = array[i]; // Update if a smaller element is found
        }
    }

    printf("Smallest number in the array is: %d\n", min);
    return 0;
        // skfjvhiojhanwihcfuigwcs df 
}
