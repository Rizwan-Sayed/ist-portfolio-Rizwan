#include <stdio.h>

int main() {
  float subtotal = 23.84;
  float tax = .09;
  printf("How much are your groceries?");
  scanf("%f", &subtotal);
  printf("What is the tax rate? "); //ask the user for the tax rate
  scanf("%f", &tax ); // put user input in the tax variable
  printf("The final total is: %f.2\n", subtotal + subtotal*tax);
  return 0;
}
