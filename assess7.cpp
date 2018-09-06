#include<iostream>
using namespace std;
class odd
{
public:
    int a[10];
    void getdata()
    {
        cout<<"Enter a list of 10 numbers : ";
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
};
class even
{
public:
    int b[10];
    void get()
    {
        cout<<"Enter next 10 numbers of the list: ";
        for(int j=0;j<10;j++)
        {
            cin>>b[j];
        }
    }
};
class oddeven: public odd,public even
{
public:
    int c[20],temp;
    void merg()
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
            c[j]=a[i];
            }
        }
    }
    void mer()
    {
        for(int i=0;i<10;i++)
        {
            for(int k=10;k<20;k++)
            {
            c[k]=b[i];
            }
        }
    }
   void sorts()
    {
    for(int i=0;i<20;i++)
        {
            for(int j=i+1;j<20;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
        }
    }
    void disp()
    {
        cout<<"Sorted list: ";
        for(int i=0;i<20;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    oddeven obj;
    obj.getdata();
    obj.get();
    obj.merg();
    obj.mer();
    obj.sorts();
    obj.disp();
    return 0;
}
