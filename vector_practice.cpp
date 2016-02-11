#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student
{
    int roll_no;
    string name;
public:
    student(){ roll_no=0; name="";}
    student(int x,string y){ roll_no=x; name=y;}
    void show_data()
    {
        cout<<"\nRoll No : "<<roll_no<<" Name : "<<name<<endl;        
    }
};

int main()
{
    vector<char> v1;
    vector<char>::iterator iter;

    for(int i=0;i<10;i++)
        v1.push_back(i+'a');
    
    cout<<"V1 originally : "<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl<<endl;
    
    iter=v1.begin()+5;
    
    v1.insert(iter,10,'x');
    
    
    cout<<"V1 after inserting : "<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl<<endl;
    
    iter=v1.begin()+5;
    v1.erase(iter,iter+10);
    
    cout<<"V1 after removing : "<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl<<endl;
  
    string s="hello everyone";
    vector<char> v2;
    
    for(int i=0;i<s.length();i++)
        v2.push_back(s[i]);
    
    iter=v1.begin()+5;
    v1.insert(iter,v2.begin(),v2.end());
    
     cout<<"V1 after adding hello everyone : "<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl<<endl;

    for(vector<char>::iterator i=v1.begin();i<v1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    
    /* object insertion practice*/
    cout<<"Object Practice : "<<endl;
    
   vector<student> v3;
   v3.push_back(student());
   v3.push_back(student(1,"ATUL SHARMA "));
   cout<<"V3 : ";
   for(int i=0;i<v3.size();i++)
       v3[i].show_data();
   
    
    
    return 0;
       
}
