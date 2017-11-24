#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  cout<<showpoint<<fixed<<setprecision(2);

  float cost[5];
  float tax[5];
  char letter;
  float totalcost=0, totaltax=0, total=0;

  for( int i=0; i<5 ; i++ )
    {
      cout<<"Cost?";
	cin>>cost[i];
	cout<<"tax?";
	cin>>letter;

	if(letter=='y')
	  {
	    tax[i]=cost[i]*0.10;
	  }
	else
	  {
	    tax[i]=0;
	      }
    }

  cout<<"For your review, here are your values:"<<endl;
  cout<<setw(10)<<"Cost"<<setw(10)<<"Tax"<<endl;

  for( int i=0; i<5 ; i++ )
    {
      cout<<setw(10)<<cost[i]<<setw(10)<<tax[i]<<endl;
      totalcost=totalcost+cost[i];
      totaltax=totaltax+tax[i];
    }


  total=totalcost+totaltax;

  cout<<"--------------------"<<endl;
  cout<<setw(10)<<totalcost<<setw(10)<<totaltax<<endl;
  cout<<"Your total bill is: "<<total<<endl;

  return 0;
}
