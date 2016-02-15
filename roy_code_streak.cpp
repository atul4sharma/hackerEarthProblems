#include <bits/stdc++.h>
typedef unsigned long int ULI;

using namespace std;

bool find(vector<ULI>::iterator start,vector<ULI>::iterator last,ULI val)
{
    vector<ULI>::iterator newIterator;
    newIterator=start;
    while(newIterator!=last)
    {
        if(*newIterator==val)
            return true;
        newIterator++;
    }
    return false;
}

int main()
{
    unsigned int t;
    ULI n,s;
    bool r;
    vector<ULI> Abandon;
    vector<ULI> Correct;
    vector<ULI>::iterator iter;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>s>>r;
            if(r==false||find(Correct.begin(),Correct.end(),s))
                Abandon.push_back(s);
            else
            {
                if(!(find(Abandon.begin(),Abandon.end(),s)||find(Correct.begin(),Correct.end(),s)))
                    Correct.push_back(s);
            }
        }
   /*     cout<<"CORRECT : ";
        for(ULI i=0;i<Correct.size();i++)
            cout<<Correct[i]<<"  ";
        cout<<"ABANDON : ";
        for(ULI i=0;i<Abandon.size();i++)
            cout<<Abandon[i]<<" ";
 */       cout<<Correct.size()<<endl;
        Correct.erase(Correct.begin(),Correct.end());
        Abandon.erase(Abandon.begin(),Abandon.end());
    }
    return 0;
}
