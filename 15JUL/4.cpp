#include<iostream>

using namespace std;

int main(){
	int i=1,n;
	cout<<"enter the limit: ";
	cin>>n;//20
	
	//printing all even numbers
	while(i<=n){
		if(i%2==0){
			cout<<i<<" ";
		}
		i++;
	}
	/*
	homework2:
	Write a program that prints all odd numbers from userInput
	to 0, For Example:
	input: 10
	output: 9 7 5 3 1
	
	*/
	
	
	return 0;
}
