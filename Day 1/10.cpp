#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int f = 1;
	if(n<0)
		cout<<"Factorial not allowed for negative number";
	else{
		for(int i=1;i<=n;i++)
			f=f*i;
		cout<<f;
	}
}
