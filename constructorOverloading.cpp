#include <iostream>
using namespace std;

class construct {
    public:
	float area;
	//Constructor with no //paremeters.

	construct() {
	area = 0;
	cout <<"Ye default constructore h!!! " << area << endl;
	}

	//Constructor with two 
	//parameters
	construct(int a, int b) {
	area = a * b;
	cout << "Ye parameterized constructor h " << area << endl;
	}

	void disp() {
	cout << area << endl;
	}

};

int main() {
	//Constructor Overloading
	//With two different constructors
	//of class name
	construct o;
	construct o2(10,20);
	o2.disp();
	return 1;
}
