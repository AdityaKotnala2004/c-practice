#include<bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c;
	cout<<"first number: ";
	cin>>a;
	cout<<"second number: ";
	cin>>b;
	c=b;
	b=a;
	a=c;
	cout<<"after swap :-"<<endl<<"first number: "<<a<<endl<<"second number: "<<b;
	return 0;
}
