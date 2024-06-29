#include <stdio.h>
#include <math.h>

/**
 * Converts Celsius to Fahrenheit.

 * @param cel The temperature in Celsius.

 * @return The temperature in Fahrenheit.
 */
int change_c_to_f(int cel) {
  int result;
  result = cel * 9 / 5 + 32;
  return result;
}

int main() {
  int cel;

  printf("Enter the temperature in Celsius: ");
  scanf("%d", &cel);

  // Check if the user entered a valid temperature in Celsius.
  if (cel < -273.15 || cel > 5526.85) {
    printf("Error: The temperature must be between -273.15 and 5526.85 degrees Celsius. Please try again.\n");
    exit(1);
  }

  // Convert the temperature in Celsius to Fahrenheit.
  int fara = change_c_to_f(cel);

  // Print the temperature in Fahrenheit.
  printf("The temperature in Fahrenheit is: %d F\n", fara);

  return 0;
}
