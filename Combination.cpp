#include<iostream>
using namespace std;

int fact(int a){
	int f=1;
	for(int x=1;x<=a;x++){
		f *=x;
	}
	return f;
}

int main(){
	int n,r,c;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter r: ";
	cin>>r;
	
	if(r>n){
		cout<<"NOt possible r>n ..!!!";
	}
	else{
		int c=(fact(n)/(fact(r)*fact(n-r)));
		cout<<c;
	}
}
