//
//  main.c
//  testProject
//
//  Created by Jacobo Vazquez on 6/19/24.
//  int argc, const char * argv[]

#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
    float fahr;
    float celsius;  // Use float for more accurate Celsius values
    int lower, upper, step;

    lower = 0;      // Lower limit of temperature table
    upper = 300;    // Upper limit
    step = 20;      // Step size

    fahr = lower;   // Initializes fahr with the lower limit value.
    printf("Fahrenheit\tCelsius\n");  // Print column headers

    while (fahr <= upper) {
        // Converts the Fahrenheit temperature (fahr) to Celsius.
        celsius = (5.0 / 9.0) * (fahr - 32.0);  // Use floating-point division
        // Prints the Fahrenheit and Celsius temperatures side by side, separated by a tab (\t).
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
    */

   int fahr;

    printf("Fahrenheit\tCelsius\n");
   for (fahr = 0; fahr <= 300; fahr = fahr + 20){
    printf("%3d \t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
   }


    return 0;
}

