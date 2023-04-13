#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct stu{
	char name[30];
	double regular;
	double final;
	double total;
}p[100];

bool cmp(struct stu a,struct stu b){
	return a.total>b.total;
}

int main(){
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>p[i].name>>p[i].regular>>p[i].final;
		p[i].total=(p[i].regular)*0.4+(p[i].final)*0.6;
	}
	
	sort(p,p+i,cmp);
	
	for(int j=0;j<i;j++){
		cout<<p[j].name<<" ";
		cout<<fixed<<setprecision(2)<<p[j].regular<<" "<<p[j].final<<" "<<p[j].total<<endl;
	}
	
return 0;
}

