#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
    
    long data;
    char op;
    Link* next;

};

Link* top;

// Now define the Stack struct. It should be a stack of Links...

struct Stack{
    
    Stack()    // Creates stack, and sets top to NULL
    {
        top = 0;
    }
    
    void push(long data, char op)    // Push symbol onto the stack and create new node for top of stack
    {
        Link *link = new Link;
        link-> data = data;
        link-> op = op;
        link-> next = top;
        top = link;
    }
    
    Link* pop() // Pop function
    {
        if(top == 0){
            return NULL;
        }
        
        Link *temp = top;
        top = temp->next;
        
        return temp;
    }
    
    int isEmpty() // Empty stack function
    {
        return top == NULL;
    }
    
};

#endif
