#include <stdio.h>

struct Length
{
    int feet;
    int inches;
};

struct Length add(struct Length a, struct Length b)
{
    struct Length c;

    c.feet = a.feet + b.feet;
    c.inches = a.inches + b.inches;

    if(c.inches >= 12)
    {
        c.feet += c.inches / 12;
        c.inches %= 12;
    }

    return c;
}

struct Length subtract(struct Length a, struct Length b)
{
    struct Length c;

    if(a.inches < b.inches)
    {
        a.feet--;
        a.inches += 12;
    }

    c.feet = a.feet - b.feet;
    c.inches = a.inches - b.inches;

    return c;
}

struct Length multiply(struct Length a, int n)
{
    struct Length c;

    int totalInches = (a.feet * 12 + a.inches) * n;

    c.feet = totalInches / 12;
    c.inches = totalInches % 12;

    return c;
}

int main()
{
    struct Length l1, l2, result;
    int n;

    printf("Enter first length (feet inches): ");
    scanf("%d %d", &l1.feet, &l1.inches);

    printf("Enter second length (feet inches): ");
    scanf("%d %d", &l2.feet, &l2.inches);

    result = add(l1, l2);
    printf("\nAddition = %d feet %d inches\n", result.feet, result.inches);

    result = subtract(l1, l2);
    printf("Subtraction = %d feet %d inches\n", result.feet, result.inches);

    printf("Enter multiplication factor: ");
    scanf("%d", &n);

    result = multiply(l1, n);
    printf("Multiplication = %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
