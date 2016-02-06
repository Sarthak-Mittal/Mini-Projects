#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

struct node2 *create_node();
void generate_quantity();
void terminal_print();

struct node1
{
float price;
struct node2 *next;
};

struct node2
{
int quantity;
struct node2 *next;
};

struct node1 bid1[10];
struct node1 bid2[10];
struct node1 bid3[10];
struct node1 bid4[10];
struct node1 bid5[10];
struct node1 bid6[10];

struct node1 ask1[10];
struct node1 ask2[10];
struct node1 ask3[10];
struct node1 ask4[10];
struct node1 ask5[10];
struct node1 ask6[10];

/*
 *MAIN FUNCTION STARTS HERE
 */

int main()
{

int j;
char choice;
int choice1;
for(j=0;j<10;j++)
{
printf("Press 's' if you want to bid\n");
scanf("%c",&choice);

if(choice == 's')
{
printf("Choose one of them\n");
printf("1. SELL\n");
printf("2. BUY\n");
printf("3. NOTIFICATIONS\n");
scanf("%d",&choice1);

	switch(choice1)
	{

	case 1:
	//call sell function
	printf("	//call sell function\n\n");
	break;

	case 2:
	//call buy function
	printf("	//call buy function\n\n");
	break;

	case 3:
	//open notifications
	printf("	//open notifications\n\n");
	break;

	}
}

terminal_print();
}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 * This function generates random values for stock quantity.
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void generate_quantity()
{
int n,i;
struct node2 *end;


for(i=0;i<10;i++)

{
	end = create_node();
	n=(rand()%10000);
	bid1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	bid2[i].next = end;	
	end->quantity = n; 

	end = create_node();
	n=(rand()%10000);
	bid3[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	bid4[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	bid5[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	bid6[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

	end = create_node();
	n=(rand()%10000);
	ask1[i].next = end;
	end->quantity = n;

}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *This function is used to create new node of second type i.e. struct node2
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct node2 *create_node()
{
struct node2 *end;
end = (struct node2*)malloc(sizeof(struct node2));
end->next = NULL;
return end;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *This function is responsible to print data of terminal
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void terminal_print()
{

int i,j,n;
time_t t;
char choice;
n = 10 ;
srand((unsigned) time(&t));
for(i=0;i<n;i++)
{
	srand(time(&t));
	bid1[i].price = (80+i);
	bid2[i].price = (60+i);
	bid3[i].price = (75+i);
	bid4[i].price = (30+i);
	bid5[i].price = (13+i);
	bid6[i].price = (37+i);
	ask1[i].price = (80+i);
	ask2[i].price = (60+i);
	ask3[i].price = (75+i);
	ask4[i].price = (30+i);
	ask5[i].price = (13+i);
	ask6[i].price = (37+i);
}

generate_quantity();

sleep(2);

printf(" SYMBOL   \t|BID PRICE \t |BID QUANTITY \t|ASK PRICE \t |ASK QUANTITY \t |LTP \t|TTQ\n");
printf(" NIFTY     \t| %.02f  \t | %d  \t| %.02f  \t | %d   \n",bid1[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask1[(rand()%9)].price,ask1[(rand()%9)].next->quantity );


printf(" ITC       \t| %.02f  \t | %d  \t| %.02f  \t | %d    \n",bid2[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask2[(rand()%9)].price,ask1[(rand()%9)].next->quantity );


printf(" RELIANCE  \t| %.02f  \t | %d  \t| %.02f  \t | %d    \n",bid3[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask3[(rand()%9)].price,ask1[(rand()%9)].next->quantity);


printf(" ALPHA PRO \t| %.02f  \t | %d  \t| %.02f  \t | %d    \n",bid4[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask4[(rand()%9)].price,ask1[(rand()%9)].next->quantity );


printf(" MAXXAM    \t| %.02f  \t | %d  \t| %.02f  \t | %d    \n",bid5[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask5[(rand()%9)].price,ask1[(rand()%9)].next->quantity );


printf(" VERSAR    \t| %.02f  \t | %d  \t| %.02f  \t | %d    \n",bid6[(rand()%9)].price,bid1[(rand()%9)].next->quantity,ask6[(rand()%9)].price,ask1[(rand()%9)].next->quantity );

printf("\n-------------------------------------------------------------------------------------------------------------\n");
printf("-------------------------------------------------------------------------------------------------------------\n\n");


}


