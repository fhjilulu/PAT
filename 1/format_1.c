//Calculate a+b and output the sum in standard format -- that is, 
//the digits must be separated into groups of three by commas (unless there are less than four digits).

//计算a+b并用标准格式输出和，输出数字每三个用逗号隔开（除非数字小于四位）


#include<stdio.h>
#include<string.h>

int main()
{
    char sum[100];
    int a,b,s=0;
    while(scanf("%d %d",&a,&b) !=EOF)
    {
        s=a+b;
    }
    if(s<0)
    {printf("-");s=-s;}
    sprintf(sum,"%d",s);
    int l,i;
    l=strlen(sum);
    for(i=0;i<l;i++)
       {
            putchar(sum[i]);
            if((l-i-1)%3==0 && l-i-1!=0 ) putchar(',');
       }
    return 0;
    

}


