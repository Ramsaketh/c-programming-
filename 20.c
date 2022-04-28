#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1;
	char ch;
	int x;
	fp1=fopen("any1.txt","w");
	printf("\n Enter some text into file :\n");
	while((ch=getchar())!='.')
	fputc(ch,fp1); fclose(fp1);
	fp1=fopen("any1.txt","r");
	if(fp1==NULL)
	{ 
		printf("\n cannot open file:");
		exit(1);
	}
	fseek(fp1,- 1L,2);
	x=ftell(fp1);
	
	printf("\n The text in the file in reverse order is : \n");
	
	while(x>=0)
	{
		ch=fgetc(fp1);
		printf("%c",ch);
		x--;
		fseek(fp1,x,0);
	}
	fclose(fp1);
}