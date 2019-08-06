#include<iostream>
#include <string>
using namespace std;
int main()
{
    int count=0;
    string input,rev="";
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='A' || input[i]=='E' || input[i]=='I' || input[i]=='O' || input[i]=='U' )
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}
