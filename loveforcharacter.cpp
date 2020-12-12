/* 

 Love for Characters
Send Feedback
Ayush loves the characters ‘a’, ‘s’, and ‘p’.
He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’ occurs in the string respectively. 
Help him find it out.

Input:
First line contains an integer denoting length of the string.
Next line contains the string.
Constraints:
1<=n<=10^5
‘a’<= each character of string <= ‘z’
Output:
Three space separated integers denoting the occurrence of letters ‘a’, ‘s’ and ‘p’ respectively.
Sample Input:
6
aabsas
Sample output:
3 2 0
*/

#include <iostream>
#include <iterator> 
#include <map>
using namespace std;
int main()
{
	 int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int a=0, s=0,p=0;
    map<char,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    map<char, int>::iterator itr; 
    cout << "The map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = freq.begin(); itr != freq.end(); ++itr) { 
    	
    	if(itr->first== 'a'){
    		a= itr->second;
    	} else if(itr->first== 's'){
    		s= itr->second;
    	}else if(itr->first== 'p'){
    		p= itr->second;
    	}
    } 
    cout <<"a  "<<a<<endl; 
    cout <<"s  "<<s<<endl; 
    cout <<"p  "<<p<<endl; 
     
	return 0;
}