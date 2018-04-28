#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here

int findMin (int numbers[], int start, int end){
    
    int result = start;
    
    for (int i = start + 1; i < end; i++){
        if (numbers[i] < numbers[result]){
            result = i;
        }
    }
    
    return result;
}

// Do not write any code below this line
#endif
