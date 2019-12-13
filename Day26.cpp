/*
Day 26: Nested Logic
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
    int de,da,ma,me,ya,ye;
    
        cin>>da;
        cin>>ma;
        cin>>ya;
        cin>>de;
        cin>>me;
        cin>>ye;
    
    if(ye<ya)
    {
        cout<<10000;
    }
    else if(ye>ya)
    {
        cout<<0;
    }
    else
    {
        if(ma>me)
        {
            cout<<(ma-me)*500;
        }
        else if(me<ma)
        cout<<0;
        else
        {
            if(da>de)
            cout<<(da-de)*15;
            else
            cout<<0;
        }
    }
    return 0;
}
