#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
struct Store
{
char g[50],m,e;
int q;
float r,d; 
float amount;
float tax;}s;
int c;
static char mo,pa,g[50];
static int qq;
int distim();
int datess();
int timess();
int copy();
void office();
void customer();
void help();
void about();
void search();
void showall();
void add();
void remov();
void edit();
void ex();
main()
{
	system("color 0a");
	   system("welcome.wma");
	char x;
	sec:
	while(1)
	{
	system("cls");
	distime();
	printf("\t\t###############################################\n\t\t##\tLA Grandee Departmental Store\t     ##\t\t\n\t\t##\t-----------------------------\t     ##\n\t\t##\tSrijana Chowk, Pokhara, Nepal\t     ##\n\t\t##\t\t\t\t\t     ##\n\t\t##\t     Ph no: 061-123456\t\t     ##\n\t\t##\t\t\t\t\t     ##\n\t\t###############################################");
printf("\n\n\n\t ");
printf("\t1.OFFICE USE\t\t\t2.CUSTOMER USE\n\n\t\t3.HELP\t\t\t\t4.ABOUT\n\n\t\t\t\t5.EXIT\n\n");
printf("\tCHOOSE THE ABOVE OPTION TO OBTAIN A TASK:-\t");
x=getche();
x=toupper(x);

	system("cls");
switch(x)
{
	case '1':
	printf("\n\t\tYou have selected for OFFICE USE:-");
	office();
	break;
	case '2':
	printf("\n\t\tYou have Seleced for CUSTOMER USE\n\n\n\t");
	customer();
	break;
	case '3':
	printf("\n\t\t\tHELP:");
	help();
	break;
	case '4':
	printf("\n\t\t\tABOUT US:-\n\n   ");
	about();
	break;
	case '5':
	ex();
	break;
	case 'S':
	system("systeminfo");
	printf("\n\t\t\tPress any key to continue");
	break;
	case 'B':
	system("bill.txt");
	printf("\n\n\n\n\t\t\tPress Any key to continue");
		break;
		case 'C':
		printf("\n\n\n\t\t\tCOLOR changed Applied");
system("color 1a");
	break;
	default:
	system("cls");
	system("incorrect.wma");
				printf("\aIncorrect Input");
				printf("\nAny key to continue");
}
binaya:
getch();
}
}
void office()
{

	char choice;

while (1)
	{
	system("cls");
	   printf("\n");
     	printf("\n\t 1. ADD NEW ITEMS.\t \t2. SHOW ALL ITEMS");
		printf("\n\n\t 3. EDIT ITEMS.");
		printf("\t\t  \t4. SEARCH ITEMS.");
		printf("\n\n\t 5. REMOVE ITEMS.\t\t6. BACK TO MAIN MENU\n");
	  	printf("\n");
	  	printf("\n\n\t      CHOOSE THE OPTION:-" );
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case '1' :
				add();break;
			case '2' :
			showall();break;
			case '3':
			edit();break;
			case '4' :
				search();break;
			case '5':
				remov();break;
			case '6':
			system("cls");
		main();
				break;
			default:
				system("cls");
				printf("\a Incorrect Input");
	system("incorrect.wma");
				printf("\n Any key to continue");
				getch();
		}
	}
}
void customer()
{
		remove("Bill");
float amount,net,total=0;
	int n,i;
	float a,b;
FILE *f;
FILE *cus;
	time_t m;
	m=time(NULL);
cus=fopen("Bill.txt","w");
fprintf(cus,"\t\t\t                    LA Grandee Departmental Store\n\t\t                   ------------------------------------------\n\t\t\t                     Srijana chowk, Pokhara, Nepal.\n\t\t\t                         Phone no: 061-123456\n");
fprintf(cus,"\n\n\n\n\t\t\t\t\t                       BILL");
fprintf(cus,"\n");
	fprintf(cus,"\n\t\t\t          DATE & TIME :   ");
	fprintf(cus,(ctime(&m)));
fprintf(cus,"\n\nBilling Mode : General");
fprintf(cus,"\t\t\t\t\t\t\t                 Billing Mode : Cash\n");
printf("\n\n\n\n\n\n\n\tHow many types of Items are bought by the customer:  ");
scanf("%d", &n);
for(i=1;i<=86;i++)
{fprintf(cus,"-");}
fprintf(cus,"\n");
for(i=1;i<=86;i++)
{fprintf(cus,"-");}
fprintf(cus,"\n");
	fprintf(cus,"\n\nItems\t\t     |       Rate\t      |      Quantity\t      |      Amount\t\n");
	for(i=0;i<86;i++)
		fprintf(cus,"-");
	for(i=1;i<=n;i++)
	{
	int flag=1;
	f=fopen("data.dat","rb+");
	if(f==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("\n\n\n\n\n\n\n\t\tEnter the name of the item:  ");
	scanf("%s", g);
		strlwr(g);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.g,g)==0)
		{	system("cls");
         	flag=0;

		break;
		}
		else if(flag==1)
		{	system("cls");
		}
	}
				system("cls");
		printf("\n\n\n\n\n\n\n\t\tEnter the Quantity of %s:  ",g);
		scanf("%d", &qq);
		amount=s.r*qq;
		a=amount*s.tax/100;
		b=amount*s.d/100;
		net=amount+a-b;
		fprintf(cus,"\n%s\t\t             %0.2f\t                 %d\t               %0.2f\t\n",s.g,s.r,qq,amount);
	fprintf(cus,"     \t\t                 \t                 \t        TAX  =   %0.2f   \t\n",a);
	fprintf(cus,"     \t\t                 \t                \t    DISCOUNT =   %0.2f   \t\n",b);
	fprintf(cus,"     \t\t                 \t                 \t        NET  =   %0.2f   \t\n",net);
	total=total+net;
}
	for(i=0;i<86;i++)
		fprintf(cus,"-");
	fprintf(cus,"\n     \t\t                 \t                     \t   Total =    %0.2f   \t\n",total);
	fprintf(cus,"\n\n\t    Broken and expired Goods will not be returned.\n");
	fclose(f);
	system("cls");
	fclose(cus);

