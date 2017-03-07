//Homework 4 header file
//Define the Student Records header if we haven't already
#ifndef StudentRecords_h
#define StudentRecords_h
//Inclusions
#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <cstdlib>

//Create a student records class

class StudentRecord {
 public:
  //Constructor
  StudentRecord(std::string lastname, std::string firstname, float score);
  //Destructor
  ~StudentRecord();
  //Input
  bool Input(std::istream & in);

 private:
  std::string lastname_;
  std::string firstname_;
  float score_;
 public:
  std::vector<std::string> firstnames;
  std::vector<std::string> lastnames;
  std::vector<float> scores;
};

#endif
