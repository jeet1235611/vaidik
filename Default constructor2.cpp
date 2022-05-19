#include<iostream>
using namespace std;

class construct {
    
public:
	int a, b;

	//Default Constructor.
	construct() {
		 a = 100;
	     b = 500;
	}
};

int main() {
	construct c;
	cout << c.a << " " << c.b << endl;
	return 0;
}

Output
a = 100
b = 500
