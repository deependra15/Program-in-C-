#include<bits/stdc++.h>
#define int long long int
#define max 1000
using namespace std;
double findmax(int a[],int n)
{
 	double diff=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>diff)
		diff=a[i+1]-a[i];
 	} 
    diff=diff/2;
    cout<<diff;
    return diff;
}

main()
{
	int n,l;
	int a[max];
	cin>>n>>l;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	double diff= findmax(a,n);
// 	double diff=0;
//	for(int i=0;i<n-1;i++)
//	{
//		if(a[i+1]-a[i]>diff)
//		diff=a[i+1]-a[i];
// 	} 
//   diff=diff/2;
	if(a[0]>(diff))
	diff=a[0];
	if(l-a[n-1]>diff)
	diff=l-a[n-1]; 
	cout<<fixed << setprecision(10)<<diff;
 
}
