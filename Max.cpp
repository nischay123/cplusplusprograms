#include <iostream>
using namespace std;

int main()
{
	int a[] = {6,-1,4,6,89,2,5,3,44,23,9,5,5,6,8,9,7,6,1,285} ;
	/* code */
	int n= sizeof(a)/sizeof(int);
   int max = -10000;
	for(int i=0 ;i<n;i++){
            if(max<a[i]){
            	max = a[i];
            }

     
	}
	cout<<max;
	return 0;
}