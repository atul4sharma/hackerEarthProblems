#include <string>
#include <iostream>
#include <vector>

using namespace std;

int compare(string,string);

int main()
{
 int n,max=0;
 
 int count[51];
 for(int i=0;i<52;i++)
     count[i]=0;
 cin>>n;
 vector<string> v[52];
 while(n--)
 {  string s;
 
 	cin>>s;
        v[s.length()].push_back(s);
      //  cout<<s.length()<<" ";
    for(int i=0;i<v[s.length()].size();i++)
    {
        if(compare(v[s.length()][i],s)==1)
        {count[s.length()]+=1;
            break;}
    }
    
		
 }
 for(int i=0;i<50;i++)
 {
 	if(count[i]>max)
 	max=count[i];
 }
 
 cout<<max<<endl;
    return 0;
}


int compare(string a,string b)
{   int k;
    for(int i=0;i<a.length();i++)
    {   k=1;
        for(int j=0;j<b.length();j++)
        {   if(a[i]==b[j])
            {
                k=0; 
                break;
            }
            
        }
        if(k==1)
        {break;
          }
            
    }
    
    if(k==1)
        return 0;//means string has different alphabets
    else
        return 1;//means string is permuted
}