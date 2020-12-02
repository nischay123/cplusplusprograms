#include <iostream>
using namespace std;


void print(int a[] ,int n){
	for(int i=0 ;i<n ;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int a[] = {-1,4,6,89,2,5,3,44,23,8,9,7,6,1,285} ;
	/* code */
	int n= sizeof(a)/sizeof(int);
    for(int i=1 ;i<n;i++ ){
    	for(int j=0 ;j<n-i ;j++){
    		if(a[j]>a[j+1]){
 				swap(a[j] ,a[j+1]);
    		}
    	}
    }
    print(a,n);
	return 0;
}