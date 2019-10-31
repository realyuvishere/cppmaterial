#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int x,y,i;
void primepro() {
    cout << "Type a number: ";
    cin >> x;
    for(i=1; i<x; i++) {
        if(x % i == 0) {
            cout << x << " is a composite number." << endl;
            break;
        } else {
            cout << x << " is a prime number." << endl;
            break;
        }
    }
}
void primeinf() {
//    x = 0;
//    for(i=1; i>0; i++) {
//        while (x>=2) {
//            x++;
//            if(x % i == 0) {
//                return 0;
//            } else {
//                cout << x << " is a prime number." << endl;
//                break;
//            }
//        }
//    }
}

int main() {
    primepro();
//    primeinf();
    return 0;
}