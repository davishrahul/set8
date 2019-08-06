#include <iostream>
using namespace std;
int main()
{
    int rem,number,sum=0;
    cin>>number;
    while(number>0)
    {
        rem=number%10;
        sum=sum*10+rem;
        number=number/10;
    }
    while(sum>0)
    {
        rem=sum%10;
        if(rem%2!=0)
        {
            cout<<rem<<" ";
        }
        sum/=10;
    }
    return 0;
}
