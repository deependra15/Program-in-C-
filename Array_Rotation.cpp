#include <bits/stdc++.h>
typedef long long ull;
#define max 100000
using namespace std;
int main()
{
    ull n,d;
    ull a[max];
    //ull b[max];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    cin>>a[i];
    
// this is all for d<=n
///////////////////////////////////////////////////////////////////////////  
  for(int i=d;i<n;i++)          // for right rotation = for(int i=n-d;i<n;i++)
	 {
		cout<<a[i]<<" ";
	}
	
	for(int i=0;i<d;i++)       // for right rotation= for(int i=0;i<n-d;i++)
	{
		cout<<a[i]<<" ";
	}
////////////////////////////////////////////////////////////////////////////////
 /*   for(ull i=0;i<n;i++)
	b[(i-d+n)%n]=a[i];         // for right_rotation a[(i+d+n)%n]=a[i];
      
	for(ull i=0;i<n;i++)
	cout<<b[i]<<" ";
   */
  //////////////////////////////////////////////////////////////////////////
 
 /* while(d-- && d<=n)
    {
        ull temp;
        temp=a[0];
         for(ull i=0;i<n;i++)
         {
             if(i==n-1)
             {
             a[i]=temp;
              break;
            }
             
             a[i]=a[i+1];
         }
         
    }
    for(ull i=0;i<n;i++)
    cout<<a[i]<<" ";
 */
    return 0;
}
 
