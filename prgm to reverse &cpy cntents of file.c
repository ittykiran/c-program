#include<stdio.h>
#include<errno.h>
long count_characters(FILE*);
void main()
{
	int i;
	long count;
	char ch1,ch2;
	FILE *fp1,*fp2;
	fp1=fopen("readingfile.c","r");
	fp2=fopen("reverse_char_file.c","w");
	count=count_characters(fp1);
	fseek(fp1,-1L,2);
	while(count)
	{
		ch1=fgetc(fp1);
		fputc(ch1,fp2);
		fseek(fp1,-2L,1);
		count--;
	}
	fclose(fp1);
	fclose(fp2);
	
}
long count_characters(FILE *fp)
{
	long length;
	fseek(fp,-1L,2);
    length=ftell(fp);
    length++;
	return length;
}
