#include <iostream>
using namespace std;

int maxSubArraySum(int* a ,int n){
	int curr  = 0;
	int maximum = 0 ;
	int si = -1 , fi= -1 ; 
	for(int i=0 ;i<n ;i++){
		curr += a[i];
		if(curr > maximum){
			maximum = curr;
            si = fi;
			fi = i;
			
		}
		if(curr<0){
 			curr = 0;
 			si = i;
		}
	} 
	// cout<< " starting index : "<<fi<< " ending index "<<si<< endl;

	return maximum;
}

int main()
{
	int a[] = {4, -2, 6, -10, 8, 1}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    
	return 0;
}