#include<iostream>

using namespace std;

int main(){
	//char -> single character 
	string GR = "Your grade is ";
	char grade,minus;
	grade = 'A';
	minus = '-';
	cout<<GR<<minus<<grade<<endl;
	
	char currency = '$';
	cout<<"Enter your grade: ";
	cin>>grade;
	cout<<"your grade is "<<grade;
	
	return 0;
}
