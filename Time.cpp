#include<iostream>
using namespace std;
class Time
{
    public:
        double hours,min,sec;
    void getTime()
    {
        cout<<"Enter time in hour,minutes&seconds:"<<endl;
        cin>>hours>>min>>sec;
        
    } 
    void add(Time t1,Time t2){
        int total_time=0,hrs=0,m=0,s=0;
        double time1,time2;
        time1=t1.hours*3600+t1.min*60+t1.sec;
        time2=t2.hours*3600+t2.min*60+t2.sec;
        total_time=time1+time2;
        //for hour
        if(total_time>=3600){
            hrs=total_time/3600;
            total_time=total_time%3600;
        }
        //for minutes
        if(total_time>=60){
            m=total_time/60;
            total_time=total_time%60;
        }
        s=total_time;
        hours=hrs;
        min=m;
        sec=s;
    }
    void display()
    {
        cout<<"Total time:"
            <<"\n "<<hours<<" hrs "<<min<<" min "<<sec<<" sec "<<endl;
    }
};
int main(){
    Time T1,T2,Total_time;
    cout<<"Enter First time"<<endl;
    T1.getTime();

    cout<<"Enter second time"<<endl;
    T2.getTime();

    Total_time.add(T1,T2);
    Total_time.display();
}