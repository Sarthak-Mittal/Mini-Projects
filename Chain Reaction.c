#include<stdio.h>
void burst1(int x,int y);
void burst2(int x,int y);
void burstcorner1(int x,int y);
void burstborder1(int x,int y);
void burstborder2(int x,int y);
void burstcorner2(int x,int y);
void checking1(void);
void checking2(void);
void winner(void);

int arr[10][10];

int main()
{
int i,j,k,m,x,y,c;
int d;
for(i=0;i<=9;i++)
{
	for(j=0;j<=9;j++)
	{
	arr[i][j]=0;
	}
}

for(k=0;k<=9;k++)
{
	for(m=0;m<=9;m++)
	{
	printf("   %d   ",arr[k][m]);
	}
printf("\n\n\n");
}

//taking values from user

for(c=0;;c++)
{

if(c>0)
{winner();}

line1:
printf("Player 1\n");
printf("Where you want to click\n");
printf("--> press '1' for Corners\n");
printf("--> press '2' for Borders\n");
printf("--> press '3' for Insides\n");
scanf("%d",&d);
printf("enter co-ordinate");
scanf("%d%d",&y,&x);
		
	
if(arr[x-1][y-1]<=3)
{
switch(d)
{

case 1:			
			if(arr[x-1][y-1]==0)
				{arr[x-1][y-1]=1;
				break;}
			else if(arr[x-1][y-1]==1)
				burstcorner1(x-1,y-1);

case 2:    	
			if(arr[x-1][y-1]==0)	
				{arr[x-1][y-1]=1;
				break;}		
			else if(arr[x-1][y-1]==1)
				{arr[x-1][y-1]=2;
				break;}
			else if(arr[x-1][y-1]==2)
				burstborder1(x-1,y-1);
			
case 3:
			if(arr[x-1][y-1]==0)
				{arr[x-1][y-1]=1;
				break;}		
			else if(arr[x-1][y-1]==1)
				{arr[x-1][y-1]=2;
				break;}
			else if(arr[x-1][y-1]==2)
				{arr[x-1][y-1]=3;
				break;}
			else if(arr[x-1][y-1]==3)
				burst1(x-1,y-1);
			
}		


				for(k=0;k<=9;k++)
				{
					for(m=0;m<=9;m++)
					{
				   	printf("   %d   ",arr[k][m]);
				   	}
				printf("\n\n\n");
			        }
}

else{goto line1;}


if(c>0)
{winner();}


line2:
printf("Player 2\n");
printf("Where you want to click\n");
printf("--> press '1' for Corners\n");
printf("--> press '2' for Borders\n");
printf("--> press '3' for Insides\n");
scanf("%d",&d);
printf("enter co-ordinate");
scanf("%d%d",&y,&x);
		
	

if(arr[x-1][y-1]>=5 || arr[x-1][y-1]==0)
{
switch(d)
{


case 1:		
			if(arr[x-1][y-1]==0)	
				{arr[x-1][y-1]=5;
				break;}		
			else if(arr[x-1][y-1]==5)
				burstcorner2(x-1,y-1);			  		

case 2:
			if(arr[x-1][y-1]==0)	
				{arr[x-1][y-1]=5;
				break;}		
			else if(arr[x-1][y-1]==5)
				{arr[x-1][y-1]=6;
				break;}
			else if(arr[x-1][y-1]==6)
				burstborder2(x-1,y-1);
	
case 3:
			if(arr[x-1][y-1]==0)
				{arr[x-1][y-1]=5;
				break;}
			else if(arr[x-1][y-1]==5)
				{arr[x-1][y-1]=6;
				break;}
			else if(arr[x-1][y-1]==6)
				{arr[x-1][y-1]=7;
				break;}
	 		else if(arr[x-1][y-1]==7)
				{burst2(x-1,y-1);}
							
			
}		


				for(k=0;k<=9;k++)
				{
					for(m=0;m<=9;m++)
					{
				   	printf("   %d   ",arr[k][m]);
				   	}
				printf("\n\n\n");
			        }
}

	else{goto line2;}

}

return 0;
}

void burst1(int x,int y)
{

arr[x][y]=0;
if(arr[x][y-1]>4)
	   arr[x][y-1]-=3;
else 
	   arr[x][y-1]++;
if(arr[x][y+1]>4)
	   arr[x][y+1]-=3;
	else 
	   arr[x][y+1]++;
if(arr[x-1][y]>4)
	   arr[x-1][y]-=3;
	else 
	   arr[x-1][y]++;
if(arr[x+1][y]>4)
	   arr[x+1][y]-=3;
	else 
	   arr[x+1][y]++;


checking1();
}
	         




void burst2(int x,int y)
{

arr[x][y]=0;

if(arr[x][y-1]>4)
	   arr[x][y-1]++;
else 
	   arr[x][y-1]+=5;

if(arr[x][y+1]>4)
	   arr[x][y+1]++;
else 
	   arr[x][y+1]+=5;

if(arr[x-1][y]>4)
	   arr[x-1][y]++;
else 
	   arr[x-1][y]+=5;

if(arr[x+1][y]>4)
	   arr[x+1][y]++;
else 
	   arr[x+1][y]+=5;
checking2();
}


