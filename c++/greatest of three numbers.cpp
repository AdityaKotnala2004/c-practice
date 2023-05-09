#include<bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c;
	
	cout<<"enter first number: ";
	cin>>a;
	cout<<"enter second number: ";
	cin>>b;
	cout<<"enter third number: ";
	cin>>c;
	if (a>b && a>c){
		cout<<"first number is the greatest";
	}
	else if (b>a && b>c){
		cout<<"second number is the greatest";
	}
	else {
		cout<<"third number is the greatest";
	}
	return 0;
}
