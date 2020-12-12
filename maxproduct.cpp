#include <iostream>

using namespace std;

int maxProduct(int* a ,int n){
	int max= 1 ,min = 1 ;
	for(int i=0;i<n;i++){
		if(min>0 && a[i]>0){
			max*=a[i];
		}else if(min>0 && a[i]<0){
			min *=a[i];
		}else if(min<0){
			min *=a[i];
			if(min>0){
				max*=min;
				min =1;
			}
		}
		cout<<"i = "<<i<<" max = "<<max<<" min ="<<min<<endl;
	}
	return max;
}

int main()
{
	int a[20],b[20]={1};


	int n , j=0;
	cin>>n;
 
    b[0]=1;
	for(int i=0;i<n;i++){
        cin>>a[i];
		if((b[j]> 0) && (a[i] >0)){
			b[j]*=a[i];
		}else if((b[j]> 0) && (a[i] <0)){
			  ++j;
			b[j]=a[i];
		}else if((b[j]< 0) && (a[i] >0)){
              ++j;
			b[j]=a[i];
		}else if((b[j]< 0) && (a[i] <0)){
			b[j]*=a[i];
		}

	}
	for(int i=0;i<=j;i++){
		cout<<b[i]<<" ";
	}

	// cout<<maxProduct(a,n);
}