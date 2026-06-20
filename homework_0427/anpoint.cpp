#include <iostream>
using namespace std;
class Point{
public:
	Point(int m):n(m){}
	bool findmax(int arr[],int num,int size){
			for(int j=0;j<size;j++){
				if(num<arr[j]) return false;
			}
		return true;
	}
	void read_data(){
		a=new int *[n];
		for(int i=0;i<n;i++){
			a[i]=new int [n];
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
	}
	int result(){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(findmax(a[i],a[i][j],n)){
					for(int k=0;k<n;k++){
						if(a[k][j]<a[i][j]) break;
						else if(k==n-1){
							cout<<i<<" "<<j;
							return 0;	
						}
					}
				}
			}
		}
		cout<<"NO";
		return 0;
	}
private:
	int **a;
	int n;
};

int main(){
	int n;
	cin>>n;
	Point point(n);
	point.read_data();
	point.result();
	return 0;
}
