#include <string>
#include <iostream>
using namespace std;

int main()
{
 int n,max=0;
 
 int count[51];
 for(int i=0;i<52;i++)
     count[i]=0;
 cin>>n;
 while(n--)
 {string s;
 
 	cin>>s;
      //  cout<<s.length()<<" ";
	count[s.length()]+=1;
		
 }
 for(int i=0;i<50;i++)
 {
 	if(count[i]>max)
 	max=count[i];
 }
 
 cout<<max<<endl;
    return 0;
}