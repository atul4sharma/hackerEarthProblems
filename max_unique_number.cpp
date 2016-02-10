#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	map<int,int> M;
	map<int,int> :: iterator it;
	for(int i=0;i<N;i++)
	{
		int num;
		cin>>num;
		if(M.find(num)==M.end())
			M[num]=1;
		else
			M[num]++;
	}
	int maxx=INT_MIN;
	for(it=M.begin();it!=M.end();++it)
	{
		if(it->second==1)
		{
			maxx=max(maxx, it->first);
		}
	}
	if(maxx==INT_MIN)
		cout<<-1<<endl;
	else
		cout<<maxx<<endl;
	return 0;
}