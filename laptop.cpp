#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    vector<string> v;

        unsigned long int n;
        int k;
        vector<string> result;
        cin>>n;
        unsigned long int count[n];
        for(unsigned long int i=0;i<n;i++)
            count[i]=0;
        while(n--)
        {   string s;
            cin>>s;
            k=1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==s)
                {
                    count[i]=count[i]+1;
                    k=0;
                    break;
                }
            }
            if(k==1)
            { v.push_back(s);
                count[v.size()-1]+=1;
            }
            
        }
        unsigned long int maxVal=0;
        vector<unsigned long int> maxIndex;
        
        
        for(unsigned long int i=0;i<v.size();i++)
        {   if(count[i]==maxVal)
            {
                //result.push_back(v[i]);
                maxIndex.push_back(i);
            }
            else if(count[i]>maxVal)
            {
               // result.clear();
                maxIndex.clear();
               // result.push_back(v[i]);
                maxIndex.push_back(i);
                maxVal=count[i];
            }
            
           
        }
    
    for(unsigned long int i=0;i<maxIndex.size();i++)
        result.push_back(v[maxIndex[i]]);
    
    sort(result.begin(),result.end());
    
    for(unsigned long int i=0;i<result.size();i++)
        cout<<result[i]<<endl;
    
    return 0;
    
}
