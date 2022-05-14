// A simple code to calculate the GST tax amount on different GST percentage values. I created this when I was learning 'C' programming in College.
// Website - afankhan.com | Instagram/Twitter - @justmrkhan

// Defining all the libraries needed.
#include <stdio.h>
#include <conio.h>

void main() {

  int gst_value, userInpAmt, userInpPerc; // Defining all the variables needed for this operation/calculation.

  printf("Kindly enter the exclusive amount. \n");
  scanf("%d", &userInpAmt); // Taking the input for the exclusive amount from the user and assigning it to one of our variables.

  printf("Kindly enter the GST rate without the percentage symbol. We currently have 5%, 12%, 18%, and 28%. \n");
  scanf("%d", &userInpPerc); // Taking the input for the GST rate percentage from the user and assigning it to one of our variables.
  // printf("%d", userInpPerc);

  gst_value = userInpAmt + userInpAmt * userInpPerc / 100; // Calculating the GST tax amount.
  // printf("%d \n", sum);

  printf("GST Tax Included Amount is: %d", gst_value); // Printing the value of GST tax amount. 

  getch();
}