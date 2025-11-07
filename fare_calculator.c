#include <stdio.h>

// Function to calculate fare based on distance
double calculateFare(double distance) {
    return distance * 50; // KSh 50 per kilometer
}

int main() {
    double distance, fare;

    // Prompt user for distance traveled
    printf("Enter distance traveled (km): ");
    scanf("%lf", &distance);

    // Call the function to calculate fare
    fare = calculateFare(distance);

    // Display the fare
    printf("Total fare: KSh %.2f\n", fare);

    return 0;
}
