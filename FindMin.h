#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here

int findMin (int numbers[], int start, int end){
    
    int result = 0;
    
    for (int i = 0; i < sizeof(&numbers); i++){
        
        if (numbers[i] > start || numbers[i] < end){
            result = numbers[i];
        }
        
    }
    
    return result;
}

// Do not write any code below this line
#endif
