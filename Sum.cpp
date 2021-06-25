#include<iostream>
using namespace std;
class Sum
{
    
    public:
        int n;
        Sum getterms(){
        cout<<"Enter the no of terms that needs to be added"<<endl;
        cin>>n;
        }
        Sum getnum()
        {
            int a[n];
            int i;
            cout<<"Enter the numbers:"<<endl;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }    
        }
        int add()
        {
            int a[n];
            int i;
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
    s1.getterms();
    s1.getnum();
    s1.add();
}