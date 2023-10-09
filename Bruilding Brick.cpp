//Find all ways to build a wall
#include<bits/stdc++.h>
using namespace std;
int FindAllWays(int n)
{
	if(n==0) return 1;
	int vert=0,hori=0;
	vert=FindAllWays(n-1);
	if(n>=4)
	{
		hori=FindAllWays(n-4);
	}
	return vert+hori;
}
int main(){
	int n;
	cin>>n;
	cout<<FindAllWays(n);
	return 0;
}
