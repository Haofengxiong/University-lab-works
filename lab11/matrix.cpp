#ifndef __MATRIX_CPP__
#define __MATRIX_CPP__

#include "matrix.h"
#include <iostream>
using namespace std;

template <class M_type>
Matrix<M_type>::Matrix()
{
   rows = MAXROWS;
   cols = MAXCOLS;
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = '\0';
      }
   }
}   

template <class M_type>
void Matrix<M_type>::printMatrix()
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 cout << doubleArray[i][j] << "   ";
      }
      cout << endl;
   }
}

template <class M_type>
void Matrix<M_type>::setMatrix(M_type otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] = otherArray[i][j];
      }
   }
}

template <class M_type>
void Matrix<M_type>::addMatrix(M_type otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 doubleArray[i][j] += otherArray[i][j];
      }
   }
}

template <class M_type>
void Matrix<M_type>::addMatrix(Matrix otherMatrix)
{
   addMatrix(otherMatrix.doubleArray);
}

#endif
