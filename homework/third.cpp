#include <iostream>
#include <string.h>
using namespace std;
class Email{
	private:
		string str;
	public:
	Email(string s){
		str=s;
	}
	void judge(int i=0,int j=0,int num=0){
		if(str[0]=='@'||str[str.size()-1]=='@'||str[str.size()-1]=='.'){
		cout<<"no";
		goto pos_1;
	}
	for(i=0;i<str.size();i++){
		if(str[i]=='@'||str[i]=='.')num++;
	}
	if(num!=2){
	cout<<"no";
	goto pos_1;
	}
	for(i=0;str[i]!='@';i++){;}
	if(str[i+1]=='.'){
	cout<<"no";
	goto pos_1;
	}
	for(j=0;j<i;j++){
		if(str[j]=='.'){
		cout<<"no";
		goto pos_1;
		}
	}
	for(i=0;i<str.size();i++){
		if((str[i]<='z'&&str[i]>='a')||(str[i]<='Z'&&str[i]>='A')||(str[i]<='9'&&str[i]>='0')||(str[i]=='@')||(str[i]=='.')||(str[i]=='-')||(str[i]=='_'))continue;
		else {
			cout<<"no";
			goto pos_1;
		}
	}
	cout<<"yes";
	pos_1:1;
	}
	
};
int main(){
	string s;
	cin>>s;
	Email email(s);
	email.judge();
}
