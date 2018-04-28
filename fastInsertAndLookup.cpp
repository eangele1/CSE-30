#include <iostream>
#include "BST.h"
#include "RandomSupport.h"
#include "BSTUtil.h"

using namespace std;

int main(){
	
	long treeSize = 0;
	
	Node* root = NULL;
	
	cin >> treeSize;
    
    randomizer device = new_randomizer();
	
    uniform_distribution range = new_distribution(1, 10);
    
	for (int i = 0; i < treeSize; i++){
		insert(root, sample(range, device));
	}
	
    root = insertSpecialNumber(root);
	
    findSpecialNumber(root);
	
	return 0;
}
