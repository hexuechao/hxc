#include <iostream>
using namespace std;

class Switch{
private:
	int n;
public:
	Switch(int n){
		this->n=n;
	}
	void result (){
		switch(n){
			case 1:cout<<"Spring";break;
			case 2:cout<<"Summer";break;
			case 3:cout<<"Fall";break;
			case 4:cout<<"Winter";break;	
			}
	}
};

int main(){
	int n;
	cin>>n;
	Switch i(n);
	i.result();
	return 0;
}
