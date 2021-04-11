#include<iostream>

using namespace std;

int main(){
	int money;
	cin>>money;//376$
	//100, 50, 20, 10, 5, 2, 1
	//3*100 + 50*1 + 20*1 + 5*1 1*1
	
	if(money>=100){
		cout<<"100$ "<<money/100<<" pieces"<<endl;
		money = money - money/100*100;//money = 76$
	}
	if(money>=50){
		cout<<"50$ "<<money/50<<" pieces"<<endl;
		money = money - money/50*50; //money = 26$
	}
	if(money>=20){
		cout<<"20$ "<<money/20<<" pieces"<<endl;
		money = money - money/20*20; //money = 6$
	}
	
	if(money>=10){
		cout<<"10$ "<<money/10<<" pieces"<<endl;
		money = money - money/10*10; 
	}
	
	if(money>=5){
		cout<<"5$ "<<money/5<<" pieces"<<endl;
		money = money - money/5*5; //money = 1$
	}
	cout<<"1$ "<<money<<" pieces"<<endl;
	
	return 0;
}
