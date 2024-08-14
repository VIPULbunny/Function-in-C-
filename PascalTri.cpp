#include<iostream>
using namespace std;
int fact(int a){
	int f=1;
	for(int x=1;x<=a;x++){
		f *=x;
	}
	return f;
}

int ncr(int n, int r){
	
		int c=(fact(n)/(fact(r)*fact(n-r)));
		return c;
}

int main(){
	int n,r,c;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int k=0 ; k<=n-i-1  ;k++){
			cout<<" ";
		}
		for(int j=0; j<=i;j++){
			cout<<ncr(i,j)<<" ";
		}cout<<endl;
	}

}
