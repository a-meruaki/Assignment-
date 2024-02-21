#include <stdio.h>
#include <stdlib.h>

int main(){
    float  start_value, increment, end_value;
    printf("Enter starting pound value: -> ");
    scanf("%f", &start_value);
    printf("Enter ending pound value: -> ");
    scanf("%f", &end_value);
    printf("Enter increment value:");
    scanf("%f", &increment);
    printf("POUNDS TO KILOGRAMS CONVERSION TABLE\n\n");

    float pound = start_value;
    while (start_value <= end_value)
    {
        printf("%.2f Pounds = %.2f Kilograms\n", pound, pound / 2.2046);
        pound += increment;
    }
    return 0;
}
