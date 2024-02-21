#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start_value, end_value, increment;
    printf("Enter the starting Fahrenheit value: -> ");
    scanf("%f" , &start_value);
    printf("Enter the ending Fahrenheit value: -> ");
    scanf("%f" , &end_value);
    printf("Enter the increment Fahrenheit value: -> ");
    scanf("%f" , &increment);
    printf("FAHRENHEIT TO CELSIUS TABLE\n\n");

    float fahrenheit = start_value;
    while (fahrenheit <= end_value)
    {
        float celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f Fahrenheit = \t\t %.2f Celsius \n" , fahrenheit, celsius);
        fahrenheit += increment;
    }
    return 0;
}
