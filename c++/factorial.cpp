#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,product=1;
	cout<<"enter the number: ";
	cin>>n;

	for(i=1;i<=n;i++){
		product=product*i;
	}
	cout<<"factorial is: "<<product;
	return 0;
}
