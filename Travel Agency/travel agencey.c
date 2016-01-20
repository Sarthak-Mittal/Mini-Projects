#include<stdio.h>
#include<stdlib.h>
struct info
{
 int age;
 char name[30];
}peo[50];
FILE *fp;
int arr[5][5];
void nationaldestination(int home);
void internationaldestination();
char fn[20],ln[20];
int mode;
int home,end,dis;
int i,a,k,numpeople,numdays;
int brr[4];
int choice,ch1,ch2,train,ac;
int ch3,ch4,ch5,ac1,ch6;
int sum1=0;
int ch11,ch12,ch13;
char chh;
int sum1;
int asd,sr,dr,a,b;
int amount=0;
char crr[50]; 
char drr[50];
int main()
{
sum1=0;
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
 printf("\t\t\t\t   ***      ***  *********  ***       *******   ********  ***      ***  ********    \n");
 printf("\t\t\t\t   ***      ***  *********  ***       *******   ********  ****    ****  ********    \n");
 printf("\t\t\t\t   ***      ***  ***        ***       ***       **    **  *****  *****  ***         \n");
 printf("\t\t\t\t   ***  **  ***  *****      ***       ***       **    **  ************  *****       \n");
 printf("\t\t\t\t   ************  *****      ***       ***       **    **  ***   *  ***  *****       \n");
 printf("\t\t\t\t   *****  *****  ***        ***       ***       **    **  ***      ***  ***         \n");
 printf("\t\t\t\t   ****    ****  *********  ********  *******   ********  ***      ***  ********    \n");
 printf("\t\t\t\t   ***      ***  *********  ********  *******   ********  ***      ***  ********    \n\n");
printf("	\t\t\t\t\t\t ************        *******\n");
printf("	\t\t\t\t\t\t ************       ***   ***\n");
printf("	\t\t\t\t\t\t     ****	   ***     ***\n");
printf("	\t\t\t\t\t\t     ****	   ***     ***\n");
printf("	\t\t\t\t\t\t     ****	   ***     ***\n");
printf("	\t\t\t\t\t\t     ****	   ***     ***\n");
printf("	\t\t\t\t\t\t     ****	    ***   ***\n");
printf("	\t\t\t\t\t\t     ****	      *****\n\n");

printf("\t\t\t****    ****        *       ***   ***   ********                ****    ****   ***      ***\n");
printf("\t\t\t*****  *****       ***      ***  ***    ********                *****  *****    ***    ***\n");
printf("\t\t\t*** **** ***      ** **     *** ***     ***                     *** **** ***     ***  ***\n");
printf("\t\t\t***  **  ***     **   **    *****       ******                  ***  **  ***      ******\n");
printf("\t\t\t***      ***    *********   *****       ******                  ***      ***       ****\n");
printf("\t\t\t***      ***   ***     ***  *** ***     ***                     ***      ***       ****\n");
printf("\t\t\t***      ***   ***     ***  ***  ***    ********                ***      ***       ****\n");
printf("\t\t\t***      ***   ***     ***  ***   ***   ********                ***      ***       ****\n\n");

printf("\t\t\t\t**********   ******          *        ***       ***   ********   ***\n");
printf("\t\t\t\t**********   *******        ***       ***       ***   ********   ***\n");
printf("\t\t\t\t   ***       ***  ***      ** **       ***     ***    ***        ***\n");
printf("\t\t\t\t   ***       ***  ***     **   **      ***     ***    ******     ***\n");
printf("\t\t\t\t   ***       ******      *********      ***   ***     ******     ***\n");
printf("\t\t\t\t   ***       *** ***    ***    ***      ***   ***     ***        ***\n");
printf("\t\t\t\t   ***       ***  ***   ***    ***       *** ***      ********   *********\n");
printf("\t\t\t\t   ***       ***   ***  ***    ***        *****       ********   *********\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n\n\n");
printf("ENTER YOUR FIRST NAME \n\n");
scanf("\t%s",fn);
fp=fopen("flie1.txt","w");
fprintf(fp, "User name-\t\t\t\t");
fputs(fn,fp);
fclose(fp);
printf("ENTER YOUR LAST NAME \n\n");
scanf("\t%s",ln);
fp=fopen("flie1.txt","app");
fprintf(fp," ");
fputs(ln,fp);
fprintf(fp, "\n\n");
fclose(fp);
                            

printf("________________________________________________________________________________________________________________________________________\n");

	   printf("\t\t\t\t\t	THE CITIES UNDER OUR SERVICE ARE \n\n\n");
printf("________________________________________________________________________________________________________________________________________\n");

	   printf("1.MUMBAI\t\t2.DELHI\t\t\t3.JAIPUR\t\t4.CHENNAI\t\t5.KOLKATA\t\t6.HYDERABAD\n");
printf("________________________________________________________________________________________________________________________________________\n");
	   printf("\n HOME CITY = ");
	   scanf("%d",&home);    

fp=fopen("flie1.txt","app");
fprintf(fp, "Home city-\t\t\t\t");

if(home==1)
fprintf(fp, "Mumbai");
else if(home==2)
fprintf(fp, "Delhi");
else if(home==3)
fprintf(fp, "Jaipur");
else if(home==4)
fprintf(fp, "Chennai");
else if(home==5)
fprintf(fp, "Kolkata");
else if(home==6)
fprintf(fp, "Hyderbad");

fprintf(fp, "\n\n");
fclose(fp);

printf("________________________________________________________________________________________________________________________________________\n");

printf("\nYOUR TRAVEL CHOICE \n\n\t ---->  [1] NATIONAL \n\n\t ---->  [2] INTERNATIONAL \n\n");
	 
	scanf("%d",&a);
	   if(a==1)
		{
		nationaldestination(home);	
		}
	   if(a==2)
		{
		internationaldestination();
		}
		    
        


printf("________________________________________________________________________________________________________________________________________\n");
printf("\t\t\t\t\t\tNUMBER OF DAYS YOU WOULD LIKE TO BE OUR GUEST\n\n");
scanf("\t%d",&numdays);
printf("________________________________________________________________________________________________________________________________________\n");

printf("________________________________________________________________________________________________________________________________________\n");
printf("TOTAL NUMBER OF PERSONS PLANNING THE TOUR\n\n");
scanf("\t%d",&numpeople);

printf("________________________________________________________________________________________________________________________________________\n");

for(k=1;k<=numpeople;k++)
{
 printf("\n  ENTER %d NAME\n\n",k); 
 scanf("%s",peo[k].name);
 printf("\n  ENTER AGE OF %d PERSON \n\n",k);
 scanf("%d",&peo[k].age);
}

//distance hard coding

arr[0][0]=5434;
arr[0][1]=4464;
arr[0][2]=4564;
arr[0][3]=564;
arr[0][4]=5646;
arr[0][5]=5446;
arr[1][0]=2353;
arr[1][1]=4664;
arr[1][2]=4675;
arr[1][3]=4526;
arr[1][4]=6888;
arr[1][5]=3656;
arr[2][0]=3526;
arr[2][1]=8764;
arr[2][2]=3466;
arr[2][3]=325;
arr[2][4]=657;
arr[2][5]=7753;
arr[3][0]=6585;
arr[3][1]=7347;
arr[3][2]=575;
arr[3][3]=6336;
arr[3][4]=7457;
arr[3][5]=7221;
arr[4][0]=1667;
arr[4][1]=7585;
arr[4][2]=757;
arr[4][3]=5754;
arr[4][4]=4632;
arr[4][5]=9090;
arr[5][0]=357;
arr[5][1]=7568;
arr[5][2]=6846;
arr[5][3]=6748;
arr[5][4]=6843;
arr[5][5]=4565;
dis=arr[home][end];

printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("\nDISTANCE OF YOUR TRAVEL IS ------->> %d\n\n",dis);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
fp=fopen("flie1.txt","app");
fprintf(fp,"Distance of your travel is \t\t%d",dis);
fprintf(fp, "\n\n");
fclose(fp);

printf("________________________________________________________________________________________________________________________________________\n");

printf("\t\t\t\t\t\tTHESE ARE THE MODE OF TRANSPORTATIONS\n\n");


printf("\t\t\t\t\t1. ROADWAYS\t\t2. RAILWAYS\t\t3. AIRWAYS\n\n");
printf("\t\t\t\t\t\t\tWHICH MODE OF TRAVEL YOU PREFER\n\n");

scanf("%d",&mode);
printf("________________________________________________________________________________________________________________________________________\n");


fp=fopen("flie1.txt","app");

fprintf(fp,"Your mode of travel is ");

if(mode==1)
fprintf(fp,"Roadways");
if(mode==2)
fprintf(fp,"Railways");
if(mode==3)
fprintf(fp,"Airways");
fprintf(fp,"\n\n");
fclose(fp);


if(mode==1)
{ 
printf("________________________________________________________________________________________________________________________________________\n");

printf("\t\t\t\t\t\tOPTIONS AVAILALE ARE\n\n");

printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\t\t\t1. Car\t\t2. Bus\t\t3. Bike\n");

		scanf("%d",&ch3);

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of Roadways is ");

		if(ch3==1)
		fprintf(fp,"Car");
		if(ch3==2)
		fprintf(fp,"Bus");
		if(ch3==3)
		fprintf(fp,"Bike");
		fprintf(fp,"\n\n");
		fclose(fp);
printf("________________________________________________________________________________________________________________________________________\n");


		sum1=sum1+20;

		if(ch3==1)
		{ 


		printf("\t\t\t\t\t\tPICK YOUR CHOICE FOR CAR\n\n");
		printf("\t\t1. Innova\t\t2. Swift Dzire\t\t3.Tavera\t\t4. Jeep\t\t\n"); 
		scanf("%d",&ch5);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of car is ");

		if(ch5==1)
		fprintf(fp,"Innova");
		if(ch5==2)
		fprintf(fp,"Swift Dzire");
		if(ch5==3)
		fprintf(fp,"Tavera");
		if(ch5==4)
		fprintf(fp,"Jeep");
		fprintf(fp,"\n\n");
		fclose(fp);

printf("________________________________________________________________________________________________________________________________________\n");

		sum1=sum1+15; 
		printf("\n\nWOULD YOU LIKE TO TRAVEL IN:-\n\t\t\t 1. A/C\t\t 2. Non A/C \t\n");
		scanf("%d",&ac1);
printf("________________________________________________________________________________________________________________________________________\n");

		if(ac1==1)
		sum1=sum1+4;
		if(ac1==2)
		sum1=sum1+2;

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your car is ");

		if(ac1==1)
		fprintf(fp,"A/C");
		if(ac1==2)
		fprintf(fp,"Non A/C");
		fprintf(fp,"\n\n");
		fclose(fp);


		}      


		else if(ch3==2)
		{     
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\t\t\t\t\tPICK YOUR CHOICE FOR BUS\n\n");

		printf("1. Volvo bus\t\t2. Mini bus\t\t3. Double Decker\t\t\n");

		scanf("%d",&ch6);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of bus is ");

		if(ch6==1)
		fprintf(fp,"Volvo Bus");
		if(ch6==2)
		fprintf(fp,"Mini Bus");
		if(ch6==3)
		fprintf(fp,"Double Decker");
		fprintf(fp,"\n\n");
		fclose(fp);

		sum1=sum1+15;
		}      

		else if(ch3==3)
		{
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\t\t\t\tPick your choice\t\n");

		printf("\t\t1. Karizma\t\t2. Yamaha R15\t\t3. Harley Davidson\t\t4. Splendor plus\t\n");

		scanf("%d",&ch4);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of bike is ");

		if(ch4==1)
		fprintf(fp,"Karizma");
		if(ch4==2)
		fprintf(fp,"Yamaha R15");
		if(ch4==3)
		fprintf(fp,"Harley Davidson");
		if(ch4==4)
		fprintf(fp,"Splendor plus");
		fprintf(fp,"\n\n");
		fclose(fp);											
		sum1=sum1+17;

		} 
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\tYour total expenditure on transportation per day per person is >>>>>>>> %d\n",sum1);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");


}

