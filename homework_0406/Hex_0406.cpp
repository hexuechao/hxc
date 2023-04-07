#include <iostream>
using namespace std;
class Hex{
	public:
		Hex(int num,int R){
			this->num=num;
			this->R=R;
		}
		void Switch(){
			char ch[100];
			int len=0;
			while(num){
				if(num%R>=0&&num%R<=9) ch[len++]=num%R+'0';
				else ch[len++]=num%R+'7';
				num/=R;
			}
			for(int i=len-1;i>=0;i--){
				cout<<ch[i];
			}
		}
	private:
		int num,R;
};
int main(){
	int a,b;
	while(1){
		cin>>a>>b;
		Hex hex(a,b);
		hex.Switch();
		cout<<endl;
	}
	return 0;
}
