#include<stdio.h>

int main ()

{
    char c,ch[51],ch1[51];
    int i,n,p,j,k,t;

    scanf("%d",&n);
    fflush(stdin);

    for (i=0;i<n;i++)
        {
            gets(ch);
            scanf("%d",&p);
            fflush(stdin);
            j= strlen(ch);

            for(k=0,t=0;k<j;k++)
            {
              ch1[k]=ch[k]-p;
              t=(int)ch[k]-p;

               if (t < 65)
              {
                  ch1[k]+=26;
                  t+=26;
              }
            }

          for(k=0;k<j;k++)
          {
              printf("%c",ch1[k]);

              if (k == j-1)
                printf("\n");
          }
           }


    return 0;
}
