#include <iostream>
using namespace std;

int main()
{ 
	int number ;
	cin >> number;
	int temp= number ;
	int rev =0;

	while(temp!=0){
 		rev =(rev*10)+ (temp %10) ;
 		temp /=10;

	}
	cout<<rev <<endl;
	/* code */
	return 0;
}