void burstcorner1(int x,int y)
{
arr[x][y]=0;


if(x==0 && y==0)
	{
	if(arr[x][y+1]>4)
		   arr[x][y+1]-=3;
	else 
		   arr[x][y+1]++;

	if(arr[x+1][y]>4)
		   arr[x+1][y]-=3;
	else 
		   arr[x+1][y]++;
	}

else if(x==0 && y==9)
	{
	if(arr[x][y-1]>4)
		   arr[x][y-1]-=3;
	else 
		   arr[x][y-1]++;

	if(arr[x+1][y]>4)
		   arr[x+1][y]-=3;
	else 
		   arr[x+1][y]++;
	}
else if(x==9 && y==0)
	{
	if(arr[x-1][y]>4)
		   arr[x-1][y]-=3;
	else 
		   arr[x-1][y]++;

	if(arr[x][y+1]>4)
		   arr[x][y+1]-=3;
	else 
		   arr[x][y+1]++;
	}
else if(x==9 && y==9)
	{
	if(arr[x-1][y]>4)
	   	arr[x-1][y]-=3;
	else 
	   	arr[x-1][y]++;

	if(arr[x][y-1]>4)
		arr[x][y-1]-=3;
	else 
		arr[x][y-1]++;
	}
checking1();
}

void burstcorner2(int x,int y)
{

arr[x][y]=0;

if(x==0 && y==0)
	{
	if(arr[x][y+1]>4)
		   arr[x][y+1]++;
	else 
		   arr[x][y+1]+=5;

	if(arr[x+1][y]>4)
		   arr[x+1][y]++;
	else 
		   arr[x+1][y]+=5;
	}

else if(x==0 && y==9)
	{
	if(arr[x][y-1]>4)
		   arr[x][y-1]++;
	else 
		   arr[x][y-1]+=5;

	if(arr[x+1][y]>4)
		   arr[x+1][y]++;
	else 
		   arr[x+1][y]+=5;
	}

else if(x==9 && y==0)
	{
	if(arr[x-1][y]>4)
		   arr[x-1][y]++;
	else 
		   arr[x-1][y]+=5;

	if(arr[x][y+1]>4)
		   arr[x][y+1]++;
	else 
		   arr[x][y+1]+=5;
	}


else if(x==9 && y==9)
	{
	if(arr[x-1][y]>4)
		   arr[x-1][y]++;
	else 
		   arr[x-1][y]+=5;

	if(arr[x][y-1]>4)
		   arr[x][y-1]++;
	else 
		   arr[x][y-1]+=5;
	}

checking2();
}

void burstborder1(int x,int y)
{

arr[x][y]=0;

	if((x==0) && (y<=8) && (y>=1))
	{
			if(arr[x][y-1]>4)
			   arr[x][y-1]-=3;
			else 
			   arr[x][y-1]++;

			if(arr[x][y+1]>4)
			   arr[x][y+1]-=3;
			else 
			   arr[x][y+1]++;

			if(arr[x+1][y]>4)
			   arr[x+1][y]-=3;
			else 
			   arr[x+1][y]++;

	}

	else if((x==9) && (y<=8) && (y>=1))
	{
			if(arr[x][y-1]>4)
			   arr[x][y-1]-=3;
			else 
			   arr[x][y-1]++;

			if(arr[x][y+1]>4)
			   arr[x][y+1]-=3;
			else 
			   arr[x][y+1]++;

			if(arr[x-1][y]>4)
			   arr[x-1][y]-=3;
			else 
			   arr[x-1][y]++;
			
	}

	else if((y==0) && (x<=8) && (x>=1))
	{
		if(arr[x][y+1]>4)
			   arr[x][y+1]-=3;
		else 
			   arr[x][y+1]++;
		if(arr[x-1][y]>4)
			   arr[x-1][y]-=3;
		else 
			   arr[x-1][y]++;
		if(arr[x+1][y]>4)
			   arr[x+1][y]-=3;
		else 
			   arr[x+1][y]++;

	}

	else if((y==9) && (x<=8) && (x>=1))
	{

		if(arr[x][y-1]>4)
		   arr[x][y-1]-=3;
		else
		   arr[x][y-1]++;

		if(arr[x-1][y]>4)
		   arr[x-1][y]-=3;
		else
		   arr[x-1][y]++;

		if(arr[x+1][y]>4)
		   arr[x+1][y]-=3;
		else
		   arr[x+1][y]++;

	}

checking1();
}

