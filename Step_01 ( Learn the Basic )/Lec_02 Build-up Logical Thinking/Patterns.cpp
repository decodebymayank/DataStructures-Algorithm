#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Pattern 1

    int n = 3;
    for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cout << "* " ;
		}

		cout << endl;
	}

    //Pattern 2 

    for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j <=i ; j++)
		{
			cout << "* " ;
		}

		cout << endl;
	}

    //Pattern 3 

    int val = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j <=i ; j++)
		{
			cout << ++val << " ";
		}
		val = 0 ;
		cout << endl;
	}

    //Pattern 4

    int value = 0 ;

	for(int i = 0 ; i < n ; i++)
	{	
		++value;
		for(int j = 0 ; j <=i ; j++)
		{
			cout << value << " " ;
		}
		cout << endl;
	}

    //Pattern 5

    int start = n - 1 ;

	for(int i = start ; i >=0 ; i--)
	{
		for(int j = 0 ; j <=i ; j++)
		{
			cout << "*" << " " ;
		}
		cout << endl;
	}

    //Pattern 6 
    int value = 0 ;

    int start = n - 1 ;

    for(int i = start ; i >=0 ; i--)
    {
        for(int j = 0 ; j <=i ; j++)
        {
            ++value ;
            cout << value << " " ;
        }
        value = 0 ;
        cout << endl ;
    }

    // //Pattern 7 

     int end = n - 1 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int space = end ; space>i ; space--)
        {
            cout << " " ;
        }

        for(int star = 0 ; star < (i*2+1) ; star++)
        {
            cout << "*" ;
        }

        for(int space = end ; space>i ; space--)
        {
            cout << " " ;
        }

        cout << endl;
    }

    // //Pattern 8 

    int value = n ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int space = 0 ; space < i ; space++)
        {
            cout << " " ;
        }

        for(int star = 0 ; star < ( (value*2) - 1 ) ; star++)
        {
            cout << "*" ;
        }
            
        --value ;
        for(int space = 0 ; space < i ; space++)
        {
            cout << " " ;
        }

        cout << endl;
    }

    //Pattern 9

     
     int end = n - 1 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int space = end ; space>i ; space--)
        {
            cout << " " ;
        }

        for(int star = 0 ; star < (i*2+1) ; star++)
        {
            cout << "*" ;
        }

        for(int space = end ; space>i ; space--)
        {
            cout << " " ;
        }

        cout << endl;
    }

    int value = n ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int space = 0 ; space < i ; space++)
        {
            cout << " " ;
        }

        for(int star = 0 ; star < ( (value*2) - 1 ) ; star++)
        {
            cout << "*" ;
        }
            
        --value ;
        for(int space = 0 ; space < i ; space++)
        {
            cout << " " ;
        }

        cout << endl;
    }



    //Pattern 10

     int starvalue = 0 ;
    int spacevalue = 0 ;
    for(int i = 0 ; i < ( (n*2) - 1 ) ; i++)
    {
        if(i<n)
        {
            for(int star = 0 ; star <= i ; star++)
            {
                cout << "*" ;
            }

            for(int space = n-1 ; space > i ; space--)
            {
                cout << " ";
            }
            cout << endl;
        }
        else
        {
            int svalue = ++starvalue;
            for(int star = 0 ; star < (i-svalue) ; star++)
            {
                cout << "*";
            }

            for(int space = 0 ; space < (i-(++spacevalue)) ; space++)
            {
                cout << " ";
            }
            ++starvalue;
            ++spacevalue;
            cout << endl;
        }
    }

    //Pattern 12

    int countvalue = 0 ;
    int newval = n;
    for(int i = 0 ; i < n ; i++)
    {
        for(int star = 0 ; star < i+1 ; star++)
        {
            cout << ++countvalue << " " ;
        }

        

        for(int space = 0 ;  space < ((2*newval)) ; space++)
        {
            cout << " " ;
        }

        --newval;
        int newstar = countvalue;
        for(int star = 0 ; star < i+1 ; star++)
        {
            cout << newstar << " " ;
            newstar--;
        }
        countvalue = 0 ;
        cout << endl;
    }


    return 0;
}