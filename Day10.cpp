#include<iostream>
#include<map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c=0,c2=0;
    cin>>n;
    while(n>=1)
    {
    	
    	if(n%2!=0)c2+=1;
    	else c2=0;
		if(c2>c)c=c2;
		n=n/2;
	}
	cout<<c;
    return 0;
}
