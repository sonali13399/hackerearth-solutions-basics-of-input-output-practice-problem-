#include<iostream>
#include<algorithm> //header for sort()
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        if(s[0]==s[s.size()-1])
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
