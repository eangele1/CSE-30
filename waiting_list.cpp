#include <iostream>
#include <string>
#include "StringQueue.h"

using namespace std;

int main(int argc, const char * argv[]) {

	Queue* queue = new Queue();

	char operation;
	string name;

	while(true){

		cin >> operation;

		if (operation == 'a'){
			cin >> name;
			queue->push(name);
			cout << name << " arrived" << endl;
		}

		else if(operation == 's'){

			if (queue->isEmpty()){
				cout << "No customers waiting" << endl;
			}
			else{
				cout << "Now serving: " << queue->pop() << endl;
			}

		}

		else if (operation == 'n'){

			if (queue->isEmpty()){
				cout << "The waiting list is empty" << endl;
			}
			else{
				cout << "Next in line: " << queue->peek() << endl;
			}
		}

		else if (operation == 'q'){

			if (queue->isEmpty()){
				cout << "Closing up now." << endl;
				break;
			}
			else{
				cout << "Come back tomorrow: " << endl;
				while (!queue->isEmpty()){
					cout << queue->pop() << endl;
				}
				cout << "Closing up now." << endl;
				break;
			}
		}
	}
	return 0;
}
