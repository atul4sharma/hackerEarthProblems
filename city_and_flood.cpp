#include <iostream>
#include <algorithm>
#include <map>
typedef unsigned long long int ULLI;

using namespace std;

int main()
{
    ULLI n,k,dominant,submissive;
    map<ULLI,int> m;
    map<ULLI,int>::iterator iter;
    
    cin>>n;
    for(ULLI i=0;i<n;i++)
        m.insert(make_pair(i+1,1));
    
    cin>>k;
    while(k--)
    {
        cin>>dominant>>submissive;
            iter=m.find(submissive);
            m.erase(iter);
    }
        
    ULLI count=0;
    iter=m.begin();
    while(iter!=m.end())
    {
  //      cout<<iter->first<<" "<<iter->second<<endl;
    count++;
        iter++;
    }
    cout<<count<<endl;

    
    return 0;
}

        
    
