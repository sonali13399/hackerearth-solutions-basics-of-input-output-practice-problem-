#include<iostream>
using namespace std;
int main()
{
    string s;
    int k,m=0,a=0;
    cin>>s>>k;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]!='9')
            m=a++;
        else
            m=a;
    }
    if(k<m)
    {
        for(int i=0;i<k;i++)
        {
            if(s[i]=='9')
            	k++;
            else
                s[i]='9';
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            s[i]='9';
        }
    }
    cout<<s;
    return 0;

}
