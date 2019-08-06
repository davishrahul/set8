#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input,str="";
    cin>>input;//maha
    int length=input.length();//4
    if(length%2==0)
    {
        input[length/2]='*';  
        input[(length/2)-1]='*';
    }
    if(length%2==1)
    {
        input[length/2]='*';
    }
    for(int i=0;i<length;i++)
    {
        str+=input[i];
    }
    cout<<str;
    
}
