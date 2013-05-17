#include<stdio.h>
#include<string.h>
int com(char a[],char b[])
{
	int lena=strlen(a),lenb=strlen(b);
	if(lena>lenb) return 1;
	if(lena<lenb) return -1;
	return strcmp(a,b);
}
void add(char a[],char b[])
{
    char c[1000],t;
    int lena,lenb,i;
    lena=strlen(a);
    for(i=0;i<lena/2;i++)
    {
        t=a[i];
        a[i]=a[lena-1-i];
        a[lena-1-i]=t;
    }
    lenb=strlen(b);
    for(i=0;i<lenb/2;i++)
    {
        t=b[i];
        b[i]=b[lenb-1-i];
        b[lenb-1-i]=t;
    }
    if(lenb>lena)
    {
        for(i=lena;i<lenb;i++)
            a[i]='0';
        a[i]='\0';
    } 
    else if(lenb<lena)
    {
        for(i=lenb;i<lena;i++)
            b[i]='0';
        b[i]='\0';
    }
    lenb=strlen(b);
    int k=0;
    for(i=0;i<lenb;i++)
    {
        c[i]=((a[i]-'0')+(b[i]-'0')+k)+'0';
        k=(c[i]-'0')/10;
        c[i]=(c[i]-'0')%10+'0';
    }
    if(k>0)
        c[i++]=k+'0';
    c[i]='\0';
    lena=strlen(c);
    for(i=0;i<lena/2;i++)
    {
        t=c[i];
        c[i]=c[lena-1-i];
        c[lena-1-i]=t;
    }
    lenb=strlen(b);
    for(i=0;i<lenb/2;i++)
    {
        t=b[i];
        b[i]=b[lenb-1-i];
        b[lenb-1-i]=t;
    }
    strcpy(a,b);
    strcpy(b,c);
}

int main()
{
    char a[1000]="1",b[1000]="1",c[1000],star[1000],end[1000];
    int i,s=0;
    while(scanf("%s %s",star,end))
    {
		if(strcmp(star,"0")==0&&strcmp(end,"0")==0)
			break;
		s=0;
        strcpy(a,"1");
        strcpy(b,"2");
        for(i=0;;i++)
		{
			if(com(star,a)<=0&&com(end,a)>=0)
				s++;
			if(com(end,a)<0)
				break;
			add(a,b);
		}
        printf("%d\n",s);
    }
    return 0;
}