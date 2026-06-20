#include <iostream>
using namespace std;

class Year{
private:
	int n;
public:
	Year(int n){
		this->n=n;
	}
	void result(){
		if(1<=n&&n<=10) cout<<"Children";
		else if(11<=n&&n<=20) cout<<"Teenagers";
		else if(21<=n&&n<=40) cout<<"Youth";
		else if(41<=n&&n<=50) cout<<"middle-aged";
		else if(51<=n&&n<=80) cout<<"Elderly";
		else cout<<"Old man";
	}
};

int main(){
	int n;
	cin>>n;
	Year year(n);
	year.result();
	return 0;
}
