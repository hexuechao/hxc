#include <iostream>
using namespace std;
class Jinzhi{
	public:
		Jinzhi(int j,int k){
			this->j=j;
			this->k=k;
		}
		void Switch(){
			int tem=0,num=0,len=0,c[100]={0};
			while(j){
				c[len++]=10*tem+j%k;
				j/=k;
			}
			for(len-=1;len>=0;len--){
				cout<<c[len];	
			}
		}
	private:
		int j,k;
};
int main(){
	int n;
	cin>>n;
	int *a=new int[n],*b=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		Jinzhi jinzhi(a[i],b[i]);
		jinzhi.Switch();
		cout<<endl;
	}
	return 0;
}
