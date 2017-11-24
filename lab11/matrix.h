#ifndef __MATRIX_H__
#define __MATRIX_H__

const int MAXROWS=2;
const int MAXCOLS=3;

template <class M_type>
class Matrix
{
  private:
   M_type doubleArray[MAXROWS][MAXCOLS];
   int rows;
   int cols;

  public:
   //Constructor
   Matrix();  //Set rows to MAXROWS and cols to MAXCOLS
	      //Initialize all the values of doubleArray to zero
    
   //Getter Functions
   void printMatrix(); 

   //Setter Functions
   void setMatrix(M_type [][MAXCOLS]); //set the doubleArray to what is sent
   void addMatrix(M_type [][MAXCOLS]); //add an array to doubleArray
   void addMatrix(Matrix otherMatrix);

   //No destructor needed
};

#endif
#include "matrix.cpp"
