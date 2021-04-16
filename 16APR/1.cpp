#include<iostream>

using namespace std;

int main(){
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z'){
		cout<<"it is a upper case";
	}else if(ch>='a' && ch<='z'){
		cout<<"It is a lower case letter";
	}else{
		cout<<"It is not a letter";
	}
	
	
	cout<<": "<<ch;
	
	return 0;
}
