#include <iostream>
using namespace std;

int main()
{  
	int a[7]={2,4,6,8};
	int b[3]={1,3,5};
    
	int i = 3; 
	int j = 2; 
	int k = 6; 
	while(i>=0 &&j>=0){
		if(a[i]>b[j]){
			a[k] = a[i];
			i--;
			k--;
		}else{
			a[k] = b[j];
			j--;
			k--;
		}
	}
	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}
	while(i>=0){
		a[k]=a[i];
		k--;
		i--;
	}
	for(int i=0;i<=6;i++){
		cout<<" "<<a[i];
	}
	return 0;
}