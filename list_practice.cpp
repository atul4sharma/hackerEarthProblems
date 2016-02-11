#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    list<int>::iterator iter;
    
    for(int i=0;i<10;i++)
        l.push_back(i);
    
    cout<<"LIST is : "<<endl;
    iter=l.begin();
    while(iter!=l.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;
    
    cout<<"Reversed LIST is : "<<endl;
    iter=l.end();
    while(iter!=l.begin())
    {  iter--;
        cout<<*iter<<" ";   
    }
    cout<<endl<<endl;
    
    l.erase(l.begin(),l.end());
    cout<<"List has been erased "<<endl;
    srand(time(NULL));
    for(int i=0;i<10;i++)
        l.push_back(rand()%100);
  
    cout<<"new LIST is : "<<endl;
    iter=l.begin();
    while(iter!=l.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;
    
    l.sort();
    
   cout<<"sorted LIST is : "<<endl;
    iter=l.begin();
    while(iter!=l.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;
    
    l.erase(l.begin(),l.end());
    list<int> l2;
    for(int i=0;i<10;i+=2)
        l.push_back(i);
    
    for(int i=1;i<11;i+=2)
        l2.push_back(i);
    
  cout<<"LIST l  is : "<<endl;
    iter=l.begin();
    while(iter!=l.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;

    cout<<"LIST l2  is : "<<endl;
    iter=l2.begin();
    while(iter!=l2.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;
    
    cout<<"MERGING LIST l and l2 "<<endl;
    l.merge(l2);
    
  cout<<"LIST l is : "<<endl;
    iter=l.begin();
    while(iter!=l.end())
    {   cout<<*iter<<" ";
        iter++;
    }
    cout<<endl<<endl;

    
    
    return 0;
}