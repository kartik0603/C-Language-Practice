// to find all roots of a quadratic equation using switch case

#include <stdio.h>

#include <math.h>

int main()
{
    float a, b, c;

    float root1, root2, imaginary;
    float discriminant;

    printf(" Enter the Value of Quadratic equation (ax^2+bx+c=0)  for a = \t \n");
    scanf("%f", &a);

    printf(" Enter the Value of Quadratic equation (ax^2+bx+c=0)  for b = \t \n");
    scanf("%f", &b);

    printf(" Enter the Value of Quadratic equation (ax^2+bx+c=0)  for c = \t \n");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);
    printf(" Discriminat %.2f \n ", discriminant);

    switch (discriminant > 0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf(" Two Distinct Roots are %.2f and %2.f  \n", root1, root2);
        break;

    case 0:

        switch (discriminant < 0)
        {
        case 1:
            imaginary = sqrt(-discriminant) / (2 * a);
            root1 = -b / (2 * a) + imaginary;
            root2 = -b / (2 * a) - imaginary;

            printf(" Two Distinct Roots are %.2f and %.2f \n", root1, root2);
            break;

        case 0:

            root1 = root2 = -b / (2 * a);

            printf(" Two Equal and Real Roots are %.2f and %.2f \n", root1, root2);
            break;
        }
    }
    return 0;
}
