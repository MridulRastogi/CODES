#include<stdio.h>
int main()
{
	int m,nd,comb,i;

	scanf("%d",&m);         //Number of Specialists
	char V[m];
	scanf("%s",&V);

	scanf("%d",&nd);        //Number of Dishes
	char d[nd][3];

	for(i=0;i<nd;i++)
		scanf("%s", &d[i][0], &d[i][1], &d[i][2]);
    puts(d);
	int v=0,n=0,g=0,t=0,s=0,b=0,p=0,x,y,z;
	for(i=0;i<m;i++)                        //Counting V,N,G,T,S,B,P
	{
		if(V[i]=='V')
			v++;
		else if(V[i]=='N')
			n++;
		else if(V[i]=='G')
			g++;
		else if(V[i]=='T')
			t++;
		else if(V[i]=='S')
			s++;
		else if(V[i]=='B')
			b++;
		else if(V[i]=='P')
			p++;
	}
	for(i=0;i<nd;i++)
	{
		if(d[i][0]=='V' || d[i][0]=='N')        //For V and N
		{
			if(d[i][0]=='V')
				{
					x=v;
					v=v-1;
				}
			else if(d[i][0]=='N')
				{
					x=n;
					n=n-1;
				}
		}
		if(d[i][1]=='G' || d[i][1]=='T')        //For G and T
		{
			if(d[i][1]=='G')
				{
					y=g;
					g=g-1;
				}
			else if(d[i][1]=='T')
				{
					y=t;
					t=t-1;
				}
		}
		if(d[i][2]=='S' || d[i][2]=='B' || d[i][2]=='P')    //For S , B and P
		{
			if(d[i][2]=='S')
				{
					z=s;
					s=s-1;
				}
			else if(d[i][2]=='B')
				{
					z=b;
					b=b-1;
				}
			else if(d[i][2]=='P')
				{
					z=p;
					p=p-1;
				}
		}
		comb=x*y*z;
		printf("%d\n",comb);
	}
    return 0;
}
