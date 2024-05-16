
// VIA This code One Can Find Surface Area Of A Cylander Having a radius & height..

#include <stdio.h>
#include <math.h>

// Here we are defining pi to be have value 3.14

#define PI 3.14

// Making a function to print area of cylander..

float area(float a, float b)
{
    return (2 * a * b * PI);
}

int main()
{
    float radius, height;

    // getting radius and height as input from user..

    printf("enter radius :");
    scanf("%f", &radius);

    printf("\n");

    printf("enter height :");
    scanf("%f", &height);

    printf("\n");

    // calling out the function we made in starting..

    float Area = area(radius, height);

    // Now let code do it's work and give us surface area of cylander as output to  our code..

    printf("area is :%f", Area);

    return 0;
}