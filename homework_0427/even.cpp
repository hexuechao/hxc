#include <iostream>
using namespace std;
class Even{
public:
	bool even(int n){
		if(1&n) return true;
		else return false;
	}
	int result(){
		int num;
		while(1){
			cin>>num;
			if(num<=0) break;
			else if(even(num)) sum+=num;
		}
		return sum;
	}
	
private:
	int sum=0;
};
int main(){
	int num;
	Even even;
	cout<<even.result();
	return 0;
}
