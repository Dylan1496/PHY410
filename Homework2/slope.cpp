//Line program. Used to compute the slope, intercept, and midpoint of a line, ads well as a perpendicular line through point 1, given the location of two points.
#include <iostream>
#include <cmath>

int main(void) {
  //Initialize variables
  double x1, x2, y1, y2;
  //Prompt user to enter parameters for the line
  std::cout << "Please input x values and y values for the line (x values first, then y values):" << std::endl;
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
    //Compute the slope, intercept, and midpoint of the line and print it to the user.
    double slope1;
    double distance1;
    double intercept1;
    double x_mid;
    double y_mid;
      slope1 = (y2-y1)/(x2-x1);
      distance1 = std::abs(x2);
      x_mid = (x1+x2)/2;
      y_mid = (y1+y2)/2;
      if (x2 >= 0) {
	  intercept1 = y2 - (distance1*slope1);
	  } else {
	intercept1 = y2 + (distance1*slope1);
      }
      std::cout << "The equation of the line is y = " << slope1 <<"*x + " << intercept1 << std::endl;
      std::cout << "The slope of the line is " << slope1 << ", the intercept is " << intercept1 << " and the midpoint is (" << x_mid <<"," << y_mid <<")" << std::endl;
      //Compute the perpendicular line and print it to the user.
      double slope2;
      double distance2;
      double intercept2;
      slope2 = -1/slope1;
      distance2 = std::abs(x1);
      if (x1 >= 0) {
	  intercept2 = y1 - (distance2*slope2);
	  } else {
	intercept1 = y1 + (distance2*slope2);
      }
      std::cout << "The equation of the perpendicular line is y = " << slope2 <<"*x + " << intercept2 << std::endl;
  }
  //End of program
  return 0;
}
      
      
      
