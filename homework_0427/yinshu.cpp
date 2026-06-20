#include <iostream>
using namespace std;
class Yinshu{
public:
	Yinshu(int n,int m):a(n),b(m){}
	int yue(){
		while(int i=a%b){
			a=b;
			b=i;
		}
		return b;
	}
	int bei(){
		if(a>b){
			for(int j=1;;j++) if((j*a)%b==0) return j*a;
		}
		else {
			for(int j=1;;j++) if((j*b)%a==0) return j*b;
		}
	}
private:
	int a,b;
};
int main(){
	int a,b;
	cin>>a>>b;
	Yinshu yin(a,b);
	cout<<yin.yue()<<endl<<yin.bei();
	return 0;
}
