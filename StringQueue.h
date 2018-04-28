
#ifndef StringQueue_h
#define StringQueue_h

#include <string>

struct Link {
    std::string data;
    Link *link;
};

struct Queue{
    
    Link *front = NULL;
    Link *back = NULL;
    
    //Function to check if queue is empty or not
    int isEmpty(){
        if(front == NULL)
            return 1;
        else
            return 0;
    }
    
    //function to enter elements in queue
    void push(std::string value){
        Link *ptr = new Link();
        ptr->data= value;
        ptr->link = NULL;
        
        //If inserting the first element/node
        if(front == NULL){
            front = ptr;
            back = ptr;
        }
        else{
            back->link = ptr;
            back = ptr;
        }
    }
    
    //function to delete/remove element from queue
    std::string pop(){
        Link *temp;
        
        std::string state = "";
        
        if(front == NULL)
        {
            state = "Empty...";
        }
        else
        {
            state = front->data;
            
            //Fetching element
            temp = front;
            
            //Dereferencing
            front = front->link;
            
            //Deleting node
            delete(temp);
        }
        return state;
    }
    
    //function to show the element at front
    std::string peek(){
        
        std::string state;
        
        if(isEmpty() == 1){
            state = "Empty...";
        }
        else{
            state = front->data;
        }
        
        return state;
    }
    
    std::string rear(){
        
        std::string state;
        
        if(isEmpty() == 1){
            state = "Empty...";
        }
        else{
            state = back->data;
        }
        
        return state;
    }
    
};

#endif


