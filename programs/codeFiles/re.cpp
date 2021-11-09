#include<iostream>
using namespace std;

int main(int argc, char** argv){
	int time;
//		cout<<argc<<"\n";
//	cout<<argv[1];
	try{
	time = stoi(argv[1]);
	}catch(...){
		time = 0;	
	}
	
	string s = "shutdown -r -t " + to_string(time);
	const char *command = s.c_str();
	system(command);

	return 0;
}
