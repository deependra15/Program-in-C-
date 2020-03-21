#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,count=0,max=0;
	int w[26];
 
	cin>>s>>n;
	for(int i=0;i<26;i++)
	{
		cin>>w[i];
		if(max<w[i])
		max=w[i];
	}
	
	for(int i=0;i<s.length();i++)
	{ 
	count=count+(1+i)*w[(s[i]-97)];
	}
	
	
	for(int i=s.length()+1;i<=(s.length()+n);i++)
	{
		count+=(i*max);
	} 
	
cout<<count;
	return 0;
}
