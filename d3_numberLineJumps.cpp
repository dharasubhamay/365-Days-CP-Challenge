//https://www.hackerrank.com/challenges/kangaroo/problem

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if(v1 == v2)
    {
        if(x1 == x2)
            cout << "YES";
        else 
            cout << "NO";
    }
    
    else{
        int x = (x1 - x2);
        int v = (v1 - v2);
        
        
        if((x/v)<0 && (x%v==0))
            cout << "YES";
        else
            cout << "NO";    
    }
    
    
    return 0;
}
