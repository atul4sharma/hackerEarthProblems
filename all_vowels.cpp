#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    unsigned int n;
    int k=0;
    cin>>n;
    map<char,unsigned int> m;
    map<char,unsigned int>::iterator iter;
   
        m.insert(make_pair('a',0));
    	m.insert(make_pair('e',0));
    	m.insert(make_pair('i',0));
    	m.insert(make_pair('o',0));
    	m.insert(make_pair('u',0));    	
        string s;
        cin>>s;
        for(unsigned int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                iter=m.find(s[i]);
                iter->second+=1;
            }
        }    
            iter=m.begin();
            k=0;
            while(iter!=m.end())
            {
                if(iter->second==0)
                {
                    k=1;
                    break;
                }
                iter++;
            }
        
    if(k==1)
      cout<<"NO"<<endl;
     else
       cout<<"YES"<<endl;

    
    return 0;
}
