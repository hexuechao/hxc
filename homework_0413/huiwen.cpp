#include <iostream>
using namespace std;
class Hws{
public:
	Hws(int num,int cnt){
		this->num=num;
		this->cnt=cnt;
	}
	void result(){
		int i,k,tem=0;
		for(i=num+1;cnt>0;i++){
			k=i;tem=0;
			while(k){
				tem=tem*10+k%10;
				k/=10;
			}
			if(tem==i){
				cout<<tem<<" ";
				cnt--;
			}
		}
		cout<<endl;
	}	
private:
	int num,cnt;
};
int main(){
	int total,n,m;
	cin>>total;
	for(int j=0;j<total;j++){
		cin>>n>>m;
		Hws hws(n,m);
		hws.result();
	}
	return 0;
}
