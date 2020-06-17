#include<bits/stdc++.h>

using namespace std;
int a[1005][1005];
vector<int> List[100001];
int main()
{
    int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				List[i].push_back(j);
			}
		}
	}
	
	for(int i=n;i>=1;i--)
	{
		for(int j=List[i].size()-1;j>=0;j--)
		{
			if(i<List[i][j])
			{
				cout<<i<<" "<<List[i][j]<<endl;
			}
		}
	}
/*	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
			if(a[i][j]==1&&i<j)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}*/
}