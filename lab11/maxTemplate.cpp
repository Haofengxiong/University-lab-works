/****************************************************
 *
 *  FileName:    /net/data/ftp/pub/class/170/ftp/cpp/maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

template <class T>//Make a template out of the prototype
T myMax(T one, T two);

int main()
{
   int i_one = 3, i_two = 5;
   double d_one = 5.6, d_two = 7.3;
   string s_one = "donkey", s_two = "apple";

   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl;

   //Test your template on float and string types
cout << "The max of " << d_one << " and " << d_two << " is "
	<< myMax(d_one, d_two) << endl;

cout << "The max of " << s_one << " and " << s_two << " is "
	<< myMax(s_one, s_two) << endl;
	
   return 0;
}


template <class T>//Make a template out of this function. Don't forget the return type.
T myMax(T one, T two)
{
   T bigger;
   if (one < two)
   {
      bigger = two;
   }
   else
   {
      bigger = one;
   }
   return bigger;
}
