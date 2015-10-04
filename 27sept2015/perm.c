#include<stdio.h>
#include<string.h>
void sort_string(char *);
void perm(char *,int,int);
int length(char *);
void main()
{
    int n, i, k = 0;
    char a[10] ;
    printf("Enter the number: ") ;
    scanf("%s", a) ;
    printf("\nThe permutation is :\n") ;
    n = length(a);
    sort_string(a);
    perm(a, k,n) ;
}
void perm(char a[10], int k, int n)
{
    char t, d[10] ;
    int i=0;
    if(k == n)
    {
        printf("%s\n",a);
        return ;
    }
    else
    {
        for(i = k ; i < n ; i++)
        {
            t = a[i] ;
            a[i] = a[k] ;
            a[k] = t ;
            strcpy(d, a) ;
            perm(d, k + 1, n) ;
        }
    }
}
void sort_string(char *s)
{
   int c, d = 0, len;
   char  *result, ch;

   len = length(s);

   result = (char*)malloc(length+1);

   for ( ch = '0' ; ch <= '9' ; ch++ )
   {
      for ( c = 0 ; c < len ; c++ )
      {
         if ( s[c] == ch )
         {
            result[d] =s[c];
            d++;
         }
      }
   }
   result[d] = '\0';

   str_cpy(s, result);
   free(result);
}
int length(char *s)
{
    int i;
    for(i=0;s[i];i++);
        return i;

}
void str_cpy(char *s,char *p)
{
    int i;
    for(i=0;s[i];i++)
        s[i]=p[i];
    s[i]='\0';
}

