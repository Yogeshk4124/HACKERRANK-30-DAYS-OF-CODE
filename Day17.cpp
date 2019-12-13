/*
DAY 17: More Exceptions
https://www.hackerrank.com/challenges/30-more-exceptions/problem
MADE BY:YOGESH KUMAR
*/
#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
struct M :public exception{
    const char* what() const throw() {
        return "n and p should be non-negative";
    }
};
class Calculator{
public:
int power(int n,int p)
{
    int ans=1;   
   if(n<0||p<0)
   throw M();
   else
   {
    for(int i=0;i<p;i++)
    ans*=n;
   }
   return ans;
}
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
