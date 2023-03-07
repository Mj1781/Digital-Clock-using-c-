//Digital Clock Project by using c++ with while and if else statement

#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int hour,minute,second,a,err;
	err=a=0;
	while(err==0)
	{
		cout<<"Enter hour:"<<endl;
		cin>>hour;
		cout<<"Enter Minutes:"<<endl;
		cin>>minute;
		cout<<"Enter Second:"<<endl;
		cin>>second;
		if(hour<24 && minute<60 && second<60)
		err++;
		else
		system("cls");//Clear the console screen
	}
	while(a==0){//set output formating of clock
		system("cls");
		cout<<"Time:"<<endl;
		cout<<hour<<":"<<minute<<":"<<second<<endl;
		Sleep(1000);//Pause before excuiting the next line of code for 1000 millisecond=1s
		second++;
        if(second>59){
        	second=0;
        	minute++;
		}
		if(minute>59){
			minute=0;
			hour++;
		}
		if(hour>24){
			hour=0;
		}
	}
	return 0;
}
