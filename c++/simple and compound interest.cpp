
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	float p,a,r,t,si,ci,i;
	cout<<"principle: ";
	cin>>p;
	cout<<"rate: ";
	cin>>r;
	cout<<"time: ";
	cin>>t;
	cout<<"interest: ";
	cin>>i;
    si=(p*r*t)/100;
    a= p *(pow((1 + r/100), t));
    ci=a-p;
	cout<<"simple interest:"<<si<<endl<<"compound interest:"<<ci;
	return 0;	
}
