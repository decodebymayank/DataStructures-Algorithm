#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 212;
    int copynum=x;
       
        
        int revnum = 0 ;
        while(copynum > 0)
        {
            int x = copynum % 10 ;
            
                if(revnum>=INT_MAX/10)
                {
                    return 0;
                } 
            revnum = revnum*10 + x ;
            
            copynum = copynum / 10 ;
        }
        
        if(x>0)
        {
            return revnum;
        }
        else
        {
        return (-revnum) ;
        }
        
        
}
