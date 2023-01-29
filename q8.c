// Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int s) {

  // loop to access each array element
  for (int step = 0; step < s - 1; ++step) {

    // loop to compare array elements
    for (int i = 0; i < s - step - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int s) {
  for (int i = 0; i < s; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[20],s;
  printf("enter no. of elements");
  scanf("%d",&s);
  printf("enter elements;");
  for(int i=0;i<s;i++)
  {
      scanf("%d",&data[i]);
  }
// find the array's length

  bubbleSort(data, s);

  printf("Sorted Array in Ascending Order:\n");
  printArray(data, s);
}
