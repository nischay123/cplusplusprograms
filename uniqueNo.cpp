#include <iostream>
using namespace std;

// input : n=5 ;
//          1 2 3 2 3 
//          output = 1
int main()
{
	int n, num,ans =0;
	cin>>n;
	
	for(int i=0 ;i<n ;i++){
		cin>>num ;
		ans = ans ^ num;
	
	}
	cout<<"ans "<<ans;
	/* code */
	return 0;
}

