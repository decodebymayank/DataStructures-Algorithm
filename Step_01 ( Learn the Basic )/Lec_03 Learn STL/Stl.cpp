#include<bits/stdc++.h>
using namespace std;

//Void Function
void f1()
{
    cout << "Hello" << endl;
}

//Parameterise function
void parafun(int a , int b)
{
    cout << a+b << endl;
}

int main()
{
    int a ;
    cin >> a ;

    f1();
    parafun(2,3);

    //Pair
    pair<int,int> p = {1,2};
    //accessing pair
    cout << p.first << " " << p.second;  

    //Vector
    vector<int> vec ;

    vec.push_back(100); //pushing value into a vector
    vec.push_back(49);
    vec.push_back(10);
    vec.emplace_back(200); //emplace_ack is faster than push_back

    //defining vector of pair datatype
    vector<pair<int,int>> p;
    
    // If elements were already there in a vector with some specific size
    vector<int> v(3,100);

    vector<int> newvec(5) ; // If only size pass in a vector

    vector<int> dupvec(v) ; //creating copy of v vector in dupvec

    cout << v[2] << endl; //Way of an accessing element in vector

    //Access vector element through iterator

    vector<int> :: iterator itr = dupvec.begin() ;

    itr++;
    cout << *(itr) << " " ;

    vector<int> :: iterator endvec = dupvec.end() ;
    endvec--;
    cout << *(endvec) << " " ;

    dupvec.erase(dupvec.begin()); // to delete single element

    //Inserting a value in a vector
    dupvec.insert(dupvec.begin(),10);

    dupvec.insert(dupvec.begin()+1,3,100); // to insert multiple elements

    vector<int> copiedvect(4,121) ; 

    dupvec.insert(dupvec.begin() , copiedvect.begin() , copiedvect.end()) ; // this will insert entire new vector in a another vector at particular position

    v.size() ; // give size of vector

    dupvec.swap(v) ; // It swaps vector element

    dupvec.clear() ; // It will clear vector

    //List

    list<int> li ;
    li.push_back(133) ;
    li.emplace_back(100) ;
    li.push_front(88); // It will directly add element at the front 
    
    //Deque :- eaxctly similar to list and vector
    deque<int> deq;

    //Stack :- only three functions are there in stack
    stack<int> st;
    st.push(100);
    st.push(2);
    st.emplace(00);

    //Queue
    queue<int> q;
    q.push(100);
    q.push(2);
    q.emplace(00);
    
    //Priority queue :- largest element will print at the top and inside it tree is maintained 
    priority_queue<int> pq;
    pq.push(21);
    pq.push(662);
    pq.push(123);
    pq.pop();
    pq.top();  // It will give maximum element

    //Priority queue which stores minimum element
    priority_queue<int, vector<int> , greater<int>> mpq;
    mpq.push(21);
    mpq.push(662);
    mpq.push(123);
    mpq.pop();
    mpq.top();

    //Set 
    set<int> st;
    st.push(213);
    st.push(77);
    st.push(90);

    //Multiset
    multiset<int> mt;
    mt.insert(21);
    mt.insert(10);

    //Map
    map<int,int> mp ;

    mp.insert({2,4});

    


}