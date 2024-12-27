#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string a , b ;
        cin >> a >> b ;
        string c = a + b ;
        int x = 1;
        int y = 1;
        for(int i = 0 ; i<c.size();i++)
        {
            if(a.size()!=i&&x)
            {
                cout << a[i];
            }
            else
            {
                x=0;
            }
            if(b.size()!=i&&y)
            {
                cout << b[i];
            }
            else
            {
                y=0;
            }
        }
        cout << endl ;
    }

    return 0;
}
