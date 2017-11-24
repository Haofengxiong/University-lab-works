#include"myfunct.h"

int main()
{
  int array1[r_size][c_size];
  int array2[r_size][c_size];
  int sum[r_size][c_size];

  cout<<"Please enter the values for Array 1 (4*5):"<<endl;
  
  readArray( array1 );

  printArray( array1 );

  cout<<"Please enter the values for Array 2 (4*5):"<<endl;

  readArray( array2 );

  printArray( array2);

  cout<<"The sum is:"<<endl;

  sumArray( array1, array2, sum );

  printArray( sum );

  return 0;

}
