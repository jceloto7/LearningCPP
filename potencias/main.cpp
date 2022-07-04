#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int v=7;
	int r = 0;
	int f= 7;
	std::stringstream ss;
	string s;
	for (int i=1;i<5;i++){
		r=v*f;
		v=r;
	}
	
	if (r>300){
	ss<<r;
	s=ss.str();
	cout << s;
	}
	
	system ("pause");
	
	return 0;
}
