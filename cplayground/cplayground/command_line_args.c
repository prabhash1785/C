//
//  binary_search_tree.c
//  cplayground
//
//  Created by Rathore, Prabhash on 7/9/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <stdio.h>

int main(int argc, char **argv) {
    
    if(argc < 2) {
        printf("No command line parameter provided\n");
        return 0;
    }
    
    for(int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}
