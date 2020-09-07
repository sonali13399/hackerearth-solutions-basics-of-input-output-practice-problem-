#include<iostream>
#include<vector>
using namespace std;
void findlast(vector<long> &ar,int last)
{                           //to get the last digit L->R

    for(int i=0;i<=last;++i){

        while(ar[i]>9){

            ar[i]/=10;

        }   

    }  

}

void findfirst(vector<long> &ar , int start , int end){                         //to get the first digit L->R    

    for(;start<end;++start){

        ar[start]%=10;

    }   

}

int main()

{

    int num,mid=0,odd=0,even=0;

    cin >> num;

    mid=num/2;  

    vector<long> a(num);

    for(int i=0;i<num;++i)

        cin>>a[i];

    findlast(a,mid-1);                             //to get the last digit L->R

    findfirst(a,mid,num);                       //to get the first digit L->R

   

 //using divisibility test of 11

    for(int i = 0;i<num;++i){

        if(i%2==0)

            even+=a[i];

        else

            odd+=a[i];

    }
    if ((even-odd)%11==0)   

        cout<<"OUI";    

    else

        cout<<"NON";

    return 0;

}
