#include <stdio.h>
#include <math.h>

// Function to calculate the minimum number of steps
int calculateSteps(int x, int y) {
    int count = 0;  // Counter of steps
    int step = 1;   // Starting step
    
    // Loop until x reaches or exceeds y
    while (x < y) {
        x += step;    // Increment x by the current step
        count++;      // Increment the step counter
        
        // Change the step of the next step according to the condition
        if (count % 2 == 0) {
            step++;    // Increase the step size
        }
    }
    
    return count;    // Return the minimum number of steps
}

int main() {
    int x, y;
    
    // Prompt the user to enter the value of x
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    // Prompt the user to enter the value of y
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    // Check if the input values are within the valid range
    if (x < 0 || y < 0 || y >= pow(2, 31) || x > y) {
        printf("Invalid input.\n");
        return 1; // Exit with an error code
    }

    // Calculate and print the minimum number of steps required
    int steps = calculateSteps(x, y);
    printf("Minimum number of steps: %d\n", steps);
    
    return 0;
}