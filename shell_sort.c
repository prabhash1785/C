// Shell Sort
// In-place compariosn sort
#include <stdio.h>

void shell_sort(int array[], int size);
void print_array_elements(int a[], int n);

int main() {
  int n = 5;
  int a[] = {3, 1, 9, 6, 4};

  printf("%s\n", "Original array:");
  print_array_elements(a, n);

  shell_sort(a, n);
  printf("%s\n", "Sorted array:");
  print_array_elements(a, n);
}

void shell_sort(int array[], int n) {
  int gap, i, j, temp;
  
  for(gap = n/2; gap > 0; gap /= 2) {
  	for(i = gap; i < n; i++) {
  		for(j = i - gap; j >= 0 && array[j] > array[j + gap]; j -= gap) {
  			temp = array[j];
  			array[j] = array[j + gap];
  			array[j + gap] = temp;
  		}
  	}
  }
}

void print_array_elements(int a[], int n) {

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
