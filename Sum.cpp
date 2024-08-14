#include<iostream>
using namespace std;

void Sum(int a,int b){
	cout<<a+b;
}

int Summ(int a,int b){
	cout<<a+b;
	return 0;
}

int main(){
	Sum(10,10);
	cout<<endl;
	Summ(10,5);
}
