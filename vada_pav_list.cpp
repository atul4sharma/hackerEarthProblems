#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

typedef unsigned long long int ULI;

using namespace std;

int main()
{
       ULI count=0,n;
    scanf("%lu",&n);
    map<string,ULI> m;
    vector<string> v;
    map<string,ULI>::iterator iter;
    while(n--)
    {
        char s[5];
        scanf("%s",&s);
     //   printf("%s\n",s);
        
        map<string,ULI>::iterator key=m.find(s);
        if(key!=m.end())
            key->second+=1;
        else
        {
            m.insert(make_pair(s,1));
            v.push_back(s);
            count+=1;
        }
        
    }
    printf("%lu\n",count);
    
    iter=m.begin();
    while(iter!=m.end())
    {
        cout<<iter->first<<endl;
   // printf("%s %lu\n",iter->first,iter->second);
        iter++;
        
    }

    return 0;
}

        
    
