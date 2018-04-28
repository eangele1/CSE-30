
#ifndef Queue_h
#define Queue_h

#include <iostream>

struct Link {
    long data;
    Link* next;
    
    Link(){
        data = 0;
        next = NULL;
    }
    
    Link (long d){
        data = d;
        next = NULL;
    }
};

struct Queue {
    Link* front;
    Link* back;
    
    Queue (){
        front = NULL;
        back = NULL;
    }
    
    long peek () {
        return front->data;
    }
    
    void push(long value){
        if (isEmpty()){
            front = new Link(value);
            back = front;
        }
        else {
            back->next = new Link(value);
            back = back->next;
        }
    }
    
    bool find (long value){
        
        Link* t = front;
        
        int f = 0;
        while (t != NULL){
            if (t->data == value){
                f = 1;
                break;
                
            }
            t = t->next;
        }
        
        if (f != 0)
            return t;
        else
            return NULL;
    }
    
    bool isEmpty(){
        return (front == NULL);
    }
    
    long pop(){
        long val = front->data;
        
        Link* oldFront = front;
        front = front->next;
        
        delete oldFront;
        
        return val;
    }
    
    void print() {
        
        Link* i = front;
        
        if(!isEmpty()){
            while(i != NULL){
                std::cout << i->data << " ";
                i = i->next;
            }
        }
        else
            std::cout<< "" << std::endl;

    }
    
    ~Queue(){
       
        Link* temp;
        while(front != NULL){
            temp = front;
            front = front->next;
            delete temp;
        }
        back = NULL;

    }
};

#endif
