#include <iostream>
using namespace std;


int main() {
	int n_in;
	int cont=0;
	int i=0;
	int x;
	
	cout<<"Please type an entire number:";
	cin>> n_in;
	
	while(i<= n_in or cont<2 and n_in !=1){
		i=i+1;
		x= n_in %i;
		if (x==0){
			cont =cont+1;
		}
		
	}	
		if (cont <=2 and n_in !=0 and n_in !=1){
		printf("prime");
		}
		
		if (cont >2 or n_in==0 or n_in==1 ){
			printf("not prime");
		}	

return 0;
}


