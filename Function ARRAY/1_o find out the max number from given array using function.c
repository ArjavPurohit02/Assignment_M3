/*Write a program to find out the max number from given array using function*/


#include <stdio.h>

#define N 5

int max_of_array(int arr[]) {
  int max_val = arr[0];

  // Recursively check if the current element of the array
  // is larger than the current maximum value
  if (max_val < arr[1])
    max_val = max_of_array(&arr[1]);

  return max_val;
}

 main() {
  int arr[N] = {1, 3, 4, 5, 6};
  printf("Max value of array: %d\n", max_of_array(arr));
}
