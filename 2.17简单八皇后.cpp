#include<bits/stdc++.h>

using namespace std;

int chess[8][8]={0};

int main()
{
	int num[8]={0}, i, j, k, flag=0;
	
	char get[8];
	
	scanf("%s",get);
	
	for(i=0;i<8;i++)
	{
		if(get[i]=='*')
		{
			continue;
		}
		
		if(get[i]>=48&&get[i]<=57)
		{
			num[i] = get[i] - 48;
		}
	}
	
	for(i=0;i<8;i++)
	{
		if(num[i]!=0)
		{
			for(j=0;j<8;j++)
			{
				chess[i][j] = 1;
				
				chess[j][num[i]-1] = 1;
				
				if(i-j>=0&&num[i]-1-j>=0)
				{
					chess[i-j][num[i]-1-j] = 1;
				}
				
				if(i-j>=0&&num[i]-1+j<8)
				{
					chess[i-j][num[i]-1+j] = 1;
				}
				
				if(i+j<8&&num[i]-1-j>=0)
				{
					chess[i+j][num[i]-1-j] = 1;
				}
				
				if(i+j<8&&num[i]-1+j<8)
				{
					chess[i+j][num[i]-1+j]=1;
				}
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(chess[i][j]==0)
			{
				flag = j + 1;
				
				break;
			}
		}
	}
	
	if(flag!=0)
	{
		printf("%d\n",flag);
	}
	else
	{
		printf("No Answer\n");
	}
}
