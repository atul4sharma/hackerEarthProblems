#include <iostream>
#define MAX 1000001

using namespace std;

int main()
{
 int t;
 unsigned long int n,count;
 cin>>t;
 while(t--)
 {count=0;
 	cin>>n;
 unsigned long int a[n],b[n];
 int food[MAX];
 for(int i=0;i<MAX;i++)
    food[i]=0;
 	for(int i=0;i<n;i++)
 	{
            cin>>a[i]>>b[i];
 	    food[a[i]]+=1;
 	
       
        if(food[b[i]]==0)
            count+=1;
        else
            food[b[i]]-=1;
        
            //cout<<"count "<<count<<endl;
 	
 	}
 	cout<<count<<endl;
 }
     return 0;
}