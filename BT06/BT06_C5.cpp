#include <iostream>

using namespace std;

void sum(int n)
{
    cout << n << endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)==n)
                cout << i << ' ' << j << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sum(n);
}
