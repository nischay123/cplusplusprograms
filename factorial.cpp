#include <iostream>
using namespace std;

int fac(int n){
	if(n==1||n==0){
		return 1;
	}
	int ans=1;
	for(int i=2;i<=n;i++){
           ans*=i;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<fac(n);
	return 0;
}