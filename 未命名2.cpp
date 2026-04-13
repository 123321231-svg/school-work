#include<iostream>
#include<cmath>
using namespace std;
double sroot(int x){
	if(x<0){
		return -1;
	}
	return sqrt(x);
}
double sroot(long x){
	if(x<0){
		return -1;
	}
	return sqrt(x);
}
double sroot(double x){
	if(x<0){
		return -1;
	}
	return sqrt(x);
}
int main(){
	int a;
	long b;
	double c;
	cin>>a>>b>>c;
	cout<<sroot(a)<<endl;
	cout<<sroot(b)<<endl;
	cout<<sroot(c)<<endl;
	return 0;
}


