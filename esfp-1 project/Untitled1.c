#include"stdio.h"
#include"string.h"
struct ms{
char event[20],lawn_t[3],lawn_s[20],person[20],menu_i[100],park_f[3];
char add[40],fes_t[3];
int n_menu,v_count,cost_m;
char cont[10];
int cost_pp,cost_p;
} detail;
int main(){
int a,b,h,m,h1,m1,c,day;
float d_total=7,total=0,d0_total=0,d1_total=0,d2_total=0,d3_total=0,d4_total=0,chr,extra;
printf("Enter Staff Name :");
scanf("%s",&detail.event);
printf("Enter your Age :");
scanf("%s",&detail.lawn_s);
printf("Enter your Contact Number :");
scanf("%s",&detail.person);
printf("Enter your Department :");
scanf("%s",&detail.cont);
printf("office start time is 10:30\n");
printf("enter your in time in hour : ");
    scanf("%d",&h);
    printf("enter your in time in minute : ");
    scanf("%d",&m);

    if(h<=10)
    {
        printf("full day\n");
    }
    else if(h<=10 || m<=30)
    {
        printf("half day\n");
    }

printf("office close at 6\n");

  printf("enter your out time hour : ");
    scanf("%d",&h1);
    printf("enter your out time minute : ");
    scanf("%d",&m1);

    if(h1<=6)
    {
        printf("no any over time here\n ");
    }
    else
    {
        c=h1-6;
        printf("over time money %d\n",c*100);
    }

printf("Enter your Address :\n ");
scanf("%s",&detail.add);



  printf("Enter the number of day you attendence out of last 60 days : ");
    scanf("%d",&day);

    if(day==60)
    {
        printf("you other 2 day extra leave\n");
    }
    else
    if(day<=59)
    {
        printf("you dont have any extra leave\n");
    }
printf("Enter your Basic Salary :");
scanf("%d",&detail.cost_p);
extra=detail.cost_p+detail.cost_p*0.02;
printf("do you have any leave in last six months\n");
printf("if yes press 1:-");
scanf("%f",&chr);
if(chr==1)
{
    printf("no extra salary granted");

}
else
{
    printf("you granted extra salary your salary of this month is %f",extra);
}


return 0;
}
