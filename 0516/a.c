#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char a[20],b[20];
	char buf[30];
	FILE *fp;
	printf("파일을 입력해주세요.");
	scanf("%s",a);
	if (fp = fopen(a, "r")) {
	memset(buf, 0 , sizeof(buf));
	printf("라인번호를 입력해주세요.");
	scanf("%d",&i);
	if (i==1) fseek(fp,0,SEEK_SET);
	else if (i==2) fseek(fp,8,SEEK_SET);
	else if (i==3) fseek(fp,19,SEEK_SET);
	else{
	       	printf("Line doesn't exist\n");
		return 0;
	}
	printf("찾고자 하는 단어를 입력해주세요.");
	scanf("%s",b);
		fseek(fp,15,SEEK_SET);
		fread(buf,sizeof(char),4,fp);
		printf("%s\n",buf);
	
	fclose(fp);
	return 0;
	}
	else printf("file doesn't exist\n");
}