else if(mode==2)
{

		printf("Options available:\n\n");

printf("________________________________________________________________________________________________________________________________________\n");

		printf("1.Shatabdi Express\t\t2.Rajdhani Express\t\t3.Ranikhet Express\t\t4.Ala Hazrat Express\t\t5.Sampat Express\n\n");

		scanf("%d",&train);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of train is ");

		if(train==1)
		fprintf(fp,"Shatabdi Express");
		if(train==2)
		fprintf(fp,"Rajdhani Express");
		if(train==3)
		fprintf(fp,"Ranikhet Express");
		if(train==4)
		fprintf(fp,"Ala Hazrat Express");
		if(train==5)
		fprintf(fp,"Sampat Express");
		fprintf(fp,"\n\n");
		fclose(fp);
		brr[0]=355,brr[1]=768,brr[2]=576,brr[3]=656,brr[4]=467;	    
		if(train==1)
		sum1=sum1+brr[0];
		else if(train==2)
		sum1=sum1+brr[1];
		else if(train==3)
		sum1=sum1+brr[2];
		else if(train==4)
		sum1=sum1+brr[3];
		else if(train==5)
		sum1=sum1+brr[4];
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\nPick your choice:-\n\n");
		printf("1. I-A/C\t\t2. II-A/C\t\t3. III-A/C\t");
		scanf("%d",&ac);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of A/C is ");

		if(ac==1)
		fprintf(fp,"I-A/C");
		if(ac==2)
		fprintf(fp,"II-A/C");
		if(ac==3)
		fprintf(fp,"III-A/C");

		fprintf(fp,"\n\n");
		fclose(fp);
		if(ac==1)
		{              
		sum1=sum1+15;
		}
		else if(ac==2)
		{
		sum1=sum1+10;
		}
		else if(ac==3)
		{
		sum1=sum1+8;
		}
printf("________________________________________________________________________________________________________________________________________\n");

		printf("Do you want the meals to be served\n\n");
		printf("Enter your choice:\t1. Yes\t\t2. No\t\t");
		scanf("%d",&choice);
printf("________________________________________________________________________________________________________________________________________\n");

		if(choice==1)   
				                
		{ 

		printf("1.Vegetarian\n2.Non Vegetarian\n");

		scanf("%d",&ch1);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of meal is ");

		if(ch1==1)
		fprintf(fp,"Vegetarian");
		if(ch1==2)
		fprintf(fp,"Non Vegetarian");

		fprintf(fp,"\n\n");
		fclose(fp);
printf("________________________________________________________________________________________________________________________________________\n");

		printf("1. North Indian\t\t2. South Indian\t\t3. Continental\t\t4. Chinese\t\n\n");

		scanf("%d",&ch2);

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of meal is ");

		if(ch2==1)
		fprintf(fp,"North Indian");
		if(ch2==2)
		fprintf(fp,"South Indian");
		if(ch2==3)
		fprintf(fp,"Continental");
		if(ch2==4)
		fprintf(fp,"Chinese");

		fprintf(fp,"\n\n");
		fclose(fp);

		if(ch1==1)
		{
		if(ch2==1)
		{
		  sum1=sum1+3;
		}
		if(ch2==2)
		{
		  sum1=sum1+4;
		}
		if(ch2==3)
		{
		  sum1=sum1+6;
		}
		if(ch2==4)
		{        
		 sum1=sum1+7;
		}
		printf("\n");
		}
		else if(ch1==2)
		{
		if(ch2==1)
		{
		  sum1=sum1+4;
		}
		if(ch2==2)
		{
		  sum1=sum1+5;
		}
		if(ch2==3)
		{
		  sum1=sum1+6;
		}
		if(ch2==4)
		{      
		sum1=sum1+8;
		}

		}
		printf("\n");

		}

		printf("\n\n\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\tYour total expenditure on transportation per day per person is >>>>>>>> %d\n\n",sum1);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");

}

