#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sume=0,sumo=0;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            sume=sume+i;
        }
        else {
            sumo=sumo+i;
        }
    }
 cout<<"sum of even numbers upto n is: "<<sume<<endl;
 cout<<"sum of odd numbers upto n is: "<<sumo;
     
    return 0;
}
