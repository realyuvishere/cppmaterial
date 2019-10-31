#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Global variables

int x,i,y,z;
// Secondary functions

void function1(){
    cout << "----- start of function1() ------" << endl << "The second function inside the main()." << endl;
    switch(x){
        case 1:
            cout << "We have a 1er." << endl;
            break;
        case 2:
            cout << "We have a prime number." << endl;
            break;
        case 3:
            cout << "We have a prime number." << endl;
            break;
        case 4:
            cout << "We have a composite number." << endl;
            break;
    }
    cout << "-------- end of function1() --------" << endl;
}
// Undefined functions
void func2();

// Primary (main) function

int main(){
    cout << "Yo, type a number: " << endl;
    cin >> x;
    cout << "The times you wanna see that number: " << endl;
    cin >> y;
    cout << "The answer is: " << endl;
    for(i=1;i<=y;i++){
        z = x*i;
        cout << z << endl;
    }
    
    cout << "First number raised to second is: " << pow(x,y) << endl << "tan() of first number: " << tan(x) << endl;
    cout << "Reference of x: "<< &x << endl << "Reference of y: " << &y << endl << "Reference of i: " << &i << endl << "Reference of z: " << &z << endl;
    if (x<=4){
        function1();
    } else {
        func2();
    }
    cout << "--------- end of main() ----------" << endl;
}
// Predeclared definitions
void func2() {
    cout << "--------- start of func2() ----------" << endl << "New function declared first, defined later" << endl << "------ end of func2() -------" << endl;
}