#include<stdio.h>
#include<stdlib.h>
void main(){
	int ms,ps,nop,np,rempages,i,j,x,y,pa,offset;
	int s[10],fno[10][20];
	printf("\nEnter the memory size:- ");
	scanf("%d",&ms);
	printf("\nEnter the page size:- ");
	scanf("%d",&ps);
	nop = ms/ps;
	printf("\nTheo of pages available in memory size are -- %d",nop);
	printf("\nEnter number of processes -- ");
	scanf("%d",&np);
	rempages = nop;
	for(i=1;i<=np;i++){
		printf("\nEnter no of pages required for p[%d]-- ",i);
		scanf("%d",&s[i]);
		if(s[i] > rempages){
			printf("\nMemory is full.");
			break;
		}
		rempages = rempages - s[i];
		printf("\nEnter page table for p[%d]--- ",i);
		for(j=0;j<s[i];j++)
			scanf("%d",&fno[i][j]);
	}
	printf("\nEnter logical address to find pysical address ");
	printf("\nEnter process no and pagenumber ad offset -- ");
	scanf("%d %d %d",&x,&y,&offset);
	if(x>np || y>=s[i] || offset>=ps)
		printf("\nInvalid process or page number or offset ");
	else{
		pa = fno[x][y]*ps+offset;
		printf("\nThe physical address is -- %d",pa);
	}
	
}
