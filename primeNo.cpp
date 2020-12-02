#include <iostream>
using namespace std;

int main()
{
	int n;
	bool check =false ;
	cin>>n;
    if(n%2==0){
    	cout<<"NOt prime no";
    	return 0;
    }
    for(int i=3;i<=(n/2);i+=2){
     if(n%i==0){
     	check = true ;
     	break;
     }
	}
	if(check){
		cout<<"NOt prime no";

	}else{
		cout<<" prime no " ; 
	}

	/* code */
	return 0;
}