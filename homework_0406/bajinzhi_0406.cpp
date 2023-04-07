#include <iostream>
using namespace std;
class Jinzhi{
	public:
		Jinzhi(int m){
			i=m;
		}
		void Switch(){
			int a[5]={0};
			int j,k=0;
			for(j=4;j>=0;j--){
				a[j]=i%8;
				i/=8;
			}
		
			
			for(k=0;k<5;k++){
				cout<<a[k];
			}
		}
		
	private:
		int i;
};
int main(){
	int n;
	cin>>n;
	Jinzhi jin(n);
	jin.Switch();
	return 0;
}
