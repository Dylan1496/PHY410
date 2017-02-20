//Problem 3 of HW2

#include <iostream>
#include <string>
using namespace std;

int main(void) {

  //Prices for items on the menu
  int e1 = 7;
  int e2 = 6;
  int e3 = 9;
  int s1 = 2;
  int s2 = 3;
  int s3 = 2;
  int b1 = 0;
  int b2 = 2;
  int b3 = 4;
  int b4 = 6;
  int b5 = 7;
  int b6 = 7;
  int b7 = 1;
  int b8 = 1;
  int c1 = 8;
  int c2 = 7;
  int c3 = 13;
  //Initalize total
  int total = 0;
  //For those who do not want an item
  int no = 0;
  //set up items
  string item1;
  string item2;
  string item3;
  //Prompt user to input into the machine
  cout << "Welcome to the food dispensing machine. Please input what you want below (if you do not want an item, type no):" << endl;
  cin >> item1 >> item2 >> item3;
  //Check if three items were ordered:
  if (item1 != "no" & item2 != "no" & item3 != "no") {
    //Check if the items match a combo and give the price
    if (item1 == "e1" & item2 == "s1" & (item3 == "b1" ^ item3 == "b2" ^ item3 == "b7" ^ item3 == "b8")) {
      cout << "Your price is " << c1 << " dollars." << endl;

    } else if (item1 == "e1" & item3 == "s1" & (item2 == "b1" ^ item2 == "b2" ^ item2 == "b7" ^ item2 == "b8")) {

      cout << "Your price is " << c1 << " dollars." << endl;
    } else if (item2 == "e1" & item1 == "s1" & (item3 == "b1" ^ item3 == "b2" ^ item3 == "b7" ^ item3 == "b8")) {
      cout << "Your price is " << c1 << " dollars." << endl;

    } else if (item2 == "e1" & item3 == "s1" & (item1 == "b1" ^ item1 == "b2" ^ item1 == "b7" ^ item1 == "b8")) {
      cout << "Your price is " << c1 << " dollars." << endl;

    } else if (item3 == "e1" & item2 == "s1" & (item1 == "b1" ^ item1 == "b2" ^ item1 == "b7" ^ item1 == "b8")) {
      cout << "Your price is " << c1 << " dollars." << endl;

    } else if (item3 == "e1" & item1 == "s1" & (item2 == "b1" ^ item2 == "b2" ^ item2 == "b7" ^ item2 == "b8")) {
      cout << "Your price is " << c1 << " dollars." << endl;

    } else if (item1 == "e2" & item2 == "s2" & (item3 == "b7" ^ item3 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item1 == "e2" & item3 == "s2" & (item2 == "b7" ^ item2 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item2 == "e2" & item1 == "s2" & (item3 == "b7" ^ item3 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item2 == "e2" & item3 == "s2" & (item1 == "b7" ^ item1 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item3 == "e2" & item1 == "s2" & (item2 == "b7" ^ item2 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item3 == "e2" & item2 == "s2" & (item1 == "b7" ^ item1 == "b8")) {
      cout << "Your price is " << c2 << " dollars." << endl;

    } else if (item1 == "e3" & (item2 == "s1" ^ item2 == "s2" ^ item2 == "s3") & (item3 == "b3" ^ item3 == "b4" ^ item3 == "b5" ^ item3 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else if (item1 == "e3" & (item3 == "s1" ^ item3 == "s2" ^ item3 == "s3") & (item2 == "b3" ^ item2 == "b4" ^ item2 == "b5" ^ item2 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else if (item2 == "e3" & (item1 == "s1" ^ item1 == "s2" ^ item1 == "s3") & (item3 == "b3" ^ item3 == "b4" ^ item3 == "b5" ^ item3 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else if (item2 == "e3" & (item3 == "s1" ^ item3 == "s2" ^ item3 == "s3") & (item1 == "b3" ^ item1 == "b4" ^ item1 == "b5" ^ item1 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else if (item3 == "e3" & (item1 == "s1" ^ item1 == "s2" ^ item1 == "s3") & (item2 == "b3" ^ item2 == "b4" ^ item2 == "b5" ^ item2 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else if (item3 == "e3" & (item2 == "s1" ^ item2 == "s2" ^ item2 == "s3") & (item1 == "b3" ^ item1 == "b4" ^ item1 == "b5" ^ item1 == "b6")) {
      cout << "Your price is " << c3 << " dollars." << endl;

    } else {
      //Compute the price and show it to the user
      if (item1 == "e1") {
	total += e1;
	  } else if (item1 == "e2") {
	total += e2;
	  } else if (item1 == "e3") {
	total += e3;
	  } else if (item1 == "s1") {
	total += s1;
	  } else if (item1 == "s2") {
	total += s2;
	  } else if (item1 == "s3") {
	total += s3;
	  } else if (item1 == "b1") {
	total += b1;
	  } else if (item1 == "b2") {
	total += b2;
	  } else if (item1 == "b3") {
	total += b3;
	  } else if (item1 == "b4") {
	total += b4;
	  } else if (item1 == "b5") {
	total += b5;
	  } else if (item1 == "b6") {
	total += b6;
	  } else if (item1 == "b7") {
	total += b7;
	  } else if (item1 == "b8") {
	total += b8;
	  } else {
	//Tell user that their input is bad
	cout << "Input 1 is bad, price may not be accurate." << endl;
      }
      if (item2 == "e1") {
	total += e1;
	  } else if (item2 == "e2") {
	total += e2;
	  } else if (item2 == "e3") {
	total += e3;
	  } else if (item2 == "s1") {
	total += s1;
	  } else if (item2 == "s2") {
	total += s2;
	  } else if (item2 == "s3") {
	total += s3;
	  } else if (item2 == "b1") {
	total += b1;
	  } else if (item2 == "b2") {
	total += b2;
	  } else if (item2 == "b3") {
	total += b3;
	  } else if (item2 == "b4") {
	total += b4;
	  } else if (item2 == "b5") {
	total += b5;
	  } else if (item2 == "b6") {
	total += b6;
	  } else if (item2 == "b7") {
	total += b7;
	  } else if (item2 == "b8") {
	total += b8;
	  } else {
	//Tell user that their input is bad
	cout << "Input 2 is bad, price may not be accurate." << endl;
      }
      if (item3 == "e1") {
	total += e1;
	  } else if (item3 == "e2") {
	total += e2;
	  } else if (item3 == "e3") {
	total += e3;
	  } else if (item3 == "s1") {
	total += s1;
	  } else if (item3 == "s2") {
	total += s2;
	  } else if (item3 == "s3") {
	total += s3;
	  } else if (item3 == "b1") {
	total += b1;
	  } else if (item3 == "b2") {
	total += b2;
	  } else if (item3 == "b3") {
	total += b3;
	  } else if (item3 == "b4") {
	total += b4;
	  } else if (item3 == "b5") {
	total += b5;
	  } else if (item3 == "b6") {
	total += b6;
	  } else if (item3 == "b7") {
	total += b7;
	  } else if (item3 == "b8") {
	total += b8;
	  } else {
	//Tell user that their input is bad
	cout << "Input 3 is bad, price may not be accurate." << endl;
      }
      cout << "Your price is " << total << " dollars." << endl;
	
    }
  } else {
      //Compute the price and show it to the user
      if (item1 == "e1") {
	total += e1;
	  } else if (item1 == "e2") {
	total += e2;
	  } else if (item1 == "e3") {
	total += e3;
	  } else if (item1 == "s1") {
	total += s1;
	  } else if (item1 == "s2") {
	total += s2;
	  } else if (item1 == "s3") {
	total += s3;
	  } else if (item1 == "b1") {
	total += b1;
	  } else if (item1 == "b2") {
	total += b2;
	  } else if (item1 == "b3") {
	total += b3;
	  } else if (item1 == "b4") {
	total += b4;
	  } else if (item1 == "b5") {
	total += b5;
	  } else if (item1 == "b6") {
	total += b6;
	  } else if (item1 == "b7") {
	total += b7;
	  } else if (item1 == "b8") {
	total += b8;
	  } else if (item1 == "no") {
	total += no;
	  } else {
	//Tell user that their input is bad
	cout << "Input 1 is bad, price may not be accurate." << endl;
      }
      if (item2 == "e1") {
	total += e1;
	  } else if (item2 == "e2") {
	total += e2;
	  } else if (item2 == "e3") {
	total += e3;
	  } else if (item2 == "s1") {
	total += s1;
	  } else if (item2 == "s2") {
	total += s2;
	  } else if (item2 == "s3") {
	total += s3;
	  } else if (item2 == "b1") {
	total += b1;
	  } else if (item2 == "b2") {
	total += b2;
	  } else if (item2 == "b3") {
	total += b3;
	  } else if (item2 == "b4") {
	total += b4;
	  } else if (item2 == "b5") {
	total += b5;
	  } else if (item2 == "b6") {
	total += b6;
	  } else if (item2 == "b7") {
	total += b7;
	  } else if (item2 == "b8") {
	total += b8;
	  } else if (item2 == "no") {
	total += no;
	  } else {
	//Tell user that their input is bad
	cout << "Input 2 is bad, price may not be accurate." << endl;
      }
      if (item3 == "e1") {
	total += e1;
	  } else if (item3 == "e2") {
	total += e2;
	  } else if (item3 == "e3") {
	total += e3;
	  } else if (item3 == "s1") {
	total += s1;
	  } else if (item3 == "s2") {
	total += s2;
	  } else if (item3 == "s3") {
	total += s3;
	  } else if (item3 == "b1") {
	total += b1;
	  } else if (item3 == "b2") {
	total += b2;
	  } else if (item3 == "b3") {
	total += b3;
	  } else if (item3 == "b4") {
	total += b4;
	  } else if (item3 == "b5") {
	total += b5;
	  } else if (item3 == "b6") {
	total += b6;
	  } else if (item3 == "b7") {
	total += b7;
	  } else if (item3 == "b8") {
	total += b8;
	  } else if (item3 == "no") {
	total += no;
	  } else {
	//Tell user that their input is bad
	cout << "Input 3 is bad, price may not be accurate." << endl;
      }
      cout << "Your price is " << total << " dollars." << endl;

	}

    

  //End of program

  return 0;
}
