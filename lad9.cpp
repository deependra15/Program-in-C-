#include<iostream>
#include<vector>
# define int long long int
using namespace std;
main()
{
	vector<int>v;
	int num,n;
	cin>>n;
	while(n>=10)
	{
		num=n%10;
		v.push_back(num);
		n=n/10;
	}
	 v.push_back(n);

int csum=0;
int tens;
int sum;
	for(int i=1;i<v.size();i++)
	 {	
	    sum=0;
	 	if(v[i]%2==0)
	    {
		 	swap(v[i],v[0]);
 
			tens=1;
			
			
			for(int j=0;j<v.size();j++)
	 			{
				 sum=sum+(v[j]*tens);
				  tens=tens*10;
			
			   }
			   if(csum<sum)
			    csum=sum; 
	  	swap(v[i],v[0]);}
	  }
	 if(csum!=0)
	 cout<<csum;
	 else cout<<"-1";
	 
 	 
}
