#include <stdio.h>

// main()
// Asks the user how many motors are available and how much total
// package weight must be carried. 
// It then calculates the load per motor and checks wether the 
// conveyor belt system can safely carry the weight. 
int main (void) {

int num_motors;             // Number of motors carrying packages     
float package_weight;       // Total package weight in kilograms 
float weight_pr_motor;      // Calculated weight per motor

// Ask user for number of motors
printf("How many motors are carrying the packages?");
scanf("%d", &num_motors);

// Ask user for total package weight 
printf("How many kg of packages do we expect?");
scanf("%f", &package_weight);

// Calculate how much weight each motor must carry
weight_pr_motor = package_weight/num_motors; 

// Check if each motor can safely carry its share
// Condition: A motor can carry up to 5.6 kg
if(weight_pr_motor <= 5.6) {

printf("Yes! The conveyor belt can carry the packages.\a");
} else {
printf("No! The conveyor belt cannot carry the packages.\a"); 
}

return 0;   // End of program 

} 