#include <stdio.h>
#include <time.h>
typedef struct
    {
        int d;
        int m;
        int y;
    }date;

int get_days_in_month(int m,int year)
{
    int days = 0;
    switch(m)
    {
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12: days=31;
                break;
        case 2: if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                }
                else {
                    days = 28;
                }
                
               break;
        default:   days = 30;

    }
    return days;
}


date sub_date(date a, date b) {
//a-b
    date c;
    if(a.d < a.d)
    {
        a.d += get_days_in_month(a.m,a.y);
        a.m -=1;
        if(a.m < b.m)
        {
            a.m +=12;
            a.y -=1;
        }        
    }
    c.d= a.d-b.d;
    c.m=  a.m - b.m;
    c.y = a.y-b.y;
    return c;
}


date add_days(date t,int days)
{
    t.d += days;
    int days2 = get_days_in_month(t.m, t.y);
    while (t.d > days2) {
        t.d -= get_days_in_month(t.m, t.y);
        t.m++;
        if (t.m > 12) {
            t.m = 1;
            t.y++;
        }
    }

    return t;
}

void get_current_date(date *d)
{
    time_t currentTime;
    
    // Get the current time
    time(&currentTime);
    
    // Convert the current time to local time format
    struct tm *localTime = localtime(&currentTime);
    d->d=localTime->tm_mday;
    d->m = localTime->tm_mon + 1;
    d->y = localTime->tm_year + 1900;
  
 }

date sub_days(date t,int days)
{
    t.d -= days;
    while (t.d <= 0)
    {
        t.m--;
        if (t.m <=0){
            t.m = 12;
            t.y--;
        }
        t.d +=  get_days_in_month(t.m , t.y);

    }
    return t;
}
void valid_date(date t)
{
    if ((t.m <= 12 && t.m >= 1) && (t.d <= get_days_in_month(t.m,t.y) && t.d >= 1))
    {
            printf("\nvalid date");

    }
    else
    {
        printf("Invalid date ");
    }
}
 

int main(){
    date t,curr_date; 
    int days;
    printf("enter no of days to subtract");
    scanf("%d",&days);
    printf("Enter the date (DD MM YYYY): ");
    scanf("%d %d %d", &t.d, &t.m, &t.y);   

    // get_current_date(&curr_date);
    //t = sub_date(t,curr_date);
    //t= sub_days(t,days);
    //t = add_days(t,days);
    valid_date(t);
    //printf("date is %d-%d-%d",t.d,t.m,t.y);

}