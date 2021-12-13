// Samuel Emard-Thibault
// Delta to Y program V1.0
// This program is to practice pushing code to a GitHub repository

/* Simple single file program to convert resistors from a delta configuration to
a Y shaped configuration, useful for electrical engineering analysis. */

// Future releases: Y to delta implementation, impedance calculation implementation

#include <stdio.h>
#include <math.h>

float operation(float a, float b, float c, int R)
{ // perform mathematical operation with given values for a specified resistance

    float rslt;
    float sum = a + b + c;

    switch (R)
    {
    case 1:
        rslt = (b * c) / sum;
        break;
    case 2:
        rslt = (c * a) / sum;
        break;
    case 3:
        rslt = (a * b) / sum;
        break;
    default:
        printf("ERROR: invalid resistance value: make sure to input 0 < int < 4");
        break;
    }

    return rslt;

} // operation()

int main()
{
    float a, b, c; // a=top, b=left, c=right (in triangular formation)
    printf("Please input resistance values, then press enter. Example: 2.5, 4, 6.7\n");
    printf("Where the order in the triangle format goes from: right, left, top\n");

    // Collect user input and store in floats
    scanf("%f, %f, %f", &a, &b, &c);

    // Call functions with specific resistance while outputting to terminal
    printf("R1 = %.2f\n", operation(a, b, c, 1));
    printf("R2 = %.2f\n", operation(a, b, c, 2));
    printf("R3 = %.2f\n", operation(a, b, c, 3));
}