#include<iostream>
using namespace std;
class Sum
{   private:
    int n;
    
    public:
        
        Sum getnum()
        {
            cout<<"Enter the no of terms that needs to be added"<<endl;
            cin>>n;
            int a[n],i;
            cout<<"Enter the numbers:"<<endl;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }    
        }
        int add()
        {
            int a[n],i;
            int sum=0;
            for (i=0;i<n;i++)
            {
                sum=sum+a[i];
            }
            cout<<"The sum of entered num:"<<sum<<endl;
            return 0;
        }
};
            
int main()
{
    Sum s1;
    s1.getnum();
    s1.add();
}