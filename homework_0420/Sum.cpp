#include <iostream>
using namespace std;

class Sum{
private:
	int n,sum=0;
public:
	Sum(int n){
		this->n=n;
	}
	int result(){
		while(n){
			sum+=n%10;
			n/=10;	
		}
		return sum;
	}
};

int main(){
	int n;
	cin>>n;
	Sum sum(n);
	cout<<sum.result();
	return 0;
}

