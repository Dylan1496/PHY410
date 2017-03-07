//Problem 1 of HW 4
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


//Main Function: run Input to fill vectors and then compute the average

int main (void) {
  //Run Input to fill vectors
  StudentRecord::Input(std::istream);
  //Compute the average of the score vector and print it to the user
  float sum = 0;
  for( std::vector<int>::const_iterator i = StudentRecord::scores.begin(); i != StudentRecord::scores.end(); ++i) {
    sum += StudentRecord::scores[i];
  }
  std::cout << "The average of the scores in the file is " << (sum)/(scores.size()) << std::endl;
  

  //End of Program
  return 0;
}


