#include <iostream>
#include <vector>
typedef unsigned long long int ULI;

using namespace std;

class Dinosaur
{
    int size;
    string name;
    int b[5];
    
public:
    Dinosaur(string s,int max,int *addr):
        name(s),
        size(max)
        {
            for(int j=0;j<size;j++)
            {
                b[j]=*addr;
                addr+=1;
            }
        }
        void showData();    
        bool match(int *addr);
        
};

void Dinosaur::showData()
{
    cout<<name<<endl;
}

bool Dinosaur::match(int *addr)
{
    int k=0;
    for(int p=0;p<size;p++)
    { 
        if(b[p]!=*addr)
        { 
            k=1;
            return false;            
        }
                  addr+=1;
    }
    return true;
}


int main()
{
    ULI n,q;
    int k,l;
    vector<Dinosaur> dinList;
    vector<Dinosaur>::iterator iter;
    
    cin>>n>>k>>l>>q;
    ULI val=n;
    int a[k];
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0;i<k;i++)
            cin>>a[i];
         dinList.push_back(Dinosaur(s,k,a));       
    }
    while(q--)
    {   int flag=0,q=0;
        for(int i=0;i<k;i++)
            cin>>a[i];
      for(q=0;q<val;q++)
        {
            if(dinList[q].match(a))
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
            dinList[q].showData();
        else
            cout<<"You cant fool me :P"<<endl;        
    }
    
    return 0;
}
