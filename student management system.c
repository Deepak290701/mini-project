#include<stdio.h>
#include<conio.h>
#include<string.h>

void add(){
    char name[100],address[200];
    int rollno;
    int choic=1;
    int phoneno;
    system("cls");
    FILE *fp;
    fp=fopen("studen.txt","a");
    while(choic > 0  || choic < 0 ){
        system("cls");
        printf("Enter  Name    Roll No.   Phone No.      Address  \n");
        scanf(" %s   %d    %d   %s",&name,&rollno,&phoneno,&address);
        printf("\n Successfully Added\n");
        printf("\n To add another entry enter a number other than 0 :- \n");
        scanf("%d",&choic);
    }
    fclose(fp);
}


void print(){
    system("cls");
    FILE *fp;
    char name[100][100],address[100][200];
    int rollno[100];
    int phoneno[100];
    int i=0;
    fp=fopen("studen.txt","r");
    printf(" Name    Roll No.   Phone No.        Address  \n");
    while(!feof(fp)){
        fscanf(fp,"  %s  %d  %d  %s \n",&name[i],&rollno[i],&phoneno[i],&address[i]);
        printf("%s \t\t %d \t\t %d \t\t %s \n",name[i],rollno[i],phoneno[i],address[i]);
        i++;
    }
    fclose(fp);
    getch();
}


void main(){

    int choice=1;
    while(choice){
        system("cls");
    printf("                                             STUDENT MANAGEMENT SYSTEM        \n");
    printf("________________________________________________________________________________________________________________________\n\n");
    printf("Main Menu:--\n\n");
    printf("  1.)Add New Student Details \n");
    printf("  2.)Print List Of All Existing Students \n");
    printf("  3.)Print Details of the Student Using Roll No.\n");
    printf("  4.)Add New Student Details \n");
    printf("  5.)Add New Student Details \n");
    printf("  0.)EXIT\n");
    printf(" \nEnter Your Choice:--\n");
    scanf("%d",&choice);
        switch(choice){
            case 0:return ;
                    break;
            case 1: add();
                    break;
            case 2: print();
                    break;
            case 3:
                    break;
            default:
                    break;

        }
        printf("\n press 0 for exit else 1  :- ");
        scanf("%d",&choice);
        if(choice==0)
            break;

    }
}
