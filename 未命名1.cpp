#include<iostream>
using namespace std;
class mytime{
private:
	int hour,minute,second;
public:
	mytime(int h=0,int m=0,int s=0){
		hour=(h>=0&&h<=23)?h:0;
		minute=(m>=0&&m<=59)?m:0;
		second=(s>=0&&s<=59)?s:0;
	}
	mytime(const mytime&t){
		hour=t.hour;
		minute=t.minute;
		second=t.second;
	}
	void print() const{
	cout<<hour<<":"<<minute<<":"<<second;
	}
	void increase(){
		second++;
		if (second>=60){
			second=0;
			minute++;
			if(minute>=60){
				minute=0;
				hour++;
				if(hour>=24){
					hour=0;
				}		
		}
	}}
	void decrease(){
		second--;
		if(second<0){
			second=59;
			minute--;
			if(minute<0){
				minute=59;
				hour--;
				if(hour<0){
					hour=23;
				}
			}
	}
}
};
int main(){
	int h,m,s;
	cin>>h>>m>>s;
	mytime time1(h,m,s);
	mytime time2(time1);
	time1.print();
	cout<<endl;
	time1.increase();
	time1.print();
	cout<<endl;
	time2.print();
	cout<<endl;
    time2.decrease();
	time2.print();
	return 0;
}
