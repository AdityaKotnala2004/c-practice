#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,chk=0;
    cout<<"n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            chk=1;
        }
    }
    if(chk==0)
	{
        cout<<"the number is prime";
    }
    else
	{
	cout<<"the number is not prime";
	}
    return 0;
}
