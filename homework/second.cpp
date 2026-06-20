#include <iostream>
using namespace std;
int main(){
	int n,i,k,j,a[20],num=0,t=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];	
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			for(k=i-1;k>=0;k--){
				if(a[i]==a[k])goto pos_1;}
			if(a[i]==a[j])num++;
		}
		if(num==1) {
		cout<<a[i]<<" ";
		t++;
		}
		num=0;
		pos_1:1;
	}
	if(t==0) cout<<"none";
	return 0;
}

