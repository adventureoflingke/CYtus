#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[3][3], b[3][3], c[3][3], i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) ; 
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
	}
	
	return 0;
} 
