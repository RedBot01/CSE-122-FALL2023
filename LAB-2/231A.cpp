#include<iostream>
using namespace std;
int main()
{
    int n,i,P,V,T,sum,countt=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        sum=0;
        cin>>P>>V>>T;
        sum=P+V+T;
        if(sum>=2)
            countt++;
    }
    cout<<countt<<endl;
    return 0;
}
