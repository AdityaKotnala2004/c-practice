
#include<iostream>
using namespace std;
int main(){
	int i,n=5;
	float sum=0;
	float percentage;
	float arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	percentage=(sum*100)/500;
	cout<<"sum of marks is:"<<sum<<endl<<"percentage:"<<percentage<<endl;
	return 0;
}
