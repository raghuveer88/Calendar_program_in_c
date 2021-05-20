#include<stdio.h>
#include<stdlib.h>

int to_print_day(int day){
    if(day == 0){
        printf("monday\n");
    }
    
    if(day == 1){
        printf("tuesday\n");
    }
    
    if(day == 2){
        printf("wednesday\n");
    }
    
    if(day == 3){
        printf("thursday\n");
    }
    
    if(day == 4){
        printf("friday\n");
    }
    
    if(day == 5){
        printf("saturday\n");
    }
    
    if(day == 6){
        printf("sunday\n");
    }
    
}


int leap_year(int date,int month,int year){
    int ins_date = 1;
    int ins_month = 1;
    int ins_year = 2000;

    if(month == 2 && date>29){
        printf("sorry, I need proper input - check date\n");
        return 0;
    }

   else if((month == 4||month == 6||month == 9||month ==11) && date>30){
      printf("sorry,I need proper input - check month\n");
      return 0;
    }

    else if(date>31){
        printf("sorry, I need proper input - check date\n");
        return 0;
    }
    
    else if(month > 12){
        printf("sorry, I need proper input- check month\n");
        return 0;
    }

    //monday = 0;tuesday = 1;wednesday = 2;thursday = 3;friday = 4;saturday = 5;sunday = 6;
    if(year>=ins_year){
    int ins_day = 0;
    for(ins_year = 2000;ins_year <= year;ins_year += 4){
        ins_day = (ins_day + 5)%7;
       
    }
    int i = ins_month;
    int days = 0;
    for(int i = 1;i < month ;i++){
        if(i ==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10||i == 12){
            days = days + 31;
            
        }
        else if(i == 4||i == 6||i == 9||i ==11){
            days = days+30;    
        }
        else if(i == 2){
            days = days +29;
            
        }
        else 
        printf("there is some wrong in the month\n");
        
    }  
    days = days +date-1;
    days = days%7;
    int day = (ins_day + days)%7;
    to_print_day(day);
    }

else{
    int ins_day = 5;
    for(ins_year = 1996;ins_year >= year;ins_year -= 4){
        ins_day = (ins_day + 2)%7;
       
    }
    int i = ins_month;
    int days = 0;
    for(int i = 1;i < month ;i++){
        if(i ==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10||i == 12){
            days = days + 31;
            
        }
        else if(i == 4||i == 6||i == 9||i ==11){
            days = days+30;    
        }
        else if(i == 2){
            days = days +29;
            
        }
        else 
        printf("there is some wrong in the month\n");
        
    }
    
    
    days = days +date;
    days = days%7;
    int day = (ins_day + days-1)%7;
    to_print_day(day);
}
}


int not_leap_year(int date,int month,int year){
    int ins_date = 1;
    int ins_month = 1;
    int ins_year = 2001;


    if(month == 2 && date>28){
        printf("sorry, I need proper input -check date \n");
        return 0;
    }

   else if((month == 4||month == 6||month == 9||month ==11) && date>30){
        printf("sorry,I need proper input-check month or date\n");
        return 0;
    }

    else if(date>31){
        printf("sorry, I need proper input-check date\n");
        return 0;
    }

    else if(month > 12){
        printf("sorry, I need proper input-check month\n");
        return 0;
    }

    //monday = 0;tuesday = 1;wednesday = 2;thursday = 3;friday = 4;saturday = 5;sunday = 6;
    if(year>=ins_year){
    int ins_day = 0;
    for(ins_year = 2001;ins_year < year;ins_year++){
        if(ins_year%400 == 0 || ins_year%4 == 0){
           ins_year = ins_year+1;
            ins_day = (ins_day + 3)%7;
        } // leap years in between
        else{
            ins_day = (ins_day+1)%7;
        }

    }
    int i = ins_month;
    int days = 0;
    for(int i = 1;i<month;i++){
        if(i ==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12){
            days = days + 31;
        }
        else if(i == 4||i == 6||i == 9||i ==11){
            days = days+30;
        }
        else if(i == 2){
            days = days +28;
        }
        else {
        printf("there is some wrong in the month\n");
        }
    }
    days = days + date-1;
    days = days%7;
    int day = (ins_day + days)%7;
    if((year-1)%400 ==0 || (year-1)%4 == 0){
   	   to_print_day(day-1);
    	}
    else{
 	   to_print_day(day);
 	}	

}
else{
    int dum = ins_year -1;
    int ins_day = 4;
   
    for(ins_year = 1999;ins_year >= year;ins_year--){
        if(ins_year%400 == 0 || ins_year%4 == 0){
           ins_year = ins_year-1;
            ins_day = (ins_day + 4)%7;
        }
        
        else{
            ins_day = (ins_day-1)%7;
        }

    }
    int i = ins_month;
     int days = 0;
    for(int i = 1;i<month;i++){
        if(i ==1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12){
            days = days + 31;
        }
        else if(i == 4||i == 6||i == 9||i ==11){
            days = days+30;
        }
        else if(i == 2){
            days = days +28;
        }
        else {
        printf("there is some wrong in the month\n");
        }
    }
    days = days + date;
    days = days%7;
    int day = (ins_day + days)%7;
    to_print_day(day);

  
}
}




int input(int date,int month,int year){
    if(year%400 == 0)
    leap_year(date,month,year);

    else if(year%4 == 0)
    leap_year(date,month,year);

    else if(year%100 == 0)
    not_leap_year(date,month,year);

    else
    not_leap_year(date,month,year);
    
}



int main(){
 int date;
 int month;
 int year;
printf("date-month-year\n");
scanf("%d - %d - %d",&date,&month,&year);

input( date, month, year);

    return 0;
}
