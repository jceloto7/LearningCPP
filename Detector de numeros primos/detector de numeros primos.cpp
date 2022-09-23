#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main() {
	int n_in;
	int cont=0;
	int i=0;
	int x;
	std::stringstream ss;
	string s;
	
	cout<<"Please type an entire number:";
	cin>> n_in;
	
	while(i<= n_in or cont<2){
		i=i++;
		x= n_in %i;
		if (x==0){
			cont =cont++;
		}
		if (cont <=2){
			std::stringstream sp;
			string p;
			sp<<"primo";
			p=sp.str();
			cout<<p;
		}
			else{
				std::stringstream np;
				string n;
				np<<"nao primo";
				n=np.str();
				cout<<n;
			}
		}	

return 0;
}
