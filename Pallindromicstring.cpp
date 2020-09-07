#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,rev;
    cin>>str;
    rev = str;
    // Reverse str[begin..end]
    reverse(str.begin(), str.end()); //inbuilt reverse function

    if( str == rev)
        cout<< "YES";
    else
        cout<< "NO";
    return 0;
}
