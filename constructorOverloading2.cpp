#include <iostream>
using namespace std;
class course {
    public:
    int area = 0;
    course() {
        //cout << "Area of 1st constructor is:  " << area << endl;
    }    
    
    course(int a, int b) {
         area = a*b;
       // cout << "Area: " << area << endl;
    }
    
    void disp() {
        
        cout << "The area is: " << area << endl;
    }
    
};

int main() {
    course c1;
    course c2(10,10);
    
    c1.disp();
    c2.disp();
}
