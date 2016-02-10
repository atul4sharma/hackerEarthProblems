#include <iostream>
using namespace std;

int main()
{
unsigned long int n,count=0,top;
int x;
    cin>>n;
    top=-1;
    int a[n+1];
    while(n--)
    {
            cin>>x;
            if(x==0)
               top-=1; //pop();
            else
            {
                top+=1;
                a[top]=x;
            }
    }
    
    for(int i=0;i<=top;i++)
        count+=a[i];
    
    cout<<count<<endl;
    return 0;
}
