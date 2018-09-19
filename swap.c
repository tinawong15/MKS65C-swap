#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  // Create an array large enough to store 10 ints.
  int arr[10];
  printf("size of first array: %lu\n", sizeof(arr) / 4);
  int * p = arr;
  int i;
  // Populate the array with random values.
  for(i = 0; i < 9; i++) {
    *(p + i) = rand();
  }
  // Set the last value in the array to 0.
  *(p + 9) = 0;
  // Print out the values in this array
  for(i = 0; i < sizeof(arr) / 4; i++) {
    printf("%d: %d\n", i, *(p + i));
  }
  // Create a separate array large enough to store 10 ints.
  int arr2[10];
  int * p2 = arr2;
  printf("size of second array: %lu\n", sizeof(arr2) / 4);
  // Using only pointers, populate the second array with the values in the first but in reverse order
  for(i = 0; i < 10; i++) {
    *(p2 + i) = *(p + (9 - i));
  }
  // Print out the values in the second array
  for(i = 0; i < sizeof(arr2) / 4; i++) {
    printf("%d: %d\n", i, *(p2 + i));
  }
  return 0;
}
