/*
Kth smallest element in a row-wise and column-wise sorted 2D array | Set 1
Given an n x n matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the given 2D array.
For example, consider the following 2D array.

        10, 20, 30, 40
        15, 25, 35, 45
        24, 29, 37, 48
        32, 33, 39, 50
The 3rd smallest element is 20 and 7th smallest element is 30
*/

#include<stdio.h> 
  
/*Function to return max sum such that no two elements 
 are adjacent */
int FindMaxSum(int arr[], int n) 
{ 
  int incl = arr[0]; 
  int excl = 0; 
  int excl_new; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
     /* current max excluding i */
     excl_new = (incl > excl)? incl: excl; 
  
     /* current max including i */
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
  
   /* return max of incl and excl */
   return ((incl > excl)? incl : excl); 
} 
  
/* Driver program to test above function */
int main() 
{ 
  int arr[] = {-1, 7, 8, -5, 4}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  printf("%d n", FindMaxSum(arr, n)); 
  return 0; 
} 