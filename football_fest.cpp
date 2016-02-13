#include <bits/stdc++.h>
typedef unsigned long long int ULLI;

using namespace std;

int main()
{
    ULLI t,n,id;
    list<ULLI> FROM,TO;
    list<ULLI>::iterator iter;
    char ch;
    ULLI fromVal,toVal;
    
    cin>>t;
    while(t--)
    {
        FROM.clear();
        TO.clear();
        
        cin>>n>>id;
        TO.push_back(id);
        while(n--)
        {
            cin>>ch;
           /* fromIter=FROM.end();
            fromIter--;
            toIter=TO.end();
            toIter--;
           */ 
            
            if(ch=='P')
            {
                cin>>id;
                toVal=TO.back();
                FROM.push_back(toVal);
                TO.push_back(id);
            }
            else if(ch=='B')
            {
                fromVal=FROM.back();
                toVal=TO.back();
                FROM.push_back(toVal);
                TO.push_back(fromVal);
            }
        }
        cout<<"Player "<<TO.back()<<endl;
    }
    
    return 0;
}

            
                
                
                
            