#include <iostream>
# include <string>
# include <sstream>
using namespace std;


int main() {
	int n_fat = 1;
	int n_in;
	std::stringstream ss;
	string s;
	
	cout<<"Please type a number: ";
	cin>> n_in;
	
	for (int i=1;i<=n_in;i++){
		n_fat = n_fat * i;
	}
	
	ss<<n_fat;
	s=ss.str();
	cout<<s;
	
	system ("pause");
	return 0;
}
