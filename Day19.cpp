/*
Day 19: Interfaces
https://www.hackerrank.com/challenges/30-interfaces/problem
MADE BY:YOGESH KUMAR
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int c=n;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            c+=i;
        }
        return c;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
