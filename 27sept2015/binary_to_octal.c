#include <stdio.h>
void to_octal(char *,char *);
int valid(char *s)
{
	int i;
	for(i=0;s[i];i++)
		if(s[i]!='0'&&s[i]!='1')
			return 0;
	return i;
}
void main()
{
	char binary[100],octal[100];
	int k;
	printf("enter a binary number\n");
	scanf("%s",binary);
	k=valid(binary);
	if(k==0)
	{
		printf("invalid input");
		exit(0);
	}
	to_octal(binary,octal);
}
void to_octal(char *binary,char *octal)
{
	int i=0,j=0;
 while(binary[i]){
      binary[i] = binary[i]-'0';
      i++;
    }

    i--;
    while(i-2>=0){
    octal[j++] = binary[i-2] *4 +  binary[i-1] *2 + binary[i] ;
    i=i-3;
    }

    if(i ==1)
      octal[j] = binary[i-1] *2 + binary[i] ;
    else if(i==0)
      octal[j] =  binary[i] ;
    else
      --j;
      printf("octal number is:");
      while(j>=0)
        printf("%d",octal[j--]);

}



