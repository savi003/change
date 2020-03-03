/* 	LINEARSEARCH USING RECURSION
   	ROLL NO:44 
   	THOMASAVIO 
*/
#include<stdio.h>
void readnum(int[],int);
int search(int[],int,int,int);
void main()
	{
	int a[100],n,key,pos;
	printf("how many numbers?\n");
	scanf("%d",&n);
	readnum(a,n);
	printf("enter the number to search\n");
	scanf("%d",&key);
	pos=search(a,0,n,key);
	if(pos==0){printf("not found\n");}
	else{printf("element present at position=%d\n",pos);}
	}
void readnum(int x[],int n)
	{
	int i;
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&x[i]);
		}
	}
int search(int a[],int f,int l,int key)
	{
	if(f!=l)
		{
		if(a[f]!=key)
			{
			search(a,f+1,l,key);
			}
		else if (a[f]==key)
			{
			return(f+1);
			}
		}
	else if(f==l&&a[l]==key)
		{
		return(l+1);
		}
	else
		{
		return(0);
		}
	}
