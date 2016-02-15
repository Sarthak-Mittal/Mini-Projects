#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node2 *create_node();
void generate_quantity();
void terminal_print();
int req_number();
int check_prices(int sell);
int sum_quantity(struct node2 *start);
void print_nifty();
void print_itc();
void print_reliance();
void print_alfapro();
void print_maxxam();
void print_versa();
void setting_bid_choice();
void setting_varibles_by_choices_made_bidding(int index_company, int index_price, int quantity_share);

struct node1
{
float price;
struct node2 *next;
};

struct node2
{
int quantity;
struct node2 *next;
}*current;

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
time_t t;
int i;
srand(time(&t));
for(i=0;i<10;i++)
{
	srand(time(&t));
	bid1[i].price = (80+(((rand())%9)/100));
	bid2[i].price = (60+(((rand())%9)/100));
	bid3[i].price = (75+(((rand())%9)/100));
	bid4[i].price = (30+(((rand())%9)/100));
	bid5[i].price = (13+(((rand())%9)/100));
	bid6[i].price = (37+(((rand())%9)/100));
	ask1[i].price = (80+(((rand())%9)/100));
	ask2[i].price = (60+(((rand())%9)/100));
	ask3[i].price = (75+(((rand())%9)/100));
	ask4[i].price = (30+(((rand())%9)/100));
	ask5[i].price = (13+(((rand())%9)/100));
	ask6[i].price = (37+(((rand())%9)/100));
}

generate_quantity();

