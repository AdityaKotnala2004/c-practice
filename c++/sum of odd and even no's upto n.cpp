#include<bits/stdc++.h>
using namespace std;

int main(){
		int i,n,sum1=0,sum2=0;
	cout<<"enter the number: ";
	cin>>n;

	for(i=0;i<=n;i++){
		if (i%2==0){
			sum1=sum1+i;
		}
		else {
			sum2=sum2+i;
		}
	}
	cout<<"even sum is: "<<sum1<<endl;
	cout<<"odd sum is: "<<sum2;
	return 0;
}
