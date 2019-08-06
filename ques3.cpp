#include <iostream>
using namespace std;
int main()
{
    int number,coutn=0,interval1,interval2;
    cin>>number>>interval1>>interval2;
    for(int i=interval1+1;i<interval2;i++)
    {
        if(number==i)
        {
            coutn++;
        }
    }
    if(coutn>0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}
