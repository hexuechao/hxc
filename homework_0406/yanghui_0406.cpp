#include <iostream>
using namespace std;
class Sanjiao{
	public:
		Sanjiao(int num){
			this->num=num;	
		}
		void result(){
			len=new int *[num];
			for(int i=0;i<num;i++){
				//len[i]=new int [i+1];
				len[i]=new int [i+1];
				len[i][0]=len[i][i]=1;
				for(int j=1;j<i;j++){
					len[i][j]=len[i-1][j-1]+len[i-1][j];
				}
				for(int j=0;j<=i;j++){
					cout<<len[i][j]<<" ";
				}
				cout<<endl;
			}			
		}
	private:
		int num;
		int **len;
};
int main(){
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		Sanjiao sanjiao(a[i]);
		sanjiao.result();	
	}
	return 0;
}
