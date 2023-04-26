#include <iostream>
using namespace std;

class Score{
private:
	int n;
public:
	Score(int n){
		this->n=n;
	}
	void result(){
		if(n>=90) cout<<"A";
		else if(80<=n&&n<90) cout<<"B";
		else if(70<=n&&n<80) cout<<"C";
		else if(60<=n&&n<70) cout<<"D";
		else cout<<"E";
	}
};

int main(){
	int n;
	cin>>n;
	Score score(n);
	score.result();
	return 0;
}
