#include<iostream>
#include<map>
#include<regex>
using namespace std;

int main()
{
	string s,ss;
multimap<string,string> emails;
int n;
cin>>n;
regex b("(.*)(@gmail.com)");
for(int i=0;i<n;i++)
{
	cin>>s>>ss;
	if(regex_match(ss,b))
	emails.insert(pair<string,string>(s,ss));
}
multimap<string,string>::iterator it;
for(it=emails.begin();it!=emails.end();it++)
{
	cout<<it->first<<endl;
}
}
