#include<iostream>
using namespace std;

int main(int argv, char** argc){
//	cout<<argc[1]<<endl;
try{
	
	char input = 'x';
	
	try{
	input = argc[1][0];	
	}catch(...){
	input = 'x';
	}
	
//	cout<<(input == 'w');
	if(input == 'w' || input == 'W'){
//		cout<<"color F0";
		system("color F0");	
		cout<<"Setting theme to white\n";
	}else if(input == 'g' || input == 'G'){
//		cout<<"color 0a";
		system("color 0a");
		cout<<"Setting theme to green\n";
	}else if(input == 'b' || input == 'B'){
//		cout<<"color 0F";.
		system("color 0F");
		cout<<"Setting theme to black\n";
	}else{
		cout<<"Incorrect input, valid values are : \n\tblack : b\n\twhite : w\n\tgreen : g\n";
	}
}catch(...){}
	
	system("pause");
	system("cls");
	
	return 0;
}
