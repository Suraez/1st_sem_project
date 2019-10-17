#include<stdio.h>
#include<string.h>
int main ()
{
    char name[20];
       char des[30],des1[50];
    FILE *fp,*fp1,*fp2,*fp3;
    char s1[50],s2[50];
    char ck,c,m;
    int r,count=0;
    printf("enter the name of source file\n");
    gets(name);
   printf("enter the name of destination file\n");
   gets(des);
  fp=fopen(name,"r");
    if (fp==NULL){
    	printf("file can't be opened successfully\n");
    	return 0;
	} 
        fp1=fopen(des,"r");
        printf("enter the name of ouput file\n");
        gets(des1);
        fp2=fopen(des1,"w");
       while(fscanf(fp1,"%s",s2)!=EOF){
            fscanf(fp,"%s",s1);
            r=strcmp(s1,s2);
            if(r==0)
                fprintf(fp2,"%s ",s1);
            if (r!=0){
                count++;
                fprintf(fp2,"#%s ",s2);
        }}
        printf("The no of unmatched word is %d\n",count);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}


