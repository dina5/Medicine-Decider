#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void cough();
void Heart_Disease();
void Headache();
void flu();
int main() {

    int age_entered;
    int age=15;
    int choice;
    char option;
do{
    printf("* WELCOME TO THE MEDICINE REMINDER***\n\n");
    printf("Please select your medical problem from the list below\n\n");
    printf("1-Cough\n2-Heart Disease\n3-Headache\n4-Flu\n ");
    scanf("%d",&choice);
    
    

switch(choice)
	{
			    case 1:
				cough();break;
                case 2:
				Heart_Disease();break;
                case 3:
                Headache();break;
                case 4:
                flu();break;

                case 5:
				system("cls");
				printf("\n~~~~~~~~~~~~~ THANK YOU ~~~~~~~~~~~~\n");
				printf("\n*******FOR USING OUR SERVICE********\n\n");
				exit(0);
				break;
			default:
				system("cls");                     ////////
				printf("\nWrong Number\n");       ////////    DEFAULTTT
				
				}
			printf("\n \n\n\n\n*******************************************\n\nPlease press y KEY to continue: ");
			scanf("%s",&option);
				
}while(option =='y');
getch();
return 0;
}


void cough(){
char op;
   int age_entered;
   int age=15;

            printf("\nFOR COUGH:\n");
            printf("\nWhat is your age ?\n");

            scanf("%d",&age_entered);

      if (age_entered<=age) {
    printf("1 tsp of liquid Amoxar per 4hrs\n");
     }else
        printf("500 tablet of Amoxycilin per 8 hours");

    }





    //////////////////////////////////////////////////////////
void Heart_Disease(){
   int age_entered;
   int age=15;
            printf("\nFOR HEART DISEASE:\n");
            printf("\nWhat is your age ?\n");

            scanf("%d",&age_entered);

      if(age_entered<=age) {
printf("\n MEDICINE SUGGESTION UNAVAILABLE FOR MINORS WITH  HEART DIESEASE \n\nPLEASE VISIT A DOCTOR IMMEDIATLY FOR PROPER MEDICATION \n");
       }else
        printf("\n30g of Aspirin tablet everyday at any hour\n");

}

void flu(){
   int age_entered;
   int age=15;
            printf("\nFOR HEADACHE:\n");
            printf("\nWhat is your age ?\n");
            scanf("%d",&age_entered);

      if (age_entered<=age) {
    printf("\nLiquid TOMOPHIL 1 teaspoon only \n");

    }else
printf("\n100g HISTACINE tablet\n\nNOTE:HISTACINE tablet will make you drowsy-please use only when nose becomes runny\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Headache(){

   int age_entered;
   int age=15;
            printf("\nFOR HEADACHE:\n");
            printf("\nWhat is your age ?\n");
            scanf("%d",&age_entered);

      if (age_entered<=age) {
    printf("1 tsp of liquid Elixir ONLY when headache is unbearable\n");
     }else
        printf("\n500 tablet of PARACITAMOL ONLY if headache is unbearable\n"); }
