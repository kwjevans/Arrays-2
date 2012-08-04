//
//  main.c
//  Arrays-2
//
//  Created by Kris Evans on 01/08/2012.
//  Copyright (c) 2012 Kris Evans. All rights reserved.
//
//
// Calculates values, stores them in an array, then displays the array contents and uses
// a pointer to the value in each array slot and multiplies it again


#include <stdio.h>

int main(int argc, const char * argv[])
{
    int aRay[10];
    int i;
    int *j;
    
    for (i=1;i<11;i++){
        aRay[i] = i*2;
    }
    
    for (i=1;i<11;i++){
        j = &aRay[i];
        printf("%d %d\n",aRay[i],*j * aRay[i]);
    }
}

