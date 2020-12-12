#include <iostream>
using namespace std;


int  count(char* str){
	if(str[0] == '\0'){
      return 0;
	}
   return 1+count(str+1);
}

void removex(char* str ){
	char ch = str[0];
	char result[100] ;   
	if(ch == '\0'){
      return ;
	}
	if(ch!='x'){
		removex(str+1);
	}else{
		int i;
        for(i=0;str[i]!='\0';i++){
             str[i]=str[i+1];
        }
        str[i]=str[i+1];
        removex(str);
	}

}


int main(){
	char str[100];
	
		cin>>str;
	    
		cout<<"length : "<<count(str);
		removex(str);
	
 	return 0;


}