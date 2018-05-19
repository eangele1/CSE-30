#ifndef HashTable_h
#define HashTable_h

#include <vector>
#include "Queue.h"

struct HashTable{
	long size;

	std::vector<Queue*> hashtable;

	HashTable(long size){
		for (long i = 0; i < size; i++) {
			hashtable.push_back(new Queue());
		}
	}

	~HashTable(){
		for (long i = 0; i < size; i++) {
			delete hashtable[i];
		}
	}

	long hash(long &k){
		return k % size;
	}

	void print(){
		for (long i = 0; i < size; i++) {
			Queue* current = hashtable[i];

			std::cout << i << ": ";

			current->print();
		}
	}

	void insert(long value){
		long index = hash(value);

		hashtable[index]->push(value);
	}

	bool find(long value){
		long index = hash(value);

		if(hashtable[index]->find(value) == true){
			return true;
		}
		else{
			return false;
		}
	}

};

#endif /* HashTable_h */
