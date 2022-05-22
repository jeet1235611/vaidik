#include <iostream>
using namespace std;

class Encapsulation {
	private:
	//data hidden from outsie world
	int x;
public:
	//function to set value of variable x
	void set(int a) {
		x = a;
	}
	int get() {
		return x;
	}
};

int main() {
	Encapsulation e;
	e.set(5);
	cout << e.get() << endl;
}
