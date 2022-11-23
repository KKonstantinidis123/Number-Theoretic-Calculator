#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long int N;
	long long int p;
	scanf("%ld%ld",&N, &p);
	long long int ans=0;
	while(N%p==0)
	{
		ans++;
		N=N/p;
	}
	printf("%ld", ans);
	return 0;
}
