#include <iostream>
using namespace std;

int main(){
	int n,precision=3;
	int current_precision = 0;
	
	cin>>n;
	float ans = 0;
	float inc = 1;
	while(ans*ans<=n){
		ans=ans+inc;
	}
	cout<<ans<<endl;

	return 0;
}