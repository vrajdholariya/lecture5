// write a program to creat a menu-druven program for telecom call service conversation using nested method.

#include<stdio.h>
#include<conio.h>

void main(){
int choice , english,hindi,gujrati;
clrscr();

printf("press 1 for english...\n");
printf("press 2 for hindi...\n");
printf("press 3 for gujrati...\n");
printf("enter the language :");
scanf("%d",&choice);

switch(choice){
case 1 :
       printf("press 1 for internet recharge\n");
       printf("Press 2 for top-up recharge\n");
       printf("press 3 for special recharge\n");
       printf("enter your choice :");
       scanf("%d",&choice);
       switch(english){
       case 1 :
       printf("you have successfully done internet recharge...\n");
       break;
       case 2 :
       printf("you have successfully done top-up recharge...\n");
       break;
       case 3 :
       printf("you have successfully done special recharge...\n");
       break;
       default :
       printf("no plan available...\n");
       break;
       }

case 2 :
      printf("internet recharge ke liye 1 dabaiye..\n");
      printf("top-up recharge ke liye 2 dabaiye...\n");
      printf("specal recharge ke liye 3 dabaiye...\n");
      printf("enter your choice :");
      scanf("%d",&hindi);
      switch(hindi){
      case 1 :
      printf("aapne safaltapurvak internet recharge kar liya hai...\n");
      break;
      case 2 :
      printf("aapne safaltapurvak top-uo recharge kar liya hai...\n");
      break;
      case 3 :
      printf("aapne safaltapurvak special recharge kar liya hai...\n");
      break;
      default:
      printf("koi plan available nahi he\n");
      break;
      }

case 3 :
      printf("internet recharge mate 1 dabavo...\n");
      printf("top-up rechargen mate 2 dabavo...\n");
      printf("special recharge mate 3 dabavo...\n");
      printf("enter your choice :");
      scanf("%d",&gujrati);
      switch(gujrati){
      case 1 :
      printf("tame safaltapurvak internet recharge karyu che...\n");
      break;
      case 2 :
      printf("tame safaltapurvak top-up recharge karyu che...\n");
      break;
      case 3 :
      printf("tame safaltapurvak special recharge karyu che...\n");
      break;
      default :
      printf("koi plan available nathi...\n");
      break;
      }
}

getch();
}