else if(mode==3)
{
printf("________________________________________________________________________________________________________________________________________\n");

		  printf("\t\t\t\t\t\tOPTIONS AVAILABLE FOR FLIGHT ARE\n\n");

		printf("\t\t\t\t1.Air India\t\t2. Kingfisher\t\t3. Jet Airways\t\t4. Spice Jet\t\n");

		scanf("%d",&ch11);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of Airways brand is ");

		if(ch11==1)
		fprintf(fp,"Air India");
		if(ch11==2)
		fprintf(fp,"Kingfisher");
		if(ch11==3)
		fprintf(fp,"Jet Airways");
		if(ch11==4)
		fprintf(fp,"Spice Jet");

		fprintf(fp,"\n\n");
		fclose(fp);

		sum1=sum1+65;
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\tDo you want to go by:-\t\t1. Business Class\t\t2. Economy class\t\n");

		scanf("%d",&ch12);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of class is ");

		if(ch12==1)
		fprintf(fp,"Business Class");
		if(ch12==2)
		fprintf(fp,"Economy class");

		fprintf(fp,"\n\n");
		fclose(fp);

		if(ch12==1)
		{   
		sum1=sum1+30;
		}

		else if(ch12==2)
		{
		sum1=sum1+10;
		}
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\tDo you want the meals to be \t\t 1. Vegetarian \t\t 2. Non-Vegetarian\n");

		scanf("%d",&ch13);
printf("________________________________________________________________________________________________________________________________________\n");

		fp=fopen("flie1.txt","app");

		fprintf(fp,"Your choice of meal is ");

		if(ch13==1)
		fprintf(fp,"Vegetarian");
		if(ch13==2)
		fprintf(fp,"Non Vegetarian");

		fprintf(fp,"\n\n");
		fclose(fp);

		if(ch13==1)
		{
			sum1=sum1+8;
		}
		else if(ch13==2)
		{
			sum1=sum1+10;
		}
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");

		printf("\t\tYour total expenditure on transportation per day per person is >>>>>>>> %d\n",sum1);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");

}

