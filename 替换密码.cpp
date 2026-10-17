#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d\n",&n);
	char str[1001];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') len++;
    if (len > 0 && str[len - 1] == '\n')
        str[--len] = '\0';
    
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] != ' ' && str[i] != '\t')
            str[j++] = str[i];
    }
    str[j] = '\0';
    for(int k=0;k<j;k++)
    {
    	str[k]=(str[k]-'A'+n)%26+'A';
    	printf("%c",str[k]);
    	if((k-4)%5==0 && k!=j-1) printf(" ");
	}
	printf("\n");
	return 0;
}
