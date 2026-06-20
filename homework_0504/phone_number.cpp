#include <iostream>
using namespace std;
class Phone{
public:
	Phone(string s):str(s){}
	int result(){
		int num=0;
		for(int i=0;i<7;i++){
			if(str[i]>='A'&&str[i]<='C') num=num*10+2;
			else if(str[i]>='D'&&str[i]<='F') num=num*10+3;
			else if(str[i]>='G'&&str[i]<='I') num=num*10+4;
			else if(str[i]>='J'&&str[i]<='L') num=num*10+5;
			else if(str[i]>='M'&&str[i]<='O') num=num*10+6;
			else if(str[i]>='P'&&str[i]<='S') num=num*10+7;
			else if(str[i]>='T'&&str[i]<='U') num=num*10+8;
			else num=num*10+9;
		}
		return num;
	}
private:
	string str;
};
int main(){
	string str;
	getline(cin,str);
	Phone phone(str);
	cout<<phone.result();
	return 0;
}
