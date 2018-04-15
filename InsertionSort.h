#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

// Declare and define the insertion sort function below
// You *MUST* use the swap operation defined in Swap.h to swap elements

void insertion_sort (int numbers[], const int len){
    
    int i = 0, j = 0;
    
    for (i = 1; i < len; i++){
        
        j = i;
        
        while (j > 0 && numbers[j - 1] > numbers[j]){
            
            swap(numbers, j, (j-1));
            
            j--;
        }
        
    }
    
}

// Do not write any code below this line
#endif
