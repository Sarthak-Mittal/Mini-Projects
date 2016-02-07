#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

struct node2 *create_node();
void generate_quantity();
void terminal_print();
void printing_stocks();
int req_number();
int check_prices(int sell_part);
int sum_quantity(struct node2 *start);

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

int bid,sell,bid_q,sell_q,last_t_price,last_t_quantity,sell_part,bid_part;
int i,j,n,c;
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

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 80 + sell_part;
bid = 80 + bid_part;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);


if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}


printf(" NIFTY     \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid1[bid_part].price,bid_q,ask1[sell_part].price,sell_q,last_t_price,last_t_quantity );

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 60 + sell_part;
bid = 60 + bid_part;

bid_q  = sum_quantity(bid2[bid_part].next);
sell_q  = sum_quantity(ask2[sell_part].next);

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}



printf(" ITC       \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid2[bid_part].price,bid_q,ask2[sell_part].price,sell_q,last_t_price,last_t_quantity );

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 75 + sell_part;
bid = 75 + bid_part;

bid_q  = sum_quantity(bid3[bid_part].next);
sell_q  = sum_quantity(ask3[sell_part].next);

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}



printf(" RELIANCE  \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid3[bid_part].price,bid_q,ask3[sell_part].price,sell_q,last_t_price,last_t_quantity );

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 30 + sell_part;
bid = 30 + bid_part;

bid_q  = sum_quantity(bid4[bid_part].next);
sell_q  = sum_quantity(ask4[sell_part].next);

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}

printf(" ALPHA PRO \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid4[bid_part].price,bid_q,ask4[sell_part].price,sell_q,last_t_price,last_t_quantity );

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 13 + sell_part;
bid = 13 + bid_part;

bid_q  = sum_quantity(bid5[bid_part].next);
sell_q  = sum_quantity(ask5[sell_part].next);

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}



printf(" MAXXAM    \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid5[bid_part].price,bid_q,ask5[sell_part].price,sell_q,last_t_price,last_t_quantity );

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 37 + sell_part;
bid = 37 + bid_part;

bid_q  = sum_quantity(bid6[bid_part].next);
sell_q  = sum_quantity(ask6[sell_part].next);

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}



printf(" VERSAR    \t| %.02f  \t | %d  \t| %.02f  \t | %d  \t| %d  \t| %d   \n",bid6[bid_part].price,bid_q,ask6[sell_part].price,sell_q,last_t_price,last_t_quantity );


printf("\n-------------------------------------------------------------------------------------------------------------\n");
printf("-------------------------------------------------------------------------------------------------------------\n\n");



}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *Gives a random value when needed or called
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int req_number()
{
int called;
time_t t;
srand((unsigned) time(&t));
srand(time(&t));
called = rand() % 9;
return called;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *This function is used to set biding and selling prices properly
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int check_prices(int sell_part)
{
int bid_part;
bid_part = 11;

  while(bid_part >= sell_part)
	{
	bid_part = req_number();
	}

return bid_part;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
void printing_stocks()
{
int bid,sell,bid_q,sell_q,last_t_price,last_t_quantity,sell_part,bid_part;
last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = 80 + sell_part;
bid = 80 + bid_part;

bid_q  = sum_quantity(bid1[bid].next);
sell_q  = sum_quantity(ask1[sell].next);

bid_q = bid_q % 1000;
sell_q = sell_q % 1000;

if(sell = bid)
{
	last_t_price = sell;
	if(bid_q >= sell_q)
	last_t_quantity = bid_q - sell_q;
	last_t_quantity = sell_q - bid_q;
}

//printf("%d",bid1[bid_part].price);
printf("%d",bid_q);
//printf("%d",ask1[sell_part].price);
printf("%d",sell_q);
printf("%d",last_t_price);
printf("%d",last_t_quantity);

}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *it sum up the quantity of shares when provided with pointer variable to that linked list.
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int sum_quantity(struct node2 *start)
{
int sum = 0;

  while(start->next != NULL)
	{
	sum = sum + start->quantity;
	start = start->next;
	}

sum = sum + start->quantity;
return sum;
}


