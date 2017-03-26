//Redemption assignment
//Inclusions
#include <memory> //shared_ptr
#include <algorithm> //sort
//include all header files for each of the classes
#include "StudentRecord.h"
#include "StudentRecordPhysics.h"
#include "StudentRecordLiterature.h"
#include "StudentRecordHistory.h"
//Define vectors that store the students of each class, plus the total class
std::vector<std::shared_ptr<StudentRecord> > records, physicsrecords, litrecords, historyrecords;
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
    //Create a shared pointer called phy, input it in the class and total class
    std::shared_ptr<StudentRecord> phy (new StudentRecordPhysics);
    phy -> input(in);
    //uncomment next line if you want to print the record itself
    //phy -> print();
    //Push into the physics records and full student records
    records.push_back(phy);
    physicsrecords.push_back(phy);
    return true;
  } else if (Class == "Literature") {
    //Create a shared pointer called lit, input it in the class and total class
    std::shared_ptr<StudentRecord> lit (new StudentRecordLiterature);
    lit -> input(in);
    //uncomment next line if you want to print the record itself
    //lit -> print();
    //Push into the lit records and full student records
    records.push_back(lit);
    litrecords.push_back(lit);
    return true;
  } else if (Class == "History") {
    //Create a shared pointer called his, input it in the class and total class
    std::shared_ptr<StudentRecord> his (new StudentRecordHistory);
    his -> input(in);
    //uncomment next line if you want to print the record itself
    //his -> print();
    //Push into the history records and full student records
    records.push_back(his);
    historyrecords.push_back(his);
    return true;
  } else {
    //Class is not one of the above (say, Mathematics)
    return false;    //we don't have that class
  }
}
//Job now is to output four lists, sorted by total grade
//First, create a function to sort
bool lessthan( std::shared_ptr<StudentRecord> const &left, std::shared_ptr<StudentRecord> const &right) {
  return *left < *right;
}
//Main program - input a file and find the average of each class and sort by total score
int main(int argc, char ** argv) {

  //take the file from command line input and parse using inputfile
  std::ifstream in(argv[1]);
  while(inputfile(in)) {
    inputfile(in);
  }

  //Define averages for each of the classes, initalize to 0.0
  double TotalAverage = 0.0;
  double PhysicsAverage = 0.0;
  double HistoryAverage = 0.0;
  double LitAverage = 0.0;

  //Determine averages for all classes and total class
  for (unsigned int i = 0; i < (physicsrecords.size()); i++) {
    PhysicsAverage += physicsrecords.at(i)->score();
  }
  PhysicsAverage /= physicsrecords.size();
  for (unsigned int i = 0; i < (litrecords.size()); i++) {
    LitAverage += litrecords.at(i)->score();
  }
  LitAverage /= physicsrecords.size();
  for (unsigned int i = 0; i < (historyrecords.size()); i++) {
    HistoryAverage += historyrecords.at(i)->score();
  }
  HistoryAverage /= historyrecords.size();
  for (unsigned int i = 0; i < (records.size()); i++) {
    TotalAverage += records.at(i)->score();
  }
  TotalAverage /= records.size();

  //Print the averages
  std::cout << "Physics class average = " << PhysicsAverage << std::endl;
  std::cout << "Literature class average = " << LitAverage << std::endl;
  std::cout << "History class average = " << HistoryAverage << std::endl;
  std::cout << "Total class average = " << TotalAverage << std::endl;

  //Now sort through all records and print them
  std::cout << "Sorted grades (last grade is the total grade):" << std::endl;
  std::cout << "Physics class grades:" << std::endl;
  //Sort the physics class:
  std::sort (physicsrecords.begin(), physicsrecords.end(), lessthan);
  for (std::shared_ptr<StudentRecord> const & rec:physicsrecords) {
    rec -> print(std::cout);
  }
  //For brevity, break with dashes
  std::cout << std::endl;
  std::cout << "-------" << std::endl;
  std::cout << std::endl;
  //Do the same with the other classes:
  std::cout << "Literature class grades:" << std::endl;
  std::sort (litrecords.begin(), litrecords.end(), lessthan);
  for (std::shared_ptr<StudentRecord> const & rec:litrecords) {
    rec -> print(std::cout);
  }
  //For brevity, break with dashes
  std::cout << std::endl;
  std::cout << "-------" << std::endl;
  std::cout << std::endl;
  std::cout << "History class grades:" << std::endl;
  std::sort (historyrecords.begin(), historyrecords.end(), lessthan);
  for (std::shared_ptr<StudentRecord> const & rec:historyrecords) {
    rec -> print(std::cout);
  }
  //For brevity, break with dashes
  std::cout << std::endl;
  std::cout << "-------" << std::endl;
  std::cout << std::endl;
  std::cout << "Total class grades:" << std::endl;
  std::sort (records.begin(), records.end(), lessthan);
  for (std::shared_ptr<StudentRecord> const & rec:records) {
    rec -> print(std::cout);
  }

  //End of program
  return true;
}
  
    
