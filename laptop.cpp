#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	vector<string> V;
	map<string, int> M;
	map<string, int> :: iterator it;
	for(int i=0;i<N;i++)
	{
		string S;
		cin>>S;
		if(M.find(S)==M.end())
		{
			M[S]=1;
		}
		else
		{
			M[S]++;
		}
	}
	int maxx=-1;
	string ans;
	for(it=M.begin();it!=M.end();++it)
	{
		if(it->second> maxx)
		{
			maxx=it->second;
			ans=it->first;
		}
	}
	for(it=M.begin();it!=M.end();++it)
	{
		if(it->second== maxx)
		{
			V.push_back(it->first);
		}
	}
	sort(V.begin(), V.end());
	cout<<V[0]<<endl;
	return 0;
}