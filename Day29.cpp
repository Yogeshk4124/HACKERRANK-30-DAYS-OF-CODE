#include<iostream>
using namespace std;

int main()
{
int t,n,k,r=0;
cin>>t;
for(int i=0;i<t;i++)
{
    r=0;
    cin>>n>>k;
    for(int j=1;j<n;j++)
    {
        for(int x=j+1;x<=n;x++)
    {
        if((j&x)>r && (j&x)<k)
            r=j&x;
    }
    }
    cout<<r<<endl;
}
}
