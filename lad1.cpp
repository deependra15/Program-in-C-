#include<bits/stdc++.h>
#define max 10000
using namespace std;
main()
{ 
int n,t;
cin>>n>>t;
char temp[max];
for(int i=0;i<n;i++)
cin>>temp[i];
  while(t--)
	{
		 for (int i = 0; i<n; )
		{
			 
			if(temp[i]=='B' && temp[i+1]=='G')
			{
				 swap(temp[i],temp[i+1]);
				 i+=2;
			}
			else
			
			i++;
		}	
		
	}
 
	     for (int i = 0; i<n; ++i) 
        cout << temp[i];
}
	
	
/*
	vector<char>s;
	int n ,t ;
	char temp;
	cin>>n>>t;
	while (n--)
	{
		
		cin>>temp;
	    s.push_back(temp);
	}
    while(t--)
	{
		 for (int i = 0; i<s.size(); )
		{
			 
			if(s[i]=='B' && s[i+1]=='G')
			{
				 swap(s[i],s[i+1]);
				 i+=2;
			}
			else
			
			i++;
		}	
		
	}
	 cout << "Output of begin and end: ";
	     for (int i = 0; i<=s.size(); ++i) 
        cout << s[i]<< " ";

*/
  
