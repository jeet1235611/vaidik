#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	//Parameterized Constructor
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

int main() {
	Point p(8, 10);
//	cout << p.x << endl << p.y << endl;
    cout << p.getX() << endl; 
    cout << p.getY() << endl;
	return 0;
}

Output:
8
10
  
