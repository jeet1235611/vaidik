#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    
    for(int row = 1; row <= n; row++) {
            //Spaces
            for(int spaces = n; spaces > row; spaces--) {
                    cout << " " ;
                }
                //Print numbes in increasing order
                for(int num = 1; num <= row; num++) {
                        cout << num;
                    }
                    //Print numbers in the decreasing order
                    int num2;
                for(num2 = row-1; num2 > 0; num2--) {
                        cout << num2;
                    }
                    cout << endl;
    }
    return 0;    
}
