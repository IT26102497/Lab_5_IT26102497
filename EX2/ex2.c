#include <stdio.h>

int main() 
{
    float wt_lb, ht_in, bmi;

    // Prompt User to Enter Weight in Pounds
    printf("Enter Weight in Pounds:");
    scanf("%f", &wt_lb);
    
    // Prompt User to Enter Height in Inches
    printf("Enter Height in Inches:");
    scanf("%f", &ht_in);

    // Calculate BMI Using the Formula
    bmi = (wt_lb / (ht_in * ht_in)) * 703;
    
    // Display the Calculated BMI
    printf("BMI: %.1f\n", bmi);
    
    // Categorize BMI Based on Ranges
    if (bmi < 18.5) 
    {
        printf("BMI Category: Underweight");
    } 
    else if (bmi < 25.0) 
    {
        printf("BMI Category: Normal Weight");
    } 
    else if (bmi < 30.0) 
    {
        printf("BMI Category: Overweight");
    } 
    else 
    {
        printf("BMI Category: Obese");
    }

    return 0;
}
