#include<iostream>
using namespace std;
int main(){

	int a,b;
	cin>>a>>b;
	char s;
	cout<<"Operation"<<endl;
	cin>>s;
	switch(s){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
			cout<<"Invalid Operator";				 
	}
		
}
