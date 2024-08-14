#include <iostream>
#include <cmath>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    cout<<max(max(a,b),max(c,d));
    return 0;
}

int main() {
    int a, b, c, d;
    
    cin>>a>>b>>c>>d;
    max_of_four(a, b, c, d);
    
    
    return 0;
}
