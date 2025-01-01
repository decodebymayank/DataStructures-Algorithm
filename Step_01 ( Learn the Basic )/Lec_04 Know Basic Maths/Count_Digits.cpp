#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0 ;
        int n = 293;
        int copynum = n ;
        
        while(copynum > 0)
        {
            int x = copynum % 10 ;
            
            if(x!=0 && (n%x == 0))
            {
                count++;
            }
            copynum = copynum / 10 ;
        }
        
        return count;
}