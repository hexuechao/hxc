#include <iostream>
using namespace std;
class BJT{
public:
	BJT(int time){
		this->time=time;
	}
	void result(){
		int tem=time,cnt=0;
		while(tem){
			cnt++;
			tem/=10;
		} tem=time;
		if(cnt==1) cout<<"160"<<time;
		else if(cnt==2) cout<<"16"<<time;
		else if(cnt==3){
			tem/=10;tem/=10;
			if(tem>8) cout<<time-800;
			else if(tem==8) cout<<time%10;
			else cout<<1600+time;	
		}
		else cout<<time-800;
	}
private:
	int time;
};
int main(){
	int t;
	cin>>t;
	BJT bjt(t);
	bjt.result();
	return 0;
}
