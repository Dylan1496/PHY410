#include "StudentRecordHistory.h"

StudentRecordHistory::StudentRecordHistory() {};
StudentRecordHistory::~StudentRecordHistory() {};

void StudentRecordHistory::print( std::ostream & out ) const {
  out << "History score : " << lastname_ << "," << firstname_
      << ", score 0: " << scores_[0] << ", score 1: " << scores_[1]
      << ", total: " << score() << std::endl;
}

bool StudentRecordHistory::input( std::istream & in ) {
  //First define exam 1 and exam 2 as floats
  float e1 = 0.0;
  float e2 = 0.0;
  //Add name in this format(last, first)
  std::string line;
  std::getline( in, line, ',');
  lastname_ = line;
  std::getline( in, line, ',');
  firstname_ = line;
  //Now we get the exam scores. History has two per the problem
  std::getline( in, line, ',' );
  e1 = std::atof( line.c_str() );
  std::getline (in, line);
  e2 = std::atof(line.c_str() );
  //Check which one is bigger - this determines weightings
  if (e1 >= e2) {
    scores_.push_back(e1*.6);
    scores_.push_back(e2*.4);
  } else {
    scores_.push_back(e1*.4);
    scores_.push_back(e2*.6);
  if( line == "")
    return false;
  else {
    //Call compute_score in input
    compute_score();
    return true;
  }
  }
}
