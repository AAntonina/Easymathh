#include <iostream>

long int powerr(int p, int w){
    if (w==0) return 1;
    else return p*powerr(p, w-1);
}

long int faactorial(int n){
    if (n<2) return n;
    return n*faactorial(n-1);
}

float weheelarea (float r){
    return 3.14*r*r;
}

float wheelcircuit (float r){
    return 6.28*r;
}

float ballarea (float r){
    return 4*3.14*r*r;
}
