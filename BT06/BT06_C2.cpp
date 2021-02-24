#include <iostream>

using namespace std;

string word(int n,int k)
{
    string s;
    for(int i=97;i<=97+n;i++)
    {
        for(int j=0;j<k;j++)
            {s[j]=char(i);}
    }
    return s;
}

int main()
{
    int n,k;
    cin >> n >> k;
    string s;
    s=word(n,k);
    cout << s;
}

