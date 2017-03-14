//Problem 1 of HW 5
//Inclusions
#include <memory>     //shared_ptr
//include all header files for each of the classes
#include "StudentRecord.h"
#include "StudentRecordPhysics.h"
#include "StudentRecordLiterature.h"
#include "StudentRecordHistory.h"
//Define vectors that store the students of each class
std::vector<std::shared_ptr<StudentRecord> > physicsrecords, litrecords, historyrecords;
//Define a function to input a file (ie records.txt) and parse lines for class
bool inputfile(std::istream & in) {
  //initialize strings for class and line
  std::string Class;
  std::string line;
  //Read a line in
  std::getline(in, line, ',');
  Class = line;
  //Check the class
  if (Class == "Physics") {
    //Create a shared pointer called phy, input it in the class and print
    std::shared_ptr<StudentRecord> phy (new StudentRecordPhysics);
    phy -> input(in);
    phy -> print();
    //Push into the physics records
    physicsrecords.push_back(phy);
    return true;
  } else if (Class == "Literature") {
    //Create a shared pointer called lit, input it in the class and print
    std::shared_ptr<StudentRecord> lit (new StudentRecordLiterature);
    lit -> input(in);
    lit -> print();
    //Push into the lit records
    litrecords.push_back(lit);
    return true;
  } else if (Class == "History") {
    //Create a shared pointer called lit, input it in the class and print
    std::shared_ptr<StudentRecord> his (new StudentRecordHistory);
    his -> input(in);
    his -> print();
    //Push into the history records
    historyrecords.push_back(his);
    return true;
  } else {
    //Class is not one of the above (say, Mathematics)
    return false;    //we don't have that class
  }
}
//Main program - input a file and find the average of the entire class
int main(int argc, char ** argv) {

  //take the file from command line input and parse using inputfile 
  std::ifstream in(argv[1]);
  while(inputfile(in)) {
    inputfile(in);
  }

  //Define averages for each of the classes, initalize to 0.0
  double PhysicsAverage = 0.0;
  double HistoryAverage = 0.0;
  double LitAverage = 0.0;

  //Determine averages for each class

  for (unsigned int i = 0; i < (physicsrecords.size()); i++) {
    PhysicsAverage += physicsrecords.at(i)->score();
  }
  PhysicsAverage /= physicsrecords.size();
  for (unsigned int i = 0; i < (litrecords.size()); i++) {
    LitAverage += litrecords.at(i)->score();
  }
  LitAverage /= litrecords.size();
  for (unsigned int i = 0; i < (historyrecords.size()); i++) {
    HistoryAverage += historyrecords.at(i)->score();
  }
  HistoryAverage /= historyrecords.size();

  //Finally, print the average grade for each class
  std::cout << "The average grade for the Physics class is " << PhysicsAverage << "." << std::endl;
  std::cout << "The average grade for the Literature class is " << LitAverage << "." << std::endl;
  std::cout << "The average grade for the History class is " << HistoryAverage << "." << std::endl;
  //End of program
  return 0;
}
  
