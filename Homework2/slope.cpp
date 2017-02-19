//Line program. Used to compute the slope and intercept of a line, given the location of two points.
#include <iostream>
#include <cmath>

int main(void) {
  //Initialize variables
  double x1, x2, y1, y2;
  //Prompt user to enter parameters for the line
  std::cout << "Please input x values and y values for the line:" << std::endl;
  std::cin >> x1 >> x2 >> y1 >> y2;
  //Initalize tolerance parameter
  double tolerance;
  //Prompt user to enter a tolerance
  std::cout << "Please input a tolerance:" << std::endl;
  std::cin >> tolerance;
  //Compute the difference between the two x values and see if it's less than the tolerance.
  double difference;
  difference = x2-x1;
  if (difference < tolerance) {
      //Tell user that the x values are too close together.
    std::cout << "Change in x is smaller than the tolerance. Please input new x values or change the tolerance" << std::endl;
    } else {
    //Compute the slope and intercept of the line and print it to the user.
    double slope;
    double distance;
    double intercept;
      slope = (y2-y1)/(x2-x1);
      distance = std::abs(x2);
      if (x2 >= 0) {
	  intercept = y2 - (distance*slope);
	  } else {
	intercept = y2 + (distance*slope);
      }
      std::cout << "The equation of the line is y = " << slope <<"*x + " << intercept << std::endl;
  }
  return 0;
}
      
      
      
