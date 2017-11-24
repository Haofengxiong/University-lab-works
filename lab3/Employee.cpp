#include "Employee.h"

void printEmployee(const Employee& c)
{

  cout<<"The Employee info is: ";
  
  cout<<c.name<<", "<<c.id<<", "<<c.salary<<endl;
    
}

Employee readEmployee()
{
  Employee tempE;
  cout<<"Employee Name?: ";
  getline(cin, tempE.name);
  cout<<"Employee Id?: ";
  cin>>tempE.id;
  cout<<"Employee Yearly Salary?: ";
  cin>>tempE.salary;

  return tempE;
}

int findEmployee(const Employee array[],int tId,int num)
{
  for(int i=0; i<num; i++)
    {
      if(tId==array[i].id)
      {
	return i;
      }
    }
  return -1;
	
}
