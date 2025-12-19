#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, surfaceArea;

    // Taking input
    printf("Please enter the radius of your sphere: ");
    scanf("%f", &radius);

    // Calculating surface area
    surfaceArea = 4 * PI * radius * radius;

    // Displaying result
    printf("Surface Area of the Sphere: %.2f\n", surfaceArea);

    return 0;
}
