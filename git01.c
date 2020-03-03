/* 	BINARYSEARCH USING FUNCTION
   	ROLL NO:44 
   	THOMASAVIO 
*/
#include<stdio.h>
void readnum(int[],int);
int binarysearch(int[],int,int,int);
void main()
	{
	int a[100],n,key,pos;
	printf("how many numbers?\n");
	scanf("%d",&n);
	readnum(a,n);
	printf("enter the number\n");
	scanf("%d",&key);
	pos=binarysearch(a,0,n-1,key);
	if(pos==0)
		{printf("not found\n");}
	else
		{printf("element present at position=%d\n",pos);}
	}
void readnum(int a[],int n)
	{
	int i;
	printf("enter the numbers IN sorted order\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	}
int binarysearch(int a[],int f,int l,int key)
	{
	int m;
	m=(f+l)/2;
   	if(f<=l)
		{
		if(a[m]==key)
				
			return(m+1);
		
		else 
			{if(a[m]>key)
			
			binarysearch(a,f,m-1,key);
			
			else 
			
			binarysearch(a,m+1,l,key);
			
		
 			}
		}
	else 
		{
		return(0);
		}
		
		
	}
