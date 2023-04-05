#include <iostream>
#include <stdio.h>
using namespace std;
class Fen{
	private:
		int a[10];
		int b[10];
		int n;
	public:
		Fen(int m,int s[10],int t[10]){
			n=m;
			for(int l=0;l<10;l++){
				a[l]=s[l];
				b[l]=t[l];
			}
		}
		void back(int up=0,int down=1){
			int i,j,k;
			for(i=0;i<n;i++){
		down*=b[i];
	}
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				a[j]*=b[k];
			}
			a[j]/=b[j];
			up+=a[j];
		}	
	if(down==1){
		cout<<up;
		goto pos_1;
	}
	if(up==0){
	cout<<"0";
	goto pos_1;
	}
	if(up<down){
		for(i=up;i--;i>1){
			if(up%i==0&&down%i==0){
				up/=i;
				down/=i;
				cout<<up<<"/"<<down;
				goto pos_1;
			}
		}
	}
	else if(up>down){
		for(i=down;i--;i>1){
			if(up%i==0&&down%i==0){
				up/=i;
				down/=i;
				cout<<up<<"/"<<down;
				goto pos_1;
			}
		}
	}
	else cout<<"1";
	pos_1:1;
		}
};
int main(){
	int n,s[10],t[10];
	cin>>n;
	for(int d=0;d<n;d++){
		cin>>s[d];getchar();
		cin>>t[d];getchar();
	}
	Fen fen(n,s,t);
	fen.back();
	return 0;
}
