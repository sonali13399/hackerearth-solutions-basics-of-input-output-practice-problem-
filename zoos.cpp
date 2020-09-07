#include <iostream>
using namespace std;
int main() 
{
int x=0,y=0,i=0;
char arr[20];
cin>> arr; 
while(arr[i]!= NULL)
{
 if(arr[i]=='z')
        x++; 
 else
        y++;
 i++;
}

if(y==2*x)
    cout<< "Yes" ;
else
    cout<< "No" ;
return 0;
}
