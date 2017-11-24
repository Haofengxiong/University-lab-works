/***************************************************************/

// Filename: /net/data/ftp/pub/class/170/Strings/string_ex.cpp
// Purpose: To illustrate the use of C Strings and C++ Strings.

/***************************************************************/

#define MAXLEN 17

#include <iostream>
#include <string>	// include for C++ standard string class
#include <cstring>	// include for standard C string library

using namespace std;

int main()
{
  // declare C strings
  char C_str1[MAXLEN], 
       C_str2[MAXLEN], 
       C_str3[MAXLEN];

  // declare C++ strings
  string C_Plus_str1 = "Regina",
   	 C_Plus_str2 = "SK",
         C_Plus_str3 = "Canada";

  strcpy(C_str1, "Regina");
  strcpy(C_str2, "SK");
  strcpy(C_str3, "Canada");

  cout << "\nThis program displays values in C Strings, and C++ Strings.\n";

  cout << "\n** Initial values" << endl;
  cout << "C++ strings: " << C_Plus_str1 << "  " << 
			     C_Plus_str2 << "  " << 
			     C_Plus_str3 << endl;

  cout << "C strings:   " << C_str1 << "  " << 
			     C_str2 << "  " << 
			     C_str3 << endl;

  // Now assign new long value to string 2.
  C_Plus_str2 =        "province of Saskatchewan";
  strcpy(C_str2,       "province of Saskatchewan");


  cout << "\n** Values after assigning long string to 2nd string" << endl;
  cout << "             " << "String 1    "  << "String 2           "
	<< "   String 3";
  cout << "\nC++ strings: " << C_Plus_str1 << "  " << 
			       C_Plus_str2 << "  " << 
			       C_Plus_str3 << endl;

  cout << "C strings:   " << C_str1 << "  " << 
			     C_str2 << "  " << 
			     C_str3 << endl << endl;
}

