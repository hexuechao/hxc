#include <iostream>
using namespace std;
class Key{
public:
	Key(string s,int m):str(s),n(m){}
	string result(){
		int cnt=0,len=str.size();
		string ss;
		for(int i=0;i<len;i++){
			str[i]=toupper(str[i]);
		}
		for(int i=0;i<len;i++){
			if(str[i]!='-') cnt++;
		}
		int tem1=cnt/n,tem2=cnt%n,leng=0;
		if(tem2!=0){
			for(int i=1;i<=tem2;i++){
				if(str[leng]!='-') ss+=str[leng++];
				else {
				ss+=str[++leng];
				leng++;
				}
			} ss+='-';
		}
		
		for(int i=1;i<=tem1;i++){
			for(int j=1;j<=n;j++){
				if(str[leng]!='-') ss+=str[leng++];
				else {
					ss+=str[++leng];
					leng++;
				}
			}
			if(i<tem1) ss+='-';
		}
		return ss;
	}
private:
	string str;
	int n;
};
int main(){
	string str;
	int n;
	getline(cin,str);
	cin>>n;
	Key key(str,n);
	cout<<key.result();
	return 0;
}
