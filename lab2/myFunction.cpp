#include"myfunct.h"

void readArray( int r_Array[][c_size] )
{

  for(int i=0; i<r_size; i++)
    {
    for(int j=0; j<c_size; j++)
      cin>>r_Array[i][j];
    }
}

void printArray( int p_Array[][c_size] )
{
  for(int i=0; i<r_size; i++)
    {
    for(int j=0; j<c_size; j++)
      {
	cout<<p_Array[i][j]<<" ";
      }
    cout<<endl;
      
    }
}

void sumArray( int Array_1[][c_size],int Array_2[][c_size],int s_Array[][c_size] )
{

  for(int i=0; i<r_size; i++)
    {
    for(int j=0; j<c_size; j++)

     s_Array[i][j]=Array_1[i][j]+Array_2[i][j];
    }
}
