//
//  find_pair_count_with_given_sum.c
//
// Find number of pairs with given sum ensuring pairs are unique.
//
//  cplayground
//
//  Created by Rathore, Prabhash on 6/21/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <stdio.h>

int find_unique_pair_count(int *array, int length, int sum) {
    
    int duplicate_tracker[length];
    for(int i = 0; i < length; i++) {
        duplicate_tracker[i] = 0;
    }
    
    int pair_count = 0;
    int i, j;
    
    for(i = 0; i < length - 1; i++) {
        j = i + 1;
        while(j < length) {
            int targetSum = array[i] + array[j];
            if(targetSum == sum && duplicate_tracker[j] == 0) {
                pair_count++;
                duplicate_tracker[j] = 1;
            }
            j++;
        }
    }
    
    return pair_count;
}

int main() {
    
    int a[] = {4, 15, 3, 9, 12, 17, 8, 10, 13};
    int array_size = sizeof(a)/sizeof(a[0]);
    printf("Size of array is: %d\n", array_size);
    
    int sum = 25;
    int pair_count_with_sum = find_unique_pair_count(a, array_size, sum);
    printf("Pair count with sum %d is: %d\n", sum, pair_count_with_sum);
}


