#include <iostream>
using namespace std;
int main()
{
    int number1,count=0,number2;
    cin>>number1>>number2;
    int product=number1*number2;
    for(int i=1;i<=product;i++)
    {
        if(product==i*i)
        {
            count++;
        }
    }
    if(count>0 || product==0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }   
}
