#include<bits/stdc++.h>
#define max 100000
//typedef long long int ll;
#define ll long long int
using namespace std;

int cnt[1000001];

bool is_prime(ll num)
{
	for(int i=2;i<=sqrt(num);i++)
			if(num%i==0)
			return false;
	 return true;	
}

bool is_Tprime(ll num)
{
	ll sq=sqrt(num);
	if(sq*sq==num)
	{
		if(cnt[sq]==1 )
		return true;
		else return false;
	}
	else return false;
}

main()
{
	int n;
	cin>>n;
	memset(cnt,-1,sizeof(cnt));
	for(int i=2;i<=1000000;i++)
	    if(is_prime(i))
	     cnt[i]=1;
	     else
	     cnt[i]=0;
	
	ll arr[n];
	int ans[n]={0};
	for(int i=0;i<n;i++)
	 {
	 	 
	 	cin>>arr[i];
	 	if(arr[i]==1) 
		 {
		 	ans[i]=0;continue;
		 }
		if(is_Tprime(arr[i]))
	 	     ans[i]=1;
	}
for(int i=0;i<n;i++)
 if(ans[i]==1)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

/*	int n,j;
    ll s,num;
    ll a[max];
	cin>>n;
	       
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		s=sqrtl(num);
		for(j=2;j*j<s;j++)
		 if(num%j==0)
		 break;
		if(j*j>s&&s*s==num&&num>1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;	
	
   } 
 
	int k=0;
	while(k<n)
	{
		count=0;
		f=0;
		for(ll i=1;i<=a[k]/2;i++)
		{ 
			if(a[k]%i==0)
			{
				//cout<<i<<" ";
			 f++;	count++;
			}
	        if(f>2)
	        break;
		}
		if(count==2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	k++;
	}
*/

} 

