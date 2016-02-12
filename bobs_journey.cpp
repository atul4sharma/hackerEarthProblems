#include <iostream>
#include <string>
#include <vector>
#include <map>

typedef unsigned long long int ULLI;

using namespace std;

int main()
{
    unsigned int t,n;
    int k;
    string s;
    
    map<char,unsigned int> m;
    map<char,unsigned int>::iterator iter;
    
    cin>>t;
    
    while(t--)
    {
        m.clear();
        cin>>n;
        k=1;
        while(n--)
        {
            cin>>s;
            m[s[0]]+=1;
        }
     
//         iter=m.begin();
//         while(iter!=m.end())
//         {
//             cout<<iter->first<<" "<<iter->second<<endl;
//             iter++;
//         }
//      
     iter=m.begin();        
        while(iter!=m.end())
        {  // cout<<"WHILE ";
            if(iter->second!=1)
            {
                //cout<<"IF TRUE ";
                k=0;
                break;
            }
            
            iter++;
        }
        if(k==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
            
    
    return 0;
}
