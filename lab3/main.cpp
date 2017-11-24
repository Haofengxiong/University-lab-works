# include "Employee.h"

int main()
{
     Employee employees[NUM_EMPL];
     int tempId;
     int index;

     cout << fixed << showpoint << setprecision(2);

     for (int i=0; i<NUM_EMPL; i++)
     {
          employees[i]=readEmployee();
	  cin.ignore(256,'\n');
     }
     cout<<endl;
     for (int i=0; i<NUM_EMPL; i++)
     {
          printEmployee(employees[i]);
     }

     //----Add code below for Step2----
     cout<<"Enter an id to look for: ";
     cin>> tempId; //prompt the user for an id
   
     index=findEmployee(employees, tempId, NUM_EMPL); //call the findEmployee function

     if(index==-1)
       {

	 cout<<"Did not find an Employee with that Id!"<<endl;
       }
     else
       cout<<"Found Employee: "<<employees[index].name<<endl;
//if found, display the name of the employee that goes with the id

     return 0;
}