printf("\n\n\n");
printf("________________________________________________________________________________________________________________________________________\n");

printf("PLEASE PICK YOUR CHOICE\n\n");
printf("\t\t1. 4STAR\n\t\t2. 5STAR\n\n");
scanf("%d",&asd);
printf("________________________________________________________________________________________________________________________________________\n");

fp=fopen("flie1.txt","app");

fprintf(fp,"Your choice of hotel is ");

if(asd==1)
fprintf(fp,"4 Star");
if(asd==2)
fprintf(fp,"5 Star");

fprintf(fp,"\n\n");
fclose(fp);


if(asd==1)
{
amount=1000;
printf("________________________________________________________________________________________________________________________________________\n");

printf("\t\t\tOUR HOTEL CAN PROVIDE YOU WITH SINGLE ROOMS AND DOUBLE ROOMS .\n\n");
printf("\t\t\tPLEASE PICK YOUR CHOICE\n\n  \t\t1. SINGLE ROOM\n \t\t2.DOUBLE ROOM\n");
printf("\t\t\tPER DAY CHARGES FOR\n \t\tSINGLE ROOM ->Rs 1000\n \t\tDOUBLE ROOM->Rs 2000\n\n\n");
printf("________________________________________________________________________________________________________________________________________\n");

printf("HOW MANY SINGLE ROOMS ARE REQUIRED\n\n");
scanf("%d",&sr);
printf("________________________________________________________________________________________________________________________________________\n");

amount=amount+1000;
printf("HOW MANY DOUBLE ROOMS ARE REQUIRED\n\n");
scanf("%d",&dr);

printf("________________________________________________________________________________________________________________________________________\n");
amount=amount+2000;



printf("________________________________________________________________________________________________________________________________________\n");
printf("\n\n\n");
printf("\t\t\t\t\t\tOUR HOTEL IS WIDE KNOWN FOR ITS MOUTH WATERING CUISINE\n\n");
printf("\t\t\t\t\tWOULD YOU LIKE \n\t\t\t\t\t\t1. NON VEGETARIAN \n\t\t\t\t\t\t2. VEGETARIAN\n\n");
printf("\t\t\t\t\tWE WILL BE PROVIDING YOU WITH \t BREAKFAST\t LUNCH\t DINNER\n");
printf("\t\t\t\t\t\t\t\tPLEASE NOTICE THE PRICE\n\n\n");
printf("\t\t\t\t\t\t\t\tVEGETARIAN-> Rs 400 PER PLATE\n \t\t\t\t\t\t\t\tNON VEGETARIAN->600 PER PLATE\n\n\n");

printf("\t\t\t\tHOW MANY GUESTS WOULD PREFER VEGETARIAN\n");
scanf("%d",&a);
printf("\n\n\t\t\t\tHOW MANY PERSON WOULD PREFER NON VEGETARIAN\n\n");
scanf("%d",&b);
printf("________________________________________________________________________________________________________________________________________\n");
amount=(3*a*400+3*b*600)+amount;

printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("\t\t\tYOUR TOTAL COST OF HOTEL BOOKING IS------>> %d\n",amount);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
}




 
else if(asd==2)
{
amount=2000;
printf("________________________________________________________________________________________________________________________________________\n");
printf("OUR HOTEL CAN PROVIDE YOU WITH SINGLE ROOMS AND DOUBLE ROOMS \n");
printf("PLEASE PICK YOUR CHOICE\n\t\t\t1. SINGLE ROOM\n\t\t\t2. DOUBLE ROOM\n\n");
	
printf(" PER DAY CHARGES FOR\n\t\t\t SINGLE ROOM ->Rs 3000 PER PERSON\n\t\t\t DOUBLE ROOM->Rs 6000\n \n\n\n\n");
printf("HOW MANY SINGLE ROOMS ARE REQUIRED \n\n");
scanf("%d",&sr);
amount=amount+3000*sr;
printf("HOW MANY DOUBLE ROOMS ARE REQUIRED\n\n");
scanf("%d",&dr);
printf("________________________________________________________________________________________________________________________________________\n");
amount=amount+6000*dr;
printf("\n\n\n");

printf("________________________________________________________________________________________________________________________________________\n");
printf("\n\n\n");

printf("\t\t\t\tOUR HOTEL IS WIDE KNOWN FOR ITS MOUTH WATERING CUISINE\n\n");
printf("\t\t\t\tWOULD YOU LIKE\n\t\t\t\t\t\t1. NON VEGETARIAN \n\t\t\t\t\t\t2. VEGETARIAN\n\n");
printf("\t\t\t\tHOW MANY GUESTS WOULD PREFER VEGETARIAN\n");
scanf("%d",&a);
printf("\n\n\t\t\t\t\t\tHOW MANY PERSON WOULD PREFER NON VEGETARIAN\n\n");
scanf("%d",&b);
printf("________________________________________________________________________________________________________________________________________\n");
printf("PLEASE NOTICE THE PRICE\n");
printf("\t\t\t\tVEGETARIAN-> Rs 900 PER PLATE\n\t\t\t\tNON VEGETARIAN->1500 PER PLATE\n");

amount=(3*a*900+3*b*1500)+amount;
printf("\n\n WE WILL BE PROVIDING YOU WITH \t\t BREAKFAST\t\t LUNCH \t\t DINNER\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
printf("\n\nYOUR TOTAL COST OF HOTEL BOOKING IS------>> %d\n",amount);
printf("________________________________________________________________________________________________________________________________________\n");
printf("________________________________________________________________________________________________________________________________________\n");
}

fp=fopen("flie1.txt","app");
fprintf(fp,"\n\n");

fprintf(fp,"YOUR TOTAL COST OF TRAVEL IS-------->>>>   %d",sum1*dis);
fprintf(fp,"\n\n\n");
fprintf(fp,"YOUR TOTAL COST OF HOTEL BOOKING IS-------->>>>   %d",amount*numdays);
fprintf(fp,"\n\n\n");
fprintf(fp,"YOUR TOTAL COST OF TRAVEL IS-------->>>>   %d",amount*numdays+sum1*dis);
fprintf(fp,"\n\n\n");
fclose(fp);

printf("\n\n\t\t\t\t\t\t\tYOUR BILL SUMMARY\n\n");
					

fp=fopen("flie1.txt","r");
while(chh!=EOF)
{
 chh=getc(fp);
 printf("%c",chh);
}
fclose(fp);




















}	

