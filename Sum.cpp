#include<iostream>
using namespace std;
class Sum
{
    public:
        int a[5];
        Sum()
        {
            int i;
            cout<<"Enter five numbers:"<<endl;
            for(i=0;i<5;i++)
            {
                cin>>a[i];
            }    
        }
        int add()
        {
            int i;
            int sum=0;
            for (i=0;i<5;i++)
            {
                sum=sum+a[i];
            }
            cout<<"The sum of entered num:"<<sum<<endl;
            return 0;
        }
};
            
int main()
{
    Sum sum;
    sum.add();
}