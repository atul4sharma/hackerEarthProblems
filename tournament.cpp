#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	map<string, int> M;
	map<string, int> :: iterator it;
	for(int i=0;i<N;i++)
	{
		string a,b;
		cin>>a>>b;
		M[a]+=1;
		M[b]+=1;
	}
	int max=-1;

        vector<string> V;
	
        for(it=M.begin();it!=M.end();++it)
	{
		if(it->second >max)
			max=it->second;
	}

	for(it=M.begin();it!=M.end();++it)
        {
		if(it->second == max)
			V.push_back(it->first);
	}
	cout<<V.size()<<endl;
	sort(V.begin(),V.end());
	for(int i=0;i<V.size();i++)
		cout<<V[i]<<endl;
	return 0;
}