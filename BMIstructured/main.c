#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linebreak(int line){
 for(line=0;line<100;line++){
        printf("*");
           }
    printf("\n");
    }

 int validation(int choice,int loop,int line){
    for (loop=1;loop>0;){
        printf("Do you want to try again?\n");
        printf("Enter 1 if YES 2 if NO\n");
        printf("Your Choice: ");

        scanf("%d",&choice);
    switch (choice){
        case 1:
            loop=loop-=1;
           for(line=0;line<100;line++){
            printf("*");
           }
           printf("\n");
            break;
        case 2:
            printf("Thank you for Using!\n");
            for(line=0;line<100;line++){
            printf("*");
           }
           printf("\n");
          exit(0);
            break;
        default:
            printf("Enter 1 and 2 only\n");
            for(line=0;line<100;line++){
            printf("*");
           }
           printf("\n");
            break;}
        }
   }
 void validation_formula(){

        printf("What formula Do you want to Use?\n");
        printf("Enter 1 for Pounds and Inches\n");
        printf("Enter 2 for Kilograms and Meters\n");
        printf("Your Choice: ");
    }


float category(float result){
     printf("Your BMI Result : %.2f\n",result);
    if(result<18.5){
        printf("BMI CATEGORY: You are Underweight.\n");
    }
    else if(result>=18.5 && result<=24.9){
        printf("BMI CATEGORY: You are Normal.\n");
    }
    else if(result>=25 && result<=29.9){
        printf("BMI CATEGORY: You are Overweight.\n");
    }
    else{
         printf("BMI CATEGORY: You are Obese.\n");
    }
}

int main(){
    int choice;
    int loop;
    int line;
    float lbs;
    float inches;
    float meter;
    float kg;
    float result;
    for(loop=1;loop>0;){
        validation_formula(); scanf("%d",&choice);
        linebreak(line);
    switch(choice){
    case 1:
        printf("Your Weight In Pounds: "); scanf("%f",&lbs); printf("lbs.");
        printf("Your Height in Inches: "); scanf("%f",&inches);  printf("in.");
        result=(lbs/(inches*inches)*703);
        category(result);
        linebreak(line);
        validation(choice,loop,line);
        break;

    case 2:
         printf("Your Weight In Kilograms: "); scanf("%f",&kg);  printf("kg.");
        printf("Your Height in Meters: "); scanf("%f",&meter); printf("m.");
        result=(kg/(meter*meter));
        category(result);
        linebreak(line);
        validation(choice,loop,line);
        break;

    default:
        printf("Enter 1 and 2 only!\n");
        linebreak(line);
        break;

        }
    }
}



