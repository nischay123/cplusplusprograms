#include <iostream>
#include <iterator> 
#include <string>
#include <set>
using namespace std;
int main()
{
	string str;
	set <char> s;
	set <char> :: iterator itr ;
    cin>>str;
    for(int i=0;str[i]!='\0' ;i++){
    	s.insert(str[i]);
    }
    for(itr = s.begin(); itr!=s.end();++itr){
          cout<<*itr;
    }
}

