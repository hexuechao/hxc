#include <iostream>
#include <iomanip>
using namespace std;
class Circle{
public:	
	Circle(double r){
		this->r=r;
	}
	void Area(){
		double area=0.0;
		area=3.14*r*r;
		cout<<fixed<<setprecision(2)<<"面积="<<area<<endl;
	}
	void Circum(){
		double circum=0.0;
		circum=6.28*r;
		cout<<fixed<<setprecision(2)<<"周长="<<circum<<endl; 
	}
private:
	double r;	
};
int main(){
	double r;
	cin>>r;
	Circle circle(r);
	cout<<fixed<<setprecision(2)<<"直径="<<2.0*r<<endl;
	circle.Circum();
	circle.Area();
	return 0;
}
