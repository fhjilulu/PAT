//Calculate a+b and output the sum in standard format -- that is, 
//the digits must be separated into groups of three by commas (unless there are less than four digits).

//计算a+b并用标准格式输出和，输出数字每三个用逗号隔开（除非数字小于四位）


#include <iostream>

#include <string.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;

    if(c<0)
    {cout<<"-";c=-c;}

    char sum[100];
    sprintf(sum,"%d",c);

    int l,i;
    l=strlen(sum);
    for(i=0;i<l;i++)
       {
            putchar(sum[i]);
            if((l-i-1)%3==0 && l-i-1!=0 ) putchar(',');
       }
    return 0;


}
