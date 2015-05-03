#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include <vector> 

template <typename T>
inline void swap(T & a, T & b)
{
    T c = a;
    a = b;
    b = c;
}

template <typename T>
int getPivot(std::vector<T> & arr, int hi, int lo)
{
    return hi;
}

template <typename T>
int partition(std::vector<T> & arr, int hi, int lo)
{
   int pivotidx = getPivot<T>(arr, hi, lo);
   T pivot = arr[pivotidx];
   int i = lo-1;
   for (int j=lo; j < hi; j++) 
   {
       if (arr[j] <= pivot)
       {
           i++;
           swap<T>(arr[i], arr[j]);
       }
   }
   swap<T>(arr[i+1], arr[pivotidx]);
   return i+1;
}

template <typename T>
void quicksort_cormen(std::vector<T> & arr, int hi, int lo=0) 
{
   if (lo < hi)
   {
       int q = partition<T>(arr, hi, lo);
       quicksort_cormen<T>(arr, lo, q-1);
       quicksort_cormen<T>(arr, q+1, hi);
   } 
}
#endif
