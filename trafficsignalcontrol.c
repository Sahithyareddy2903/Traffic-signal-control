#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int count=0,r=-1,f=0;
char cq[10];
void cinsert(char);
void cdisplay();
void main()
{
	int i;
	char d;
	system("cls");
	for(i=1;i<=3;i++)
	{
		printf("Enter signal colour %d\n",i);
		fflush(stdin);
		d=getche();
		printf("\n");
		cinsert(d);
	}
	printf("The traffic signal is seen as :\n");
	cdisplay();
	getch();
}
void cinsert(char d)
{
	r=(r+1)%3;
	cq[r]=d;
	count++;
}
void cdisplay()
{
	int k,i,t=0;
	while(t<10)
	{
		for(i=0,k=f;i<count;i++)
		{
			if(cq[k]=='r')
			printf("red->");
			else if(cq[k]=='y')
			printf("yellow->");
			else if(cq[k]=='g')
			printf("green->");
			k=(k+1)%3;
		}
		t++;
	}
}
