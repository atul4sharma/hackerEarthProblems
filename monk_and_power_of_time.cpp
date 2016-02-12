#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    unsigned int n,x,cost,temp;
    list<unsigned int> order,correctOrder;
    list<unsigned int>::iterator iter,newIter;
    
    cin>>n;
    for(unsigned int i=0;i<n;i++)
    {
        cin>>x;
        order.push_back(x);
    }
    
    for(unsigned int i=0;i<n;i++)
    {
        cin>>x;
        correctOrder.push_back(x);
    }
/*
        cout<<"INITIAL ORDER LIST : "<<endl;
    newIter=order.begin();
    while(newIter!=order.end())
    {cout<<*newIter<<" , ";
    newIter++;        
    }
    cout<<endl;
    
    */
 
           iter=correctOrder.begin();
    
    while(iter!=correctOrder.end())
    {
        if(order.front()!=correctOrder.front())
        {   
            //cout<<"IF ";
            temp=order.front();
            order.pop_front();
            order.push_back(temp);
            cost++;
        }
        else
        {
          //  cout<<"ELSE ";
            order.pop_front();
            correctOrder.pop_front();
            cost++;
        }
  
  
//     cout<<"LIST : "<<endl;
//     newIter=order.begin();
//     while(newIter!=order.end())
//     {cout<<*newIter<<" , ";
//     newIter++;        
//     }
//     cout<<endl;
  
           iter=correctOrder.begin();
    
    }
    cout<<cost<<endl;
    
  
    
    
    return 0;
}
