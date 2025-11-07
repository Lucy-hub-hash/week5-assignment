#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double fahrenheit, celsius;

    // Prompt user for temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Call the function to convert to Celsius
    celsius = convertToCelsius(fahrenheit);

    // Display the temperature in Celsius
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}
