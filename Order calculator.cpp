#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)return a;
   else return gcd(b, a % b);
}
int ord(int a,int b)
{
	int m=1;
	while(a%b !=1)
	{
		a=(a*a)%b;
		m++;
	}
	return m;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(gcd(a,b) !=1)printf("Undefined");
	else printf("%d",ord(a,b));
	return 0;
}
