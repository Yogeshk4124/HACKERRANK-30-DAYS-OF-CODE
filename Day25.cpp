/*
Day 25: Running Time and Complexity
Made By:Yogesh Kumar
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int n,input,i;
    double check;
    cin>>n;
    while(n-->0)
    {
        cin>>input;
        if(input==1)
        {
            cout<<"Not prime\n";
            continue;
        }
        check=sqrt(input);
        for(i=2;i<check;i++)
        {
            if(input%i==0)
                break;
        }
        if(i>check)
        cout<<"Prime"<<endl;
        else
        cout<<"Not prime"<<endl;
    }
    return 0;
}
