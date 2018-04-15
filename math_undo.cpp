#include <iostream>
#include "OpStack.h"

using namespace std;

int main(int argc, char const *argv[]){
    Stack myStack;
    
    long firstNum = 0;
    char undo;
    long sum = 0;
    
    while(true){
        cin >> undo;
        if (undo == 'z'){
            
            Link* temp = myStack.pop();
            
            if (temp == 0){
                cout << "Nothing to undo..." << endl;
                cout << "Total: " << 0 << endl;
            }
            else{
                if(temp->op == 's'){
                    sum += temp->data;
                    cout << "Total: " << sum << endl;
                }
                if(temp->op == 'a'){
                    sum -= temp->data;
                    cout << "Total: " << sum << endl;
                }
                
            }
        }
        else if(undo == 'q'){
            return 0;
        }
        else if (undo == 'a' || undo == 's'){
            cin >> firstNum;
            while (true){
                
                int opCase = 0;
                
                if (undo == 'a'){
                    opCase = 1;
                }
                else if (undo == 's'){
                    opCase = 2;
                }
                
                switch (opCase){
                    case 1:
                        sum += firstNum;
                        myStack.push(firstNum, undo);
                        break;
                    case 2:
                        sum -= firstNum;
                        myStack.push(firstNum, undo);
                        break;
                }
                cout << "Total: " << sum << endl;
                break;
            }
        }
    }

	return 0;
}
