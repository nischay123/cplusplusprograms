#include <iostream>
using namespace std;

void merge(int a[] ,int s,int mid ,int e){
	int n1 = mid-s +1;
	int n2 = e-mid;
     int n  =e-s+1;
	int temp[n];
	int i=s;
	int j=mid+1 ;
	int  k=0;
	while(i<=mid  && j<=e){
		if(a[i]<a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		else if(a[i]>=a[j]){
			temp[k] = a[j];
			j++;
			k++;
		}
	}

   while(i<=mid){
   	 temp[k] = a[i];
			i++;
			k++;
   }
    while(j<=e){
   	temp[k] = a[j];
			j++;
			k++;
   }
    k=0;
	for(int i=s ;i<=e;i++){
		a[i] = temp[k];
		k++;
	}

}

void mergeSort(int a[] ,int start,int end){
	if(start>=end){
		return ;
	}else{
    int mid = (start+end)/2;
	mergeSort(a, start , mid);
	mergeSort(a, mid+1, end);
	merge(a , start ,mid ,end);
	}
	

}

int main()
{
	int array[] = {7,4,6,9,2,53,7,8,3,1,34};
	int n = sizeof(array)/sizeof(int);

	mergeSort(array ,0,n-1);
	for(int i=0;i<n;i++){
		cout<<" "<<array[i];
	}
	/* code */
	return 0;
}