#include<bits/stdc++.h>
#define int long long int 
using namespace std;
main()
{ 
int n,m;
cin>>n>>m;
int temp;
vector<int>v;
  for(int i=0;i<m;i++)
	{
		cin>>temp;
		v.push_back(temp);
	} 
	
int count=0;
count+=v[0]-1;
 
for(int i=1;i<m;i++)
{
	if(v[i]>=v[i-1])
	count=count+(v[i]-v[i-1]);
	else
	count=count+(n-v[i-1]+v[i]);
		
}
cout<<count;
/*int j=0;
int count=0;
for(int i=1;i<=n;i++)
{
/*	if(v[j]<v[j-1])
	{
		count+=n-v[j];
		i=v[j]+1;
	}
	else	if((v[j]==i) || (v[j]==v[j-1]))
				{
					j++;
				}
	count++;
	if(j==m)
	break;
}
cout<<"Output is \n";
cout<<count;
*/}
