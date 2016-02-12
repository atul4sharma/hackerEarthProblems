#include <bits/stdc++.h>
typedef unsigned long long int ULLI;
using namespace std;

int main()
{
    ULLI n,m,prod;
    map<char,ULLI> M;
    map<char,ULLI>::iterator iter;
    // [V, N, G, T, S, B, P] 
     
    M.insert(pair<char,ULLI>('V',0));
    M.insert(pair<char,ULLI>('N',0));
    M.insert(pair<char,ULLI>('G',0));
    M.insert(pair<char,ULLI>('T',0));
    M.insert(pair<char,ULLI>('S',0));
    M.insert(pair<char,ULLI>('B',0));
    M.insert(pair<char,ULLI>('P',0));
    
    cin>>n;
    char s[n];
    for(ULLI i=0;i<n;i++)
    {
        cin>>s[i];
        M[s[i]]+=1;
    }
    
    char order[3];
    cin>>m;
    for(ULLI i=0;i<m;i++)
    {   prod=1;
        
        for(int j=0;j<3;j++)
        {
            cin>>order[j];
            prod*=M[order[j]];
            
        }
        if(prod!=0)
        {
            M[order[0]]--;
            M[order[1]]--;
            M[order[2]]--;
        }
        cout<<prod%1000000007<<endl;
    }
    
    /*
    
    iter=M.begin();
    for(iter=M.begin();iter!=M.end();iter++)
        cout<<iter->first<<" "<<iter->second<<endl;
    
    */
    
    return 0;
}
