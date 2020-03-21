#include<bits/stdc++.h>
#define int long long 
using namespace std;
int fact(int n)
{
	int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 	
}

int ncr(int n, int r )
{
	return fact(n)/(fact(r)*fact(n-r));
}

main()
{
	int m,n,kmax,kmin;
 	cin>>n>>m;
 	if(m==1)
 	cout<<ncr(n,2)<<" "<<ncr(n,2);
 	else
 	if(m<=(n/2))
 	{
		vector<int>v(m,2);
 		int i=0;
		for(;i<m;)
	 	{
		 	int sum = accumulate(v.begin(),v.end(),0);
			if(sum!=n)
 			{
 				if((n-sum)>2)
 				v[i]=v[i]+2;
 				else
 				v[i]=v[i]+1;
		 	}
		 	sum = accumulate(v.begin(),v.end(),0);
		 	
			if((sum!=n)&&(i==(m-1)))
		 	i=0;
		 	else
		 	i++;
		}
	    kmin=0;
		for(int j=0;j<m;j++)
	 	{
	 	 	 kmin=kmin+ncr(v[j],2);
 		}
 	 	kmax=n-(m-1);
	 	cout<<kmin<<" "<<ncr(kmax,2);
	} 	
	
	else 
	{
		vector<int>a(m,1);
 		int i=0;
		for(;i<m;)
	 	{
		 	int sum = accumulate(a.begin(),a.end(),0);
			if(sum!=n)
 			{ 
 				a[i]=a[i]+1;
		 	}
		 	sum = accumulate(a.begin(),a.end(),0);
		 	
			if((sum!=n)&&(i==(m-1)))
		 	i=0;
		 	else
		 	i++;
		}
	    kmin=0;
		for(int j=0;j<m;j++)
	 	{
	 	 	 kmin=kmin+ncr(a[j],2);
 		}
 	 	kmax=n-(m-1);
	 	cout<<kmin<<" "<<ncr(kmax,2);
		 
	}

}
    #include <iostream>
    #include <vector>
    #include <string>
    using namespace std;
     
    long long selecttwo(long long num)
    {
    	return (num*(num-1))/2;
    }
     
    int main()
    {
    	long n,m;
    	cin>>n>>m;
     	long long kmin=0,kmax=0;
    	kmax = selecttwo(n-m+1);
    	kmin += (n%m)*selecttwo((n/m)+1) + (m-(n%m))*selecttwo(n/m);
    	cout<<kmin<<" "<<kmax<<endl;
    	return 0;
     }
