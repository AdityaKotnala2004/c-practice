#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cout<<"enter the year you want to check: " ;
	cin>>a;
	if (a%4==0 && a%400==0 || a%100!=0){
		cout<<"leap year";
	}
	else {
		cout<<"not a leap year";
	}
	return 0;
}
