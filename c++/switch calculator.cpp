#include<iostream>
using namespace std;

int main(){
	float a,b,sum,sub,mul,div;
	cout<<"enter first number: ";
	cin>>a;
	cout<<"enter second nmber: ";
	cin>>b;
	char calculations;
	cout<<"type 1,2,3,4 for addition,subtraction,multiplication,division respectively"<<endl;
	cin>>calculations;
	switch(calculations){
		case '1' : 
		    sum=a+b;
		    cout<<"sum is "<<sum;
		    break ;
		
		case '2' :
			sub=a-b;
			cout<<"difference is "<<sub;
			break ;
		
		case '3' :
		    mul=a*b;
			cout<<"product is "<<mul;
			break ;
			
		case '4' :
		    div=a/b;
			cout<<"quotient is "<<div;
			break ;
		default :
		       cout<<"invalid command ";
	}
		return 0;	
	}
	

