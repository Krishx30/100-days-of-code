#include <stdio.h>
#define PI 3.14159265
int main()
{
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Area = %.2f, Circumference = %.2f\n", area, circumference);

    return 0;
}
