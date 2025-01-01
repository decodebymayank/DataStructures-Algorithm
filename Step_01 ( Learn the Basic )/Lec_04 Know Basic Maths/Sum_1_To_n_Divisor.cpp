#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
     int sum = 0 ;
        for(int i = 1 ; i <=n ; i++)
        {
            int num = i ;
            
            //find divisor of that number
            for(int j = 1 ; j <=num ; j++)
            {
                if(num%j == 0)
                {
                    sum = sum+j ;
                }
            }
        }
        return sum;
}