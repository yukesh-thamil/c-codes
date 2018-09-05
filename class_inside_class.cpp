#include<iostream>
using namespace std;
class account
{
public:
    class customer
    {
    public:
       int acc;
        string name;
        void getdata()
        {
            cout<<"Enter your name : ";
            cin>>name;
            cout<<"Enter your pin: ";
            cin>>acc;
        }
        void display(int bal)
        {
            cout<<"Name: "<<name<<"\n"<<"Balance: "<<bal<<"\n"<<endl;
        }
    };
};
int main()
{
    int n,s;
    s=50000;
    cout<<"Enter the no.of customer: ";
    cin>>n;
    account :: customer obj[n];
    for(int i=0;i<n;i++)
    {
        s=s+5000;
        obj[i].getdata();
        obj[i].display(s);
    }
    return 0;

}
