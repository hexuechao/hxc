#include <iostream>
using namespace std;
bool leap(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
class Judge{
	public:
		Judge(int year,int month,int day){
			this->year=year;
			this->month=0-month;
			this->day=0-day;
	}
		void result(){
			int sum=0;
			for(int i=1900;i<year;i++){
				if(leap(i))sum+=366;
				else sum+=365;
			}
			int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			if(leap(year))a[1]=29;
			for(int i=0;i<month-1;i++){
				sum+=a[i];
			}
			sum=sum+day-1;
			switch(sum%7){
				case 0:cout<<"Monday";break;
				case 1:cout<<"Tuesday";break;
				case 2:cout<<"Wednesday";break;
				case 3:cout<<"Thursday";break;
				case 4:cout<<"Friday";break;
				case 5:cout<<"Saturday";break;
				case 6:cout<<"Sunday";break;
			}
	}
	private:
		int year,month,day;
};
int main(){
	int y,m,d;
	cin>>y>>m>>d;
	Judge judge(y,m,d);
	judge.result();
	return 0;
}
