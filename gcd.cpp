#include <iostream>
using namespace std;

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

int simple_gcd(int a1, int a2){
    if (a1 < a2){
        swap(a1, a2);
    }

    if (a2 == 0){
        return a1;
    }
    
    return simple_gcd(a2, a1-a2);
}

int euler_gcd(int a1, int a2){
    if (a1 < a2){
        swap(a1, a2);
    }

    if (a2 == 0){
        return a1;
    }

    return euler_gcd(a2, a1%a2);
}

int main(){
    int a1, a2;
    cout << "Enter first number: ";
    cin >> a1;
    cout << "Enter second number: ";
    cin >> a2;
    cout << "The GCD of " << a1 << " and " << a2 << " is " << euler_gcd(a1, a2) << endl;
}