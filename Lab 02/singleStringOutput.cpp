#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream f("code.cpp");

	string txt;

	while (f.good()){
		getline(f, txt);
		cout << txt;
	}

	return 0;
}