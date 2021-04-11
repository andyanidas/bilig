#include<iostream>

using namespace std;

int main(){
	int month;
	cin>>month;
	
	//1,3,5,7,8,10,12 ->31
	//2 ->28
	//4,6,9,11 ->30
	if(month == 1 || month==3 || month==5 || month==7 ||month==8 ||month==10 ||month==12){
		cout<<"31 days";
	}else if(month==2){
		cout<<"28 days";
	}else{
		cout<<"30 days";
	}
	
	
	return 0;
}
