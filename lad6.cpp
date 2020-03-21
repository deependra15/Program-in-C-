#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
main()
{
	int n;
    long int start=1,end=1;
	int count=0;
	cin>>n;
 	vector<long int>a;
 	vector<long int>b;
	for(int i=0;i<n;i++)
	{
		long int temp;
		cin>>temp;
		a.push_back(temp);
	}
	
	b.assign(a.begin(),a.end());
	
	sort(b.begin(),b.end());
	int temp1=0,temp2=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]-b[i]>temp1 && count<1) 
		{
			temp1=a[i]-b[i];
			count++;
			start=i; 
    	} 
    	else if (a[i]-b[i]<=temp2)
    	{
    		temp2=a[i]-b[i];
			end=i;
    	}
	}
	
	int flag;
 	for(int i=start;i<end;i++)
 	{
 		if(a[i]>=a[i+1])
 		flag=0;
 		else
		 {
		 flag=1;
		 break;	
		 }
	 }
	if((count==0)&&(end>start)||(n==1))
	cout<<"yes"<<endl<<1<<" "<<1;
	else 
    (flag!=0)?cout<<"no":cout<<"yes"<<endl<<start+1<<" "<<end+1;
}
