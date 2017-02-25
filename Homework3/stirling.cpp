//Problem 3 code for HW 3

#include <iostream>
#include <cmath>
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

//Define the stirling approximation
//For large n, ln(n!) may be approximated as
//n*ln(n) - n
//As ln(n) is in general not an integer, need floats

double stirling(double x = 0) {
  return x*(std::log(x)) - x;
}

//Call either factorial or stirling depending on the x inputted
int main(void) {
  double x = 0.;
  bool continue_loop = 1;
  while (continue_loop == 1) {
    std::cout << "Please enter an integer:" << std::endl;
    std::cin >> x;
    if (x < 0) {
      //Warn user of bad input
      std::cout << "Invalid input." << std::endl;
      //Ask user if they would like to try again
      std::cout << "Would you like to input another number(type 1 or 0)?" << std::endl;
      std::cin >> continue_loop;
    } else if (x >= 0 & x <= 20) {
      //Compute the factorial
      std::cout << x << " factorial is " << factorial(x) << std::endl;
      //Ask user if they would like to input something else
      std::cout << "Would you like to input another number(type 1 or 0)?" << std::endl;
      std::cin >> continue_loop;
    } else {
      //Use Stirling's approximation
      std::cout << "The approximate value of ln(" << x << "!) is " << stirling(x) << std::endl;
      //Ask user if they would like to input something else
      std::cout << "Would you like to input another number(type 1 or 0)?" << std::endl;
      std::cin >> continue_loop;
    }
  }

  //End of program

  return 0;

}
  

