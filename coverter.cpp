#include <iostream>
using namespace std;

int main(){
    cout << "Enter your temperature in fahrenheit:";
    double ftemp;
    cin >> ftemp;
    double ctemp = (ftemp - 32)/1.800;
    cout << "Your temperature in celcious is: " << ctemp;
    return 0;
}