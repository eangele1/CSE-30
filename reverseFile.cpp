#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	string txt;

	vector<string> word_reverse;

	ifstream f("code.cpp");

	while (f.good()){
		getline(f, txt);
		word_reverse.push_back(txt);
	}

	int i = 0;

	reverse(word_reverse.begin(), word_reverse.end());

	while (i != word_reverse.size()){
		cout << i << ":" << word_reverse.at(i) << endl;

		i++;
	}

	return 0;
}