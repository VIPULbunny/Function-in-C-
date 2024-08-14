#include<iostream>
#include<cstring>
using namespace std;

//void alphabet(char str[]){
//	for(int i=0;i<=strlen(str);i++){
//		cout<<str[i]<<" "<<int(str[i])<<endl;
//	}
//	
//}
int main(){
	char str[100];
	cout<<"Enter a name: ";
	cin>>str;
	
//	alphabet(str);
for(int i=0;i<strlen(str);i++){
		cout<<str[i]<<" "<<int(str[i])<<endl;
	}
	
}
