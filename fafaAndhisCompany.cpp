#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,count=0;

	cin >> n;
	for(int i=1;i<n;i++)
	{
		if((n-i)%i==0)
		{
			count++;
		}
	}

	cout<<count<<endl;
}
