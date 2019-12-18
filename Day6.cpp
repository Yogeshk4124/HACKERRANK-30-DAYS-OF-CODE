#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    string a,t1,t2;
    cin>>t;
    while(t>0)
    {
        t1="";t2="";
        cin>>a;
        for(int i=0;i<a.length();i++)
        {
            if(i%2==0)t1+=a[i];
            else t2+=a[i];
        }
        cout<<t1<<" "<<t2<<endl;
        t--;
    }
    return 0;
}
