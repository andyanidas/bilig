#include<iostream>

using namespace std;

int main(){
	string firstName,lastName;
	int age;
	cin>>firstName>>lastName>>age;
	
	cout<<firstName<<"----------"<<lastName<<"-----"<<age;
	if(age<18){
		cout<<"you are not premitted to drink alchole";
	}
	
	return 0;
}
