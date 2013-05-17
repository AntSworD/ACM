#include<stdio.h>
int main()
{
	int t,p;
	scanf("%d",&t);
	p=0;
	while(t--)
	{
		char f1[30],f2[30];
		__int64 s[26][52];
		int i,j,a[26],k;
		p++;
		for(i=0;i<26;i++)
			for(j=0;j<51;j++)
				s[i][j]=0;
		scanf("%s %s",f1,f2);
		k=0;
		for(i=0;f1[i];i++)
		{
			s[f1[i]-'a'][1]++;
			if(s[f1[i]-'a'][1]==1)
			{
				a[k]=f1[i]-'a';
				k++;
			}
		}
		for(i=0;f2[i];i++)
		{
			s[f2[i]-'a'][2]++;
			if(s[f2[i]-'a'][2]==1)
			{
				a[k]=f2[i]-'a';
				k++;
			}
		}
		a[k]=-1;
		for(i=3;i<51;i++)
			for(k=0;a[k]!=-1;k++)
				s[a[k]][i]=s[a[k]][i-1]+s[a[k]][i-2];
		scanf("%d",&j);
		printf("Case %d-->\n",p);
		for(i='a';i<='z';i++)
			if(s[i-'a'][j+1]!=0)
			printf("%c:%I64d\n",i,s[i-'a'][j]);
		if(t)
			printf("\n");
	}
	return 0;
}