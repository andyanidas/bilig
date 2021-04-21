#include<iostream>

using namespace std;

int main(){
	char ch;
	cin>>ch;
	
	if(ch>='A' && ch<='Z'){
		ch = ch + 32;
		cout<<ch;
	}else if(ch>='a' && ch<='z'){
		ch = ch - 32;
		cout<<ch;
	}else{
		cout<<"It is not a letter";
	}
	
	
	
	
	
	return 0;
}
