#include <bits/stdc++.h>
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
int maxprefix(int* a, int n ){
	int max =0 ,curr= 0;

	for(int i=0;i<n;i++){
		curr+= a[i];
		if(max<curr){
			max= curr; 
		}
	}
	return max;

}
int maxsuffix(int* a, int n ){
	int max =0 ,curr= 0;

	for(int i=n-1;i>=0;i--){
		curr+= a[i];
		if(max<curr){
			max= curr; 
		}
	}
	return max;

}

int kcon(int *a , int n,int k, int sum){
     if(k==1){
     	return maxSubArraySum(a,n);
     }
	if(sum>0 ||k>1){
          return ((k-2)*sum ) + maxprefix(a,n) +maxsuffix(a,n) ;
	}else {
		int temp = maxprefix(a,n) +maxsuffix(a,n) ;
		return max(temp , maxSubArraySum(a,n)) ;
	}
}

int main(){
	int t , arr[100000]={1,-2,1,-3,6};;
	cin>>t;
	
	// cout<<maxprefix(arr,5)<<  "  "<<maxsuffix(arr,5);
	while(t){

		int n , k, sum=0;
		cin>>n>>k ;
		for(int i=0;i<n;i++){
			cin>>arr[i];
  			sum+=arr[i];
		}
		cout<< kcon(arr, n , k,sum)<<endl;
		--t;
	}
	return 0;

}