while(1)
{system("cls");
printf("\n\n         If you dont have a Printer, Your Bill will be stored in a Bill.txt.\n\t        so that, you can print out it later\n\n\t\tpress C to complete and print the bill:-\t\n\n\t\tAND, press B to back:-\t");
c=getche();
c=toupper(c);
switch(c)
{
	case 'B':
	system("cls");
	customer(qq);
	case 'C':
	system("cls");
	system("sounder.wav");
	system("cls");
	printf("\n\n\n\n\n\n\n\t\t\tPlease wait ! While generating.");
		Sleep(500);
				printf(".");
					Sleep(500);
						printf(".");
							Sleep(500);
								printf(".");
									Sleep(500);
								printf(".");
								Sleep(500);
				printf(".");
					Sleep(500);
						printf(".");
							Sleep(500);
								system("cls");
								printf("\n\n\n\n\n\n\n\n\n\t\t\t\n");
							system("PRINT /D:Bill bill.txt");
							Sleep(2000);
							system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\tYou have completed the task\n\n\t\t\tThank You\n\n");
	Sleep(3000);
	system("bill.txt");
	main();
	break;
	default:
	system("cls");
printf("Incorrect Input");
	system("incorrect.wma");
	printf("Incorrect input\npress any key to continue");
	getch();
}}

}
void help()
{	printf("\n\n\t1.Only Stored items' bill will be made.\n\n\t2.While the program is opened, you need to close 'Bill.txt' to work \n\n\tcorrectly.\n\n\t     ");
printf("Press following symbols in main menu for following outputs:-\n\n\n\t\tS\t---   System Information\n\n\t\tC\t---   To change the color \n\n\t(we have only added one color others colors will be added as per the \n\trequirements of users.)\n\n\t\tB\t---   To view the last Bill.");
printf("\n\n\n\t\t\tPress Any key to continue");
}
void add(a,b,c)
{
		FILE *f;
	char test;
	f=fopen("data.dat","ab+");
	if(f==0)
	{   f=fopen("data.dat","wb+");
		system("cls");
		printf("please wait while we configure your computer");
		Sleep(300);
		printf("\npress any key to continue");
		getch();
	}
	while(1)
	{
	system("cls");
	printf("\n Enter a name of item:");
	scanf("%[^\n]s",&s.g);
	
strlwr(s.g);


	printf("\n Enter the rate of %s:",s.g);
	scanf("%f",&s.r);
	printf("\n Enter the Quantity of %s:",s.g);
	fflush(stdin);
	scanf("%d",&s.q);
	printf("\n Enter the tax to be added for %s:",s.g);
	scanf("%f",&s.tax);
	printf("\n Enter the Discount percent for %s:",s.g);
	scanf("%f",&s.d);
	fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		if(s.g==g)
		{s.q=s.q-qq;}
		else
		s.q=qq;
		a=s.tax/100;
		b=s.d/100;
		c=(s.r);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\tP");
			Sleep(200);
				printf("L");
					Sleep(200);
						printf("E");
							Sleep(200);
								printf("A");
									Sleep(200);
								printf("S");
								Sleep(200);
				printf("E");
					Sleep(200);
								printf("   W");
									Sleep(200);
				printf("A");
					Sleep(200);
						printf("I");
							Sleep(200);
								printf("T");
									Sleep(200);
								printf("!");
								Sleep(100);
				printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(300);
								printf(".");
								system("cls");
		printf(" \n\n\n\n\t\tYour record successfully added");
		printf("\n Press esc key to exit, any other key to add other record:");
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}
void showall()
{
system("cls");	
	FILE *f;
	int i;
	system("cls");
	printf("\n\n\n\n\n\n\n\t\t\tGathering Required datas.");
		Sleep(500);
				printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
								printf(".");
								Sleep(200);
				printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
		       						printf(".");
  							Sleep(200);
	if((f=fopen("data.dat","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Items\t\t        Rate\t       Quantity\t        Tax per\t      Dis. per \n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	printf("\n %s\t\t       %0.2f\t        %d\t        %0.2f\t        %0.2f", s.g, s.r, s.q, s.tax, s.d);
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");
		printf("\n\n\t\tPress Any Key to Back");

fclose(f);
getch();
}
void remov()
{
	FILE *f,*t,*d;
	int i=1;
	char g[20];
	if((f=fopen("data.dat","rb"))==NULL)
    exit(0);
  	if((t=fopen("temp.dat","w+"))==NULL)
	exit(0);
	system("cls");
	{
	printf("\n\n\n\n\n\n\n\n   Enter the name of the item to be deleted from the Database:-");
	fflush(stdin);
	scanf("%[^\n]s",&g);
		strlwr(g);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.g,strlwr(g))==0)
		{       i=0;
			continue;

		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       system("cls");
	printf("\n\n\n\n\n\n\t\t\tSearching");
	Sleep(500);
					printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
								printf(".");
								Sleep(200);
				printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
		       						printf(".");
  							Sleep(200);
								system("cls");
		printf("\n\n\n\n\n\n\n\n\t\tItems \"%s\" not found, \n\n\t\tPlease enter correct the item stored in a database",g);
		Sleep(4000);
		office();
		getch();
		fclose(f);
		fclose(t);
	}}
	system("cls");
	printf("\n\n\n\n\n\n\t\t\tSearching");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(100);
	printf(".");
	Sleep(100);
 system("cls");
 printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
 system("cls");
 printf("\n\n\n\n\t\t");
 Sleep(400);
  system("cls");
  printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
  system("cls");
   printf("\n\n\n\n\t\t");
 Sleep(400);
  system("cls");
  printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
  system("cls");
   printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(500);
 system("cls");
	printf("\n\n\n\n\n\n\t\t\tRemoving");
	Sleep(500);
						printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
								printf(".");
								Sleep(200);
				printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
		       						printf(".");
  							Sleep(200);
								printf(".");
								system("cls");
			  	  	  	  system("delete.wav");
	printf("\n\n\n\n\n\n\n\t\tThe item %s Successfully Removed!!!!",g);
	printf("\n\n\t\tPress Any To Back");
	fclose(f);
	fclose(t);
	remove("data.dat");
	rename("temp.dat","data.dat");
	getch();
}
void search()
{
	{
	FILE *f;
	char g[20];
	int flag=1;
	int i;
	f=fopen("data.dat","rb+");
	if(f==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n   Enter the name of the item to search in our database  :  ");
	scanf("%[^\n]s", g);
	strlwr(g);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.g,g)==0)
		{	system("cls");
		printf("\n\n\n\n\n\t\t\tSearching.");
			Sleep(500);
					printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
								printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
		       						printf(".");
  							Sleep(200);
								 system("cls");
 printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
 system("cls");
 printf("\n\n\n\n\t\t");
 Sleep(400);
  system("cls");
  printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
  system("cls");
   printf("\n\n\n\n\t\t");
 Sleep(400);
  system("cls");
  printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(400);
  system("cls");
   printf("\n\n\n\n\n\n\n\t\t\tFOUND!!!!! ");
 Sleep(500);
 system("cls");
		system("cls");
			printf(" \t\t\t%s is found in database \n\n",s.g);
				for(i=0;i<79;i++)
		printf("-");
	printf("\nItems\t\t        Rate\t       Quantity\t        Tax per\t      Dis. per \n");
	for(i=0;i<79;i++)
		printf("-");
	{
		printf("\n %s\t\t       %0.2f\t        %d\t        %0.2f\t        %0.2f",s.g,s.r,s.q,s.tax,s.d);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");	
			printf("\n\n\t\tPress Any Key to Back");
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
		printf("\n\n\n\n\n\t\t\tSeaching.");
		Sleep(500);
						printf(".");
					Sleep(200);
						printf(".");
							Sleep(200);
								printf(".");
									Sleep(200);
								printf(".");
								Sleep(200);
				printf(".");
									Sleep(200);
		       						printf(".");
  							Sleep(200);
								system("cls");
			printf("\n\n\n\n\n\n\n\n\t\tRequested Item Not found in our database");
			printf("\n\n\t\tPress Any Key to Back");
		}
	}
	getch();
	fclose(f);
}
}
void edit()
{
	
	FILE *f;
	char g[20];
	long int size=sizeof(s);
	if((f=fopen("data.dat","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("\n  Enter name of items to modify:");
	scanf("%[^\n]s",&g);
	strlwr(g);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.g,g)==0)
		{
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\tFOUND");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\t");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\tFOUND");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\t");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\tFOUND");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\t");
			Sleep(300);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\tNow You are ready for Editing");
			Sleep(1400);
			system("cls");
			printf("\n Enter the name of items:");
			scanf("%[^\n]s",&s.g);
			printf("\n Enter quantity: ");
			fflush(stdin);
			scanf("%d",&s.q);
			printf("\n Enter rate: ");
			scanf("%f",&s.r);
			printf("\n Enter the tax percent: ");
			scanf("%f", &s.tax);
			printf("\n Enter the Discount percent: ");
			scanf("%f", &s.d);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\t\t\tProcessing");
			Sleep(300);
			printf(".");
			Sleep(300);
			printf(".");
			Sleep(300);
		    printf(".");
			Sleep(300);
		    printf(".");
	     	Sleep(300);
			printf(".");
			system("cls");
			printf("\n\n\n\n\n\n\n\n\t\t\tThank You for Modifying");
			Sleep(1000);
			break;
		}	
	}
	fclose(f);
	office();
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\tSearching");
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(".");
		Sleep(200);
	    printf(".");
		Sleep(200);
		system("cls");
	    printf("\n\n\n\n\n\n\n\n\n\t\t\tNOT FOUND");
	    Sleep(200);
		system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t");
	    Sleep(200);
	    system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\tNOT FOUND");
	    Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t ");
	    Sleep(200);
	    system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\tNOT FOUND");
	    Sleep(1500);
        system("cls");
}
void about()
{
	system("cls");
	printf("\n\n     The Program is Developed by Bimal Khadaka, Binaya Gurung, Mukta Gurung, \n and  Shankar Pun.\n Program was totally coded(or written) in C-FREE, specially thanks to designer   of C-FREE.");
printf("\n\n\n\t\t\tPress Any Key To continue");
}
void ex()
{
	char e;
	while(1)
	{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\tAre you sure want to exit(Y/N)");
	e=getche();
	e=toupper(e);
	switch(e)
	{
		case'N':
		main();
		break;
		case 'Y':
		system("cls");
		system("goodbye.wav");
		printf("\n\n\t\t\tTHANK YOU FOR USING OUR SERVICE\n");
			Sleep(2000);
		exit(0);
		break;
		default:
		system("cls");
		printf("\aIncorrect input\npress any key to continue\n\n");
		getch();
	}
}
getch();
}
copy()
{
	printf("\n\n\n\t\t\tCopyright � BBMS. 2013");
}
int timess()
{
	system("time/t");
}
int distime()
{
printf("\n\t\t            Date : ");
system("date /t");
printf("\t\t            Time : ");
system("time /t");
printf("\n");	
}