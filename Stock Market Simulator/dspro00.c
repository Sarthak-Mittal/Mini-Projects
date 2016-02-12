#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node2 *create_node();
void generate_quantity();
void terminal_print();
int req_number();
int check_prices(int sell);

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

