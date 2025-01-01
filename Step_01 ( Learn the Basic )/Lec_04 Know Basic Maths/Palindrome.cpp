#include<bits/stdc++.h>
using namespace std;
int main()
{
     int revnum = 0 ;
     int x = 121;
         int copynum = x;
        if(x>=0)
        {
       
            while(copynum > 0)
            {
                int num = copynum % 10 ;
                if(revnum>INT_MAX/10)
                {
                    break;
                }              
                revnum = revnum*10 + num ;
                
                copynum = copynum / 10 ;
            }
        
            if(x==revnum)
            {
                return true;
            }
        }

        return false;
}