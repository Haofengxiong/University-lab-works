#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>

using namespace std;

int main()
{
  // char pcode[20];
  string pcode;
  
  for(int i=0; i<10; i++)
    {
      cout<<"Please enter your Postal Code: ";

      //cin.getline(pcode, 20, '\n');
      getline(cin, pcode);

	if( isalpha(pcode[0]) && 
            isdigit(pcode[1]) && 
            isalpha(pcode[2]) && 
            pcode[3] == ' ' && 
            isdigit(pcode[4])  && 
            isalpha(pcode[5]) && 
            isdigit(pcode[6]) && 
            //strlen(pcode)==7 
	    pcode.length()==7 )
	  {
	    cout<<"Valid Postral Code"<<endl;
	  }
	       else
	  {
	    cout<<"Not a Valid Postral Code"<<endl;
	  }

	      
	 
    }

      return 0;
}
