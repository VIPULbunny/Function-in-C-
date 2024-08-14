#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int a, b, temp;
    cout<<"enter 1st number: ";
    cin>>a;
    cout<<"enter 2nd number: ";
    cin>>b;
    
    temp = a;
    a=b;
    b=temp;
    cout<<a<<b;
    
    return 0;
}