printf(" SYMBOL   \t BID PRICE \t BID QUANTITY \t ASK PRICE \t ASK QUANTITY \t     LTP     \t   TTQ\n");
printf(" NIFTY    \t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid1[4].price,bid1[4].next->quantity,ask1[3].price,ask1[3].next->quantity );

printf(" ITC      \t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid2[5].price,bid1[5].next->quantity,ask2[0].price,ask1[0].next->quantity );

printf(" RELIANCE \t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid3[7].price,bid1[7].next->quantity,ask3[1].price,ask1[1].next->quantity);

printf(" ALPHA PRO\t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid4[2].price,bid1[2].next->quantity,ask4[8].price,ask1[8].next->quantity );

printf(" MAXXAM   \t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid5[1].price,bid1[4].next->quantity,ask5[2].price,ask1[2].next->quantity );

printf(" VERSAR   \t     %.02f    \t      %d      \t     %.02f    \t     %d       \t           \t   \n",bid6[8].price,bid1[8].next->quantity,ask6[4].price,ask1[4].next->quantity );
/*
//srand(time(&t));
//test = (rand() % 9)/100;
//printf("%0.2f",test);
*/
return 0;
}


/*
 * This function generates random values for stock quantity.
 */

void generate_quantity()
{
int i,n;
struct node2 *end;

for(i=0;i<10;i++)
{
	end = create_node();
	n=(rand()%49)*50+369;
	bid1[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%47)*50+300;
	bid2[i].next = end;	
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%43)*50+487;
	bid3[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%39)*50+483;
	bid4[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%43)*50+903;
	bid5[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%24)*50+632;
	bid6[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%65)*50+343;
	ask1[i].next = end;
	end->quantity = 18*i*i+45*i+850;

	end = create_node();
	n=(rand()%35)*50+644;
	ask1[i].next = end;
	end->quantity = 18*i*i+22*i+450;

	end = create_node();
	n=(rand()%41)*50+150;
	ask1[i].next = end;
	end->quantity = 18*i*i+25*i+450;

	end = create_node();
	n=(rand()%39)*50+543;
	ask1[i].next = end;
	end->quantity = 18*i*i+49*i+450;

	end = create_node();
	n=(rand()%75)*50+482;
	ask1[i].next = end;
	end->quantity = 18*i*i+39*i+450;

	end = create_node();
	n=(rand()%45)*50+133;
	ask1[i].next = end;
	end->quantity = 18*i*i+83*i+450;

}

}

/*
 *This function is used to create new node of second type i.e. struct node2
 */

struct node2 *create_node()
{
struct node2 *end;
end = (struct node2*)malloc(sizeof(struct node2));
end->next = NULL;
return end;
}


 *This function is responsible to print data of terminal
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void terminal_print()
{

time_t t;

srand((unsigned) time(&t));

//sleep(2);

printf(" SYMBOL   \t|BID PRICE \t |BID QUANTITY \t|ASK PRICE \t |ASK QUANTITY \t |LTP \t|TTQ\n");

print_nifty();
print_itc();
print_reliance();
print_alfapro();
print_maxxam();
print_versa();


printf("\n-------------------------------------------------------------------------------------------------------------\n");
printf("-------------------------------------------------------------------------------------------------------------\n\n");

sleep(5);

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
int check_prices(int sell)
{
int bid1;

time_t t;
srand((unsigned) time(&t));
srand(time(&t));

bid1 = (rand() % (sell+1));
 printf("%d\n",bid1);
return bid1;
}

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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT NIFTY VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_nifty()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask1[sell_part].price;
bid = bid1[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" NIFTY     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT ITC VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_itc()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask2[sell_part].price;
bid = bid2[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" ITC     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT RELIANCE VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_reliance()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask3[sell_part].price;
bid = bid3[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" RELIANCE     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT ALFA PRO VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_alfapro()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask4[sell_part].price;
bid = bid4[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" ALFA PRO     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT ALFA PRO VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_alfapro()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask4[sell_part].price;
bid = bid4[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" ALFA PRO     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT MAXXAM VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_maxxam()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask5[sell_part].price;
bid = bid5[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" MAXXAM     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *PRINT VERSA VALUES
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_versa()
{

int bid ,sell ,bid_q ,sell_q ,last_t_price ,last_t_quantity ,sell_part ,bid_part;

last_t_price = 0;
last_t_quantity = 0;
sell_part = req_number();
bid_part = check_prices(sell_part);

sell = ask6[sell_part].price;
bid = bid6[bid_part].price;

bid_q  = sum_quantity(bid1[bid_part].next);
sell_q  = sum_quantity(ask1[sell_part].next);

if(sell == bid)
{
	last_t_price = bid;
	if(bid_q >= sell_q)
	{last_t_quantity = bid_q - sell_q;}
	else
	{last_t_quantity = sell_q - bid_q;}
}
printf(" VERSA     \t| %d  \t \t | %d  \t| %d  \t \t | %d  \t | %d \t| %d   \n",bid,bid_q,sell,sell_q,last_t_price,last_t_quantity );

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *This function sets choices of biding company and bidding price
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setting_bid_choice()
{
int ch_company,ch_price,quantity_share;

printf("Enter company's name :");
scanf("%d\n",&ch_company);
printf("Enter bid price :");
scanf("%d\n",&ch_price);
printf("Enter share quantity :");
scanf("%d\n",&quantity_share);

setting_varibles_by_choices_made_bidding(ch_company-1,ch_price-1,quantity_share);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *This function sets variables according to choices made for bidding
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setting_varibles_by_choices_made_bidding(int index_company, int index_price, int quantity_share)
{

struct node1 *super_pointer;
struct node2 *first_element;
struct node2 *newnode;

switch(index_company)
{

case 1:
	super_pointer = &bid1[index_price];
	first_element = super_pointer->next;
	break;
case 2:
	super_pointer = &bid2[index_price];
	first_element = super_pointer->next;
	break;
case 3:
	super_pointer = &bid3[index_price];
	first_element = super_pointer->next;
	break;
case 4:
	super_pointer = &bid4[index_price];
	first_element = super_pointer->next;
	break;
case 5:
	super_pointer = &bid5[index_price];
	first_element = super_pointer->next;
	break;
case 6:
	super_pointer = &bid6[index_price];
	first_element = super_pointer->next;
	break;

}

newnode = create_node();
newnode->quantity = quantity_share;
newnode->next = NULL;

add_node_to_correct_place(newnode, super_pointer	);

}


