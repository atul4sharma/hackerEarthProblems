#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char,int> m;
    map<char,int>::iterator iter;
    char ch;
    
    for(int i=0;i<26;i++)
      /*  m.insert(pair<char,int>('A'+i,i+65)); */ 
      m.insert(make_pair((char)('A'+i),65+i)); //maps automatically according to the input parameters
      
    
    iter=m.begin();
    while(iter!=m.end())
    {
        cout<<iter->first<<" "<<iter->second<<endl;
        iter++;
    }
    cout<<endl;
    return 0;
}
