#include <iostream>
using namespace std;
int main()
{
    int n,n1,d=0,rev=0;
    cout<<"enter a number to reverse";
    cin>>n;
    for(n1=n;n1>0;n1/=10)
    {
        d=n1%10;
        rev=rev*10+d;
    }
    cout<<"reversed number is"<<rev;
    return 0;
}