#include <iostream>
using namespace std;

class Class{
public:
	bool Iscancel(int a[],int n,int k){
		int sum=0;
		for(int j=0;j<n;j++){
			if(a[j]<=0) sum++;
		}
		if(sum>=k) return 0;
		else return 1;
	}
};
int main(){
	int n,k,a[1000];
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	Class cla;
	if(cla.Iscancel(a,n,k)) cout<<"Yes";
	else cout<<"No";
	return 0;
}
