//Problem 2 of Hw 4
//Include the Header File Problem4.h
#include "Homework4.h"
//Define functions from Problem4.h
StudentRecord::StudentRecord(std::string lastname, std::string firstname, float score) {
  lastname_ = lastname;
  firstname_ = firstname;
  score_ = score;
  lastnames.push_back (lastname_);
  firstnames.push_back (firstname_);
  scores.push_back (score_);
};

StudentRecord::~StudentRecord() {
  lastnames.pop_back ();
  firstnames.pop_back ();
  scores.pop_back ();
};

bool StudentRecord::Input(std::istream & in) {
    //Parse line as string
    std::string line;
    //Read the line to the first comma and interpret as last name
    std::getline (in, line, ',');
    lastname_ = line;
    //Read the line to the next comma and interpret as first name
    std::getline(in, line, ',');
    firstname_ = line;
    //Read the rest of the line and interpret as score
    std::getline(in,line);
    score_ = std::atof(line.c_str());
    //Place the info in the vectors defined in class StudentRecord
    StudentRecord(lastname_, firstname_, score_);
    //Check for empty lines
    if (line == "") {
      return false;
    } else {
      return true;
    }
}

//Main Function: run Input to fill vectors and then fetch a certain record
int main (void) {
  //Initalize input variable
  int input = 0;
  //Run Input to fill vectors
  StudentRecord::Input(std::istream);
  //Ask user for input
  std::cout << "Please enter a number:" << std::endl;
  std::cin >> input;
  if (input < 0 || input >= StudentRecord::lastnames.size()) {
    //Warn user
    std::cout << "Input is out of range" << std::endl;
  } else {
    //Give the appropriate entry
    std::cout << "Entry " << input << " of the student records is " << StudentRecord::lastnames[input] << " , " << StudentRecord::firstnames[input]  << " , with a score of " << StudentRecord::scores[input] << "." << std::endl;
  }

  //End of Program
  return 0;
}
