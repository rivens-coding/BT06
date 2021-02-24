#include <iostream>

using namespace std;

int taphop(int n,int k)
{
    if(n==1||n==0) return 1;
    else
        return n*taphop(n-1,k);
}

int main()
{
    int n,k;
    cin >> n >> k;
    int s=taphop(n,k);
    cout << s;
}

