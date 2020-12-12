#include <iostream>
using namespace std;

void removeDuplicate(char str[]){
	if(str[0]=='\0'){
		return ;
	}
	if(str[0]== str[1]){
		int i;
		// cout<<"run";
		for(i=0 ;str[i]!='\0'; i++){
              str[i]=str[i+1];
		}
		   str[i]=str[i+1];
		   removeDuplicate(str);
	}
	else{
		removeDuplicate(str+1);
		// cout<<"runelse";
	}
}

int main(){
	char str[1000];

	cin>>str;
	// cout<<str;
	removeDuplicate(str);
	cout<<str;
	return 0;
}