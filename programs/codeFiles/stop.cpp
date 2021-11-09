#include<iostream>
using namespace std;

int main(int argc, char** argv){	
	string s = "shutdown -a";
	const char *command = s.c_str();
	system(command);

	return 0;
}
