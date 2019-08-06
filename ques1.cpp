#include<iostream>
#include <string>
using namespace std;
int main()
{
    string input,rev="";
    cin>>input;//lappal
    for(int i=input.length()-1;i>=0;i--)
    {
        rev+=input[i];
    }
    if(input==rev)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
