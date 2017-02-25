//Problem 2 code for HW 3

#include <iostream>

//Define the factorial function
//Factorial is defined as
//n! = n*(n-1)*(n-2)*...*2*1
//where n is a non negative integer
//and 0! is defined to be 1.

unsigned long int factorial(unsigned long int x = 0) {
  if (x == 0) {
    //get 1 since 0! = 1 by definition
    return 1;
  } else if (x == 1) {
    //Return 1 since 1! = 1
    return 1;
  } else {
    //Use recursion to get the desired result
    return x*factorial(x-1);
  } 
}

//Call the factorial function
int main(void) {
  unsigned long int x = 0;
  while (true) {
    std::cout << "Please enter an integer between 0 and 20, type a different integer to exit:" << std::endl;
    std::cin >> x;
    if (x >= 0 & x <= 20) {
      std::cout << x << " factorial is " << factorial(x) << std::endl;
    } else {
      std::cout << x << " is out of range, exiting." << std::endl;
      break;
    }
  }

  //End of program

  return 0;
}
  
  
