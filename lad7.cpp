#include<bits/stdc++.h>
using namespace std;
struct lang
{
	char a[100];
	char b[100];
};

struct prof
{
	char p_word[100];	
};



main()
{
	int n,m;
	cin>>n>>m;
	lang l[m];
 	prof p[n];
 	for(int i=0;i<m;i++)
     cin>>l[i].a>>l[i].b;
  
  for(int i=0;i<n;i++)
     cin>>p[i].p_word;
     
     	
     
     
   int i=0;
    while(i<n)
    {
    	for(int j=0;j<m;j++)
	 	{
			 if(strcmp(p[i].p_word,l[j].a)==0)
			    {
			    	 
			    	i++;
			 		if(strlen(l[j].a)>strlen(l[j].b))
			 		cout<<l[j].b<<" ";
			 		else
			 		cout<<l[j].a<<" ";
					break;
			    }
		 
	 	}
	}	

  
   
}
