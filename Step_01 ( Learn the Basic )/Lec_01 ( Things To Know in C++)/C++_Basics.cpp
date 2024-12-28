#include<bits/stdc++.h>
using namespace std;

//Creating a function
void printsomething()
{
    cout << "Hey What's Up";
}

void parafunc(string s)
{
    cout << "My Name is : " << s << endl;
}

void sumofnum(int a , int b)
{
    cout << "Sum of two numbers is : " << a+b << endl;
}

void somefunc(int val)
{
    cout << "some value is : " << val << endl;

    val+=100;
    cout << "New value is : " << val << endl;

}
int main()
{
    //Printing something
    cout << "hello world" << "\n";
    cout << "New Line" << endl;
    cout << "Again new print statement" << endl;

    //Taking input
    int x , y;
    cin >> x >> y;
    cout << "Value of x is : " << x << endl;
    cout << "Value of y is : " << y << endl;


    //DataType
    string st ;
    cin >> st;
    cout << "Value of s : " << st << endl;

    //When u want whole string together which is in that line
    string s;
    getline(cin , s);
    cout << s <<endl ;

    char ch = 'M';
    cin >> ch ;
    cout << ch << endl;

    //If-else statement
    int x ;
    cin >> x ;

    if(x>18)
    {
        cout << "You are adult" << endl;
    }
    else if(x==18)
    {
        cout << "You are going to Adult" << endl;
    }
    else
    {
        cout << "Not Adult" << endl;
    }

    //Switch Statements

    int x ;
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Hi There" ;
            break ;
        case 2:
            cout << "Hello";
            break;
        case 3 :
            cout << "What's Up";
            break;
        default:
            cout << "Invalid Case";
    }


    //Arrays & Strings
    //1-D Array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;

    arr[2] = 99;
    cout << arr[2];

    //2-D Array
    int newarr[3][5];
    newarr[1][2] = 199; 
    cout << newarr[1][2] << endl;

    string s = "Shivayee Oberoi";
    int length = s.size();

    cout << "length of string is : " << length << endl;
    cout << s[3] << endl;

    //For Loop

    for(int i = 0 ; i < 10 ; i++)
    {
        cout << "Index no is : " << i << endl;
    }

    //  While Loop
     int i = 0 ;
     while(i<10)
     {
        cout << "While Loop Index " << i << endl;
        i++;
     }   

    // Do-While Loop
    int x = 0 ;
    do
    {
        cout << "Do-While Loop Index : " << x << endl;
        x++;
    }
    while(x<10);

    //Functions Pass By Value And By Reference

    string news;
    cin >> news ;
    printsomething();

    cout << endl;

    parafunc("Mayank");

    int x , y ;
    cin >> x >> y ;
    sumofnum(x,y);

    //Some in-built function
    cout << "Max value is : "<< max(x,y) << endl;
    cout << "Min value is : "<< min(x,y) << endl;


    int y = 100;
    somefunc(y);
    cout << "After calling somefunc value is :  " << y << endl;


    return 0;
}