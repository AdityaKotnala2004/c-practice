#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n=5;
	float sum=0;
	float p;
	float arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	p=(sum*100)/500;
	if (p>=90){
		cout<<"A";
	}
	else if (p>=80 && p<90){
		cout<<"B";
	}
	else if (p>=60 && p<80){
		cout<<"C";
	}
	else {
		cout<<"D";
	}
	return 0;
}
