// Write your code here
#include<iostream>
using namespace std;
int mincostofBallons()
{
	int cost_of_green_balloon, cost_of_purple_balloon, status1,status2;
	int tcost1=0,tcost2=0,n;
	cin>>cost_of_green_balloon;
	cin>>cost_of_purple_balloon;
	cin>>n;
	while(n--)
	{
		cin>>status1;
		cin>>status2;
		tcost1 = tcost1+(status1*cost_of_green_balloon) + (status2*cost_of_purple_balloon);
		tcost2 = tcost2+(status1*cost_of_purple_balloon)+ (status2*cost_of_green_balloon);

		
	}
    if(tcost1<tcost2) 
            return tcost1;
    else
            return tcost2;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cout<<mincostofBallons()<<endl;
	}
	return 0;
}
