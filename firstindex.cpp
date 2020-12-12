/*First Index of Number
Send Feedback
Given an array of length N and an integer x, 
you need to find and return the first index of integer x present in the array. 
Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
1
*/
int lstindex(int* a,int key ,int n){
	if(n==0){
		return -1;
	}
	int phlecall = lstindex(a+1 , key , n-1);

	 if(phlecall!=-1){
	 	return phlecall+1;
	 }else{
	 	if(a[0]==key) return 0 ;
	 	else return -1;
	 }

}

int firstind(int* a,int key ,int n){
	if(n==0){
		return -1;
	}
	if(a[0]==key){
		return 0;
	}
	int aagekaindex =firstind(a+1,8,n-1);

	return 1+aagekaindex ; 
}

#include <iostream>
using namespace std;
int main()
{
	int a[10]; 
	int n;
	cin>>n;
	for(int i=0 ;i<n;i++){
		cin>>a[i];
	}
	cout<<lstindex(a,8,n );
	return 0;
}