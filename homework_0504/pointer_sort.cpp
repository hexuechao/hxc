#include <iostream>
using namespace std;
class Sort{
public:
	int sort(int num[],int n){
		int tem=0;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				if(num[j]>num[j+1]){
					tem=num[j+1];
					num[j+1]=num[j];
					num[j]=tem;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(i==n-1) cout<<num[i];
			else cout<<num[i]<<" ";	
		} 
			return 0;
	}
};
int main(){
	int n,num[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>num[i];
	Sort sor;
	sor.sort(num,n);
	return 0;
}
