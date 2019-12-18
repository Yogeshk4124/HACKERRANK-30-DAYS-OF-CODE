#include<iostream>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
    int t,n;
    cin>>t;
    string s;
    while(t-- >0)
    {
        cin>>s>>n;
        m[s]=n;
    }
    while(cin>>s)
    {
        
        if(m[s]!=0)
        cout<<s<<"="<<m[s]<<endl;
        else cout<<"Not found"<<endl;
    }
    return 0;
}
