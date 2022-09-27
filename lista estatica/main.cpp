#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

int calcular (int b, int e){
	int v=b;
	int r=1;
	for (int c=1; c<e;c++ ){
		r=v*b;
		v=r;
	}
	return r;
}

void gerenciar(){
	int lista [5];
	int print;
	std::stringstream ss;
	string s;
	for (int i=0;i<5;i++){
		lista[i]=calcular(2,i);
	}
	print =lista[0];
	ss<<print<<"\n";
	s=ss.str();
	cout<<s;
}

int main(){
	gerenciar();
	system ("pause");
	return 0;
}








