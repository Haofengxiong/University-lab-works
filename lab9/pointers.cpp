// Filename: pointers.cpp

#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int*mptr;
  ~Student(){delete[] mptr; mptr = NULL;}
};

void initStudent(Student* ptr, int& num);   // function prototype for initialization
void print(Student* ptr,int num);              // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object
    int number;
    

    cout<<"How many marks are there? ";
    cin>>number;

stu.mptr = new int[number];

      initStudent(&stu,number);	  // initializing the object
      print(stuPtr, number);             // printing the object

} // end main

//-----------------Start of functions----------------------------//

void initStudent(Student* ptr, int& num)
{
  cout<<"Please enter a name: "<<endl;
  cin>>ptr->name;
  cout<<"Please enter an id: "<<endl;
  cin>>ptr->id;
  for(int i=0; i<num;i++)
    {
      cout<<"Please enter a mark: ";
      cin>>ptr->mptr[i];
    }
}

void print(Student* ptr,int num)
{
  cout<<"Name: "<<ptr->name<<endl;
  cout<<"Id; "<<ptr->id<<endl;
  for(int i=0; i<num;i++)
    {
      cout<<"Mark "<<i<<": "<<*(ptr->mptr+i)<<endl;
    }

}
