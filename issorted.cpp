#include <iostream>
using namespace std;

bool issorted2(int *a ,int n){
    if(n==0 || n==1){
    	return true;
    }//pahle call kro then kaam kro 
    bool temp =  issorted2(a+1, n-1);
    
    if(a[0]>a[1]){
		return false;
	} 
	
    if(temp==false){
    	return false;
    }else{
    	return true ;
    }
	

}


bool issorted(int *a ,int n){
    if(n==0 || n==1){
    	return true;
    }//pahle kaam kro then call kro 

	if(a[0]>a[1]){
		return false;
	} 
	return issorted(a+1, n-1);

}

int main()
{
	int a[10]; 
	int n;
	cin>>n;
	for(int i=0 ;i<n;i++){
		cin>>a[i];
	}
	issorted2(a,n)? cout<<"sorted": cout<<"not ";

	return 0;
}