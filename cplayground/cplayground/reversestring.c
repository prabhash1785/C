//
//  reversestring.c
//  cplayground
//
//  Created by Rathore, Prabhash on 6/20/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void reverse_string_recusively_helper(char[], int, int);

void reverse_string_recursively(char s[], int n) {
    reverse_string_recusively_helper(s, 0, n - 1);
}

void reverse_string_recusively_helper(char str[], int start, int end) {
    
    if(start >= end) {
        return;
    }
    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse_string_recusively_helper(str, ++start, --end);
}

int main() {
    
    char str[] = "apple";
    printf("Original String: %s\n", str);
    
    reverse_string_recursively(str, (int)strlen(str));
    printf("Reversed String: %s\n", str);
}
