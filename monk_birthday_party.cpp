#include <iostream>
#include <map>
#include <string>
typedef unsigned long int ULI;

using namespace std;

int main()
{
    ULI n;
    int t;
    map<string,bool> m;
    map<string,bool>::iterator iter;
    cin>>t;
    while(t--)
    {
        m.clear();
        cin>>n;
        while(n--)
        {
            string s;
            cin>>s;
            m.insert(make_pair(s,true));
        }
        
        iter=m.begin();
        while(iter!=m.end())
        {
            cout<<iter->first<<endl;
            iter++;
        }
    }
    return 0;
}

    
