#include <iostream>
using namespace std;

int main()
{

int t;
int n,x,count;
bool check[10];
cin>>t;
while(t--)
{count=0;
	cin>>n;
	for(int i=0;i<10;i++)
	check[i]=false;
	for(int i=0;i<n;i++)
	{cin>>x;
	
		if(check[(x%10)]==true)
		count+=1;
		else
		check[(x%10)]=true;
	}
	cout<<count<<endl;
}
    return 0;
}
