#include<iostream>
using namespace std;
int main()
{
    int l,n,w,h;
    cin>>l;
    cin>>n;
    while(n--)
    {
        cin>>w>>h;
        if(w<l || h<l)
        {
            cout<<"UPLOAD ANOTHER";
        }
        else
        {
            if(w==h)
                cout<<"ACCEPTED";
            else
                cout<<"CROP IT";
        }
    }
    return 0;
}