void nationaldestination(int home)
{

	printf("\nTHE DESTINATIONS WE TAKE YOU ARE: \n");
	printf("________________________________________________________________________________________________________________________________________\n");

	if(home==1)
		printf("2.DELHI\t\t3.JAIPUR\t\t4.CHENNAI\t\t5.KOLKATA\t\t6.HYDERABAD\n");
	else if(home==2)
		printf("1.MUMBAI\t\t3.JAIPUR\t\t4.CHENNAI\t\t5.KOLKATA\t\t6.HYDERABAD\n");
	else if(home==3)
		printf("1.MUMBAI\t\t2.DELHI\t\t4.CHENNAI\t\t5.KOLKATA\t\t6.HYDERABAD\n");
	else if(home==4)
		printf("1.MUMBAI\t\t2.DELHI\t\t3.JAIPUR\t\t5.KOLKATA\t\t6.HYDERABAD\n");
	else if(home==5)
		printf("1.MUMBAI\t\t2.DELHI\t\t3.JAIPUR\t\t4.CHENNAI\t\t6.HYDERABAD\n");
	else if(home==6)
		printf("1.MUMBAI\t\t2.DELHI\t\t3.JAIPUR\t\t4.CHENNAI\t\t5.KOLKATA\n");	

printf("________________________________________________________________________________________________________________________________________\n");
	printf("\nYOUR CHOICE = ");
	scanf("%d",&end);

fp=fopen("flie1.txt","app");
fprintf(fp, "Destination city(NAT)-\t\t\t");

if(end==1)
fprintf(fp, "Mumbai");
else if(end==2)
fprintf(fp, "Delhi");
else if(end==3)
fprintf(fp, "Jaipur");
else if(end==4)
fprintf(fp, "Chennai");
else if(end==5)
fprintf(fp, "Kolkata");
else if(end==6)
fprintf(fp, "Hyderbad");

fprintf(fp, "\n\n");
fclose(fp);

}

void internationaldestination()
{
	printf("\nTHE DESTINATIONS WE TAKE YOU ARE: \n");
printf("________________________________________________________________________________________________________________________________________\n");
	printf("1.TOKYO\t\t2.NEWYORK\t\t3.BEIJING\t\t4.SYDNEY\t\t5.SINGAPORE\t\t6.PARIS\n");
printf("________________________________________________________________________________________________________________________________________\n");
	printf("\nYOUR CHOICE = ");
	scanf("%d",&end);
fp=fopen("flie1.txt","app");
fprintf(fp, "Destination city(INT)-\t\t\t");

if(end==1)
fprintf(fp, "Tokyo");
else if(end==2)
fprintf(fp, "Newyork");
else if(end==3)
fprintf(fp, "Beijing");
else if(end==4)
fprintf(fp, "Sydney");
else if(end==5)
fprintf(fp, "Singapore");
else if(end==6)
fprintf(fp, "Paris");

fprintf(fp, "\n\n");
fclose(fp);
}








