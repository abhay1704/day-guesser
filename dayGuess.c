
#include<stdio.h>
#include<math.h>


int main() {
    int date,mon,year,cen,w,par,gif1,gif2,gif3,close;
     int val1=0;    
    printf("Enter date from 01 to 31\n");
    scanf("%d",&date);
    printf("Enter month no, from 01 to 12\n");
    scanf("%d",&mon);
    printf("Enter year,e.g. 1985\n");
    scanf("%d",&year);

   
        if(mon>=1 && mon<=12 && date>=1)
    {
        val1=1;
    }
    if( (val1==1) && (  (mon%2!=0 && mon<8) || (mon>=8 && mon%2==0)  ) )
    {
        if(date<=31)
        {
            val1=1;
        }
        else
        {
            val1=0;
        }
    }
     else if( (val1==1) && ((mon%2==0 && mon<8 && mon!=2) || (mon>=8 && mon%2==0) ) )
    {
        if(date<=30)
        {
            val1=1;
        }
        else
        {
            val1=0;
        }
    }
    else if(val1=1 && mon==2)
    {
        if(year%4==0)
        {
             if(date<=29)
             {
                 val1=1;
             }
             else
             {
                 val1=0;
             }
        }
        else
        {
            if(date<=28)
            { 
                val1=1;
            }
            else
            {
               val1=0;
            } 
        }
    }
    if(val1!=1)
    {
        printf("INVALID DATE OR DATE FORMAT");
    }
    else
   
    {
    if(mon<=2)
    {
        mon=mon+10;
       year=year-1;
    }
    else
    {
        mon=mon-2;
    }
    cen=(year/100);
    year=year%100;
    gif1=(2.6*mon-0.2);
    gif2=year/4;
    gif3=cen/4;
    
    
    par=(date+gif1+gif2+gif3+year-(2*cen));
    if(par>=0)
    {
    w=par%7;
    }
    else
    {
        w=par%7+7;
    }
    if(w==0)
    {
        printf("Sun");
    }
    else if(w==1)
    {
        printf("Mon");
    }
    else if(w==2)
    {
        printf("Tues");
        
    }
    else if(w==3)
    {
        printf("Wednes");
        
    }
    else if(w==4)
    {
        printf("Thurs");
    }
    else if(w==5)
    {
        printf("Fri");
    }
    else if(w==6)
    {
        printf("Satur");
    }
    printf("day\n");
    printf("Enter any no to close the program\n");
    scanf("%d",close);
    }
   
    return 0;
}
    