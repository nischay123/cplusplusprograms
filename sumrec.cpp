#include <iostream>
using namespace std;
int sum(int* a,int n){
	if(n==1){
          return a[0];
	}
	int aage  =  sum(a+1 ,n-1);
	return aage+a[0]; 

}

int main()
{
	int a[10]; 
	int n;
	cin>>n;
	for(int i=0 ;i<n;i++){
		cin>>a[i];
	}
	cout<<sum(a,n);
	return 0;
}