#include<bits/stdc++.h>
using namespace std;
int main()
{
	double distance;
	int r,x1,y1,x2,y2,ans;
	cin>>r>>x1>>y1>>x2>>y2;
	distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	long dia=2*r;
	if(floor(distance/dia)==(distance/dia))
		ans = (distance/dia);
	else if(distance-(long(distance/dia)*dia)<dia)
		ans = long(distance/dia) + 1;
	cout<<ans<<endl;
 
	return 0;
}
//    #include<bits/stdc++.h>
//    using namespace std;
//    int main()
//    {
//    	int distance,r,x1,y1,x2,y2;
//    	cin>>r>>x1>>y1>>x2>>y2;
//    	distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
//      	cout<<distance<<endl;
//		  distance=distance-r; 
//     	if(distance/r<0)
//    	cout<<"0";
//    	else if((distance%r!=0)&&(distance/r<2))
//    		cout<<(distance/r)+1;
//    		else if ((distance%r!=0)&&(distance/r>=2))
//    		cout<<((distance/r)/2)+1;
//			else
//    		cout<<distance/r;
//    		
//    return 0;
//    }
