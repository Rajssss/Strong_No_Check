#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int no,digit,i,j,n_fact,count,fact,result;
    //Input and counting.
    {
        printf("\n\tEnter an Int No.=>");
        scanf("%d",&no);

        digit=0;
        count=no;
        while(count!=0)
        {
            count/=10;
            digit++;
        }
        printf("\n\tNo. of Digits are =>%d",digit);
    }


    {
        printf("\n\t\tProcessing.......\n");

        result=0;
        count=no;
        for(i=1;i<=digit;i++)
        {
            n_fact=count/pow(10,digit-i);
            count-=pow(10,digit-i)*n_fact;
            fact=n_fact;

            printf("\n\tNo.%d digit is %d. Finding Factorial!\n",i,n_fact);

            for(j=1;j<n_fact;j++)
            {
                if(n_fact==1) break;

                fact*=n_fact-j;

            }

            result+=fact;
        }
    }

    {//Check and Print.
        if(result==no)
        {
            printf("\n\tThe Number is Strong No!\n");
        }
        else
        {
            printf("\n\tThe Number is not a Strong No!\n");
        }
    }
    
    getch();
    return 0;
}
