//main.cpp//

#include "Date.h"

int main()
{
  int m, d, y;

  Date date1;
  //Date date2;

  cout<<date1.getMonth()<<" "<<date1.getDay()<<" "<<date1.getYear()<<endl;

  cout<<"Enter month: ";
  cin>>m;
  date1.setMonth(m);


  cout<<"Enter day: ";
  cin>>d;
  date1.setDay(d);

  cout<<"enter year: ";
  cin>>y;
  date1.setYear(y);

  cout<<"Enter month: ";
  cin>>m;

  cout<<"Enter day: ";
  cin>>d;

  cout<<"enter year: ";
  cin>>y;
 
  Date date2(m, d, y);
  date1.printDate();
  date2.printDate();

  if(date1.sameMonth(date2))
    cout<<"Same"<<endl;
  else
    cout<<"Not the same."<<endl;

  return 0;
}