void burstborder2(int x,int y)
{

arr[x][y]=0;


	if((x==0) && (y<=8) && (y>=1))
	{

		if(arr[x][y-1]>4)
			   arr[x][y-1]++;
		else 
			   arr[x][y-1]+=5;
		if(arr[x][y+1]>4)
			   arr[x][y+1]++;
		else 
			   arr[x][y+1]+=5;
		if(arr[x+1][y]>4)
			   arr[x+1][y]++;
		else 
			   arr[x+1][y]+=5;

	}

	else if((x==9) && (y<=8) && (y>=1))
	{

		if(arr[x][y-1]>4)
			   arr[x][y-1]++;
		else 
			   arr[x][y-1]+=5;
		if(arr[x][y+1]>4)
			   arr[x][y+1]++;
		else 
			   arr[x][y+1]+=5;
		if(arr[x-1][y]>4)
			   arr[x-1][y]++;
		else 
			   arr[x-1][y]+=5;
	}

	else if((y==0) && (x<=8) && (x>=1))
	{

		if(arr[x][y+1]>4)
			   arr[x][y+1]++;
		else 
			   arr[x][y+1]+=5;
		if(arr[x-1][y]>4)
			   arr[x-1][y]++;
		else 
			   arr[x-1][y]+=5;
		if(arr[x+1][y]>4)
			   arr[x+1][y]++;
		else 
			   arr[x+1][y]+=5;

	}

	else if((y==9) && (x<=8) && (x>=1))
	{

		if(arr[x][y-1]>4)
			   arr[x][y-1]++;
		else 
			   arr[x][y-1]+=5;
		if(arr[x-1][y]>4)
			   arr[x-1][y]++;
		else 
			   arr[x-1][y]+=5;
		if(arr[x+1][y]>4)
			   arr[x+1][y]++;
		else 
			   arr[x+1][y]+=5;

	}

checking2();
}

void checking1(void)
{
int i,j;

for(j=0;j<3;j++)
{

	switch(j)
	{


	case 0:


		if(arr[0][0]==2 || arr[9][0]==2 || arr[0][9]==2 || arr[9][9]==2)
		{
			if(arr[0][0]==2)
			burstcorner1(0,0);
			else if(arr[9][0]==2)
			burstcorner1(9,0);
			else if(arr[0][9]==2)
			burstcorner1(0,9);
			else if(arr[9][9]==2)
			burstcorner1(9,9);
		}

	case 1:

		for(i=1;i<=8;i++)
		{
		if(arr[0][i]==3 || arr[9][i]==3 || arr[i][0]==3 || arr[i][9]==3)
		{
			if(arr[0][i]==3)
			burstborder1(0,i);
			else if(arr[i][0]==3)
			burstborder1(i,0);
			else if(arr[9][i]==3)
			burstborder1(9,i);
			else if(arr[i][9]==3)
			burstborder1(i,9);
		}
		}


	case 2:

		for(i=1;i<9;i++)
		{
			for(j=1;j<9;j++)
			{
				if(arr[i][j]==4)
				burst1(i,j);
			}
		}

	}

}

}


void checking2(void)
{
int i,j;

for(j=0;j<3;j++)
{

	switch(j)
	{


	case 0:


		if(arr[0][0]==6 || arr[9][0]==6 || arr[0][9]==6 || arr[9][9]==6)
		{
			if(arr[0][0]==6)
			burstcorner2(0,0);
			else if(arr[9][0]==6)
			burstcorner2(9,0);
			else if(arr[0][9]==6)
			burstcorner2(0,9);
			else if(arr[9][9]==6)
			burstcorner2(9,9);
		}

	case 1:

		for(i=1;i<=8;i++)
		{
		if(arr[0][i]==7 || arr[9][i]==7 || arr[i][0]==7 || arr[i][9]==7)
		{
			if(arr[0][i]==7)
			burstborder2(0,i);
			else if(arr[i][0]==7)
			burstborder2(i,0);
			else if(arr[9][i]==7)
			burstborder2(9,i);
			else if(arr[i][9]==7)
			burstborder2(i,9);
		}
		}


	case 2:

		for(i=1;i<9;i++)
		{
			for(j=1;j<9;j++)
			{
				if(arr[i][j]==8)
				burst2(i,j);
			}
		}

	}

}

}




void winner(void)
{
int plr1,plr2,i,j;

plr1=0;
plr2=0;

for(i=0;i<=9;i++)
{
	for(j=0;j<=9;j++)
	{

if(arr[i][j]==1 || arr[i][j]==2 || arr[i][j]==3)
plr1++;
else if(arr[i][j]==5 || arr[i][j]==6 || arr[i][j]==7)
plr2++;
	}
}


if(plr1==0)
	{
printf("__________________________________________________________________________________________________________________________________\n");
printf("\t\t\t\tPLAYER 2 IS WINNER\n");
printf("__________________________________________________________________________________________________________________________________\n");
}
else if(plr2==0)
{
printf("__________________________________________________________________________________________________________________________________\n");
printf("\t\t\t\tPLAYER 1 IS WINNER\n");
printf("__________________________________________________________________________________________________________________________________\n");
}

}
