#include <iostream> 
#include<vector>
using namespace std;
int main() 
{ 
 
     vector<int> res(200,0);
	 res[0]=1;
	 int k=0;
	 int num;
	 int carry=0;
	 cout<<"Enter No: ";
     cin>>num;
     for(int i=1;i<=num;i++)
     {
     	for(int j=0;j<=k;j++)
     	{
     		res[j]=res[j]*i+carry;
     		carry=res[j]/10;
			res[j]=res[j]%10;
     		
		 }
		 while(carry)
		 {
		 	k++;
		 	res[k]=carry%10;
		 	carry/=10;
		 }
	 }
	 for(int i=k;i>=0;i--)
	 {
	 	cout<<res[i];
	 }
     return 0; 
} 

