//Problem 1 for HW 3
//Program to input vectors and find the vector with the minimum magnitude.
#include <iostream>
#include <cmath>

int main(void) {
  //Define the vector's x and y coordinate values
  double xi = 0., yi = 0.;
  //Initalize count, smallest values, and magnitudes
  int count = 0;
  double x_smallest;
  double y_smallest;
  double x_smallest_coordinate;
  double y_smallest_coordinate;
  double magnitudei;
  double magnitude_smallest;
  
  std::cout << "Please enter the vector's x and y coordinates, x first and y second in pairs, type exit to end input:" << std::endl;
  //Input vectors
  while(std::cin >> xi >> yi) {
    std::cout <<"(" << xi << "," << yi << ")" << std::endl;
    magnitudei = std::sqrt((xi*xi)+(yi*yi));
    //Check if we're on the first iteration
    if (count == 0) {
      //Store the absolute values of xi and yi in the smallest values
      x_smallest = std::abs(xi);
      y_smallest = std::abs(yi);
      //Store the smallest coordinates
      x_smallest_coordinate = xi;
      y_smallest_coordinate = yi;
      //Compute current smallest magnitude
      magnitude_smallest = std::sqrt((x_smallest_coordinate*x_smallest_coordinate)+(y_smallest_coordinate*y_smallest_coordinate));
      //Increment count
      count++;
    } else {
      //Check if either of xi or yi is smaller than the current smallest values
      if (std::abs(xi) < x_smallest | std::abs(yi) < y_smallest) {
	//Check if the magnitude of the current vector is smaller than the smallest one
	if (magnitudei < magnitude_smallest) {
	  //Update smallest absolute values
	  x_smallest = std::abs(xi);
	  y_smallest = std::abs(yi);
	  //Update smallest coordinates
	  x_smallest_coordinate = xi;
          y_smallest_coordinate = yi;
	  //Update smallest magnitude
	  magnitude_smallest = std::sqrt((x_smallest_coordinate*x_smallest_coordinate)+(y_smallest_coordinate*y_smallest_coordinate));
	  //Increment count
	  count++;
	} else {
	  //Increment count
	  count++;
	}
      } else {
	//Increment count
	count++;
	  }
    }
  }
  //Print total number of vectors inputted
  std::cout << "Total number of vectors inputted: " << count << std::endl;
  //Print the magnitude and smallest vector
  std::cout << "Magnitude of the smallest vector is " << magnitude_smallest << std::endl;
  std::cout << "The vector with the smallest magnitude is (" << x_smallest_coordinate << "," << y_smallest_coordinate << ")" << std::endl;


  //End of program
  return 0;
}
  
