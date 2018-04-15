#include <iostream>
#include "easymath.h"
using namespace std;
int main(){
    
    int a, b;
    cout << "Exponentiation" << endl;
    cout << "write base of power" << endl;
    cin >>a;
    
    cout << "write exponent of power" << endl;
    cin >>b;
    
    cout << "result of power:" << endl;
    cout << powerr(a,b) << endl;
    
    int c;
    cout << "Factorial"<< endl;
    cout << "write non-negative integer"<< endl;
    cin >> c;
    
    cout << "factorial equal:" << endl;
    cout << faactorial(c)<< endl;
    
    int d;
    cout << "Wheel area"<< endl;
    cout << "write radius of wheel" << endl;
    cin >> d;
    
    cout << "wheel area equal:" << endl;
    cout.precision(2);
    cout << fixed << weheelarea (d) << endl;
    
    int e;
    cout << "Wheel circuit"<< endl;
    cout << "write radius of wheel" << endl;
    cin >> e;
    
    cout << "wheel circuit equal:" << endl;
    cout.precision(2);
    cout << fixed << wheelcircuit (e) << endl;
    
    
    int f;
    cout << "Ball area"<< endl;
    cout << "write radius of ball" << endl;
    cin >> f;
    
    cout << "Ball area equal:" << endl;
    cout.precision(2);
    cout << fixed << ballarea (f) << endl;
}
