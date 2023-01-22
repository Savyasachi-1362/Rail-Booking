#include<stdio.h>
#include<string.h>
static int pnr=0;static int count=0; int i,j,k;
static int t[7][7][40];
 struct ticket
{
	char name[2][50];

int destcode;
int coach;
int seat;
int id[4];
int dob[3];
int age;
int cost;
char sex;
} ticket;

static struct ticket tick[3000];
void update()
{
int i,j,k;
for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			for(k=0;k<40;k++)
			
			t[i][j][k]=1;
			}
}		}
static void avl_seats(int d)
{ int temp;
	printf(" list of available lower berths \n");
	int x[10]={0,3,8,11,16,19,24,27,32,35};
	for(i=0;i<7;i++)
	{
		printf("coach s%d:",i+1);
		for(j=0;j<10;j++)
		{
			temp=x[j];
			if(t[d-1][i][temp]==1)
			printf("%d ",x[j]+1);
		}
	printf("\n");
	}
	printf("\n");
printf(" list of available middle berths \n");
int y[10]= {1,4,9,12,17,20,25,28,33,36};
for(i=0;i<7;i++)
	{
		printf("coach s%d:",i+1);
		for(j=0;j<10;j++)
		{
			temp=y[j];
			if(t[d-1][i][temp]==1)
			printf("%d ",y[j]+1);
		}
	printf("\n");
	}
	printf("\n");
printf(" list of available upper berths \n");
int z[10]= {2,5,10,13,18,21,26,29,34,37};
for(i=0;i<7;i++)
	{
		printf("coach s%d:",i+1);
		for(j=0;j<10;j++)
		{
			temp=z[j];
			if(t[d][i][temp]==1)
			printf("%d ",z[j]+1);
		}
	printf("\n");
}
printf("\n");
	printf("list of available side berths are \n");
	int w[10]={6,7,14,15,22,23,30,31,38,39};
	for(i=0;i<7;i++)
	{
		printf("coach s%d:",i+1);
		for(j=0;j<10;j++)
		{
			temp=w[j];
			if(t[d-1][i][temp]==1)
			printf("%d ",w[j]+1);
		}
	printf("\n");
	}
printf("\n");
}
static int seatselect(int d,int c,int s)
{
	int x;
 
 if (t[d-1][c-1][s-1]==1)
  	x=1;
else
  	x=0;
return x;
}
int dobcheck(int d,int m,int y)
{
	int x=0;
	if(y<2020&&y>1920)
	x++;
	if(m>0&&m<13)
	x++;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if (d>0&&d<32)
		x++;
	}
	if(m==4||m==6||m==9||m==11)
	{
		if (d>0&&d<31)
		x++;
	}
	if(m==2)
	{
		if(y%4==0&&d>0&&d<30)
		x++;
		if(y%4!=0&&d<29&&d>0)
		x++;
	}
return x;
}
void display(int pnr)
	{
	    printf("*************************************\n");	
	   printf("*NAME:");
	   for(i-0;i<2;i++)
		printf("%s ",tick[pnr].name[i]);
		printf("\n");
		printf("*DOB:");
		for(i=0;i<3;i++)
		printf("%d ",tick[pnr].dob[i]);
		printf("\n");
		printf("*Stn1: Delhi Central\n");
		if(tick[pnr].destcode==1)
		{
		printf("*Stn2:Bangalore City\n");
		tick[pnr].cost=1000;
	}
		if(tick[pnr].destcode==2)
		{
		printf("*Stn2:Bombay VT\n");
		tick[pnr].cost=900;
	}
		if(tick[pnr].destcode==3)
		{
		printf("*Stn2:Calcutta-Howrah Jn\n");
		tick[pnr].cost=990;
	}
		if(tick[pnr].destcode==4)
		{
		printf("*Stn2:Karnavati Jn\n");
	    tick[pnr].cost=1000;
	}
		if(tick[pnr].destcode==5)
		{
		printf("*Stn2:HYD Nizammudin Stn\n");
		tick[pnr].cost=900;
	}
		if(tick[pnr].destcode==6)
		{
		printf("*Stn2:Madras Central\n");
		tick[pnr].cost=1000;
	}
		if(tick[pnr].destcode==7)
		{
		printf("*Stn2:Trivandrum Terminus\n");
        tick[pnr].cost=1200;
	}
	printf("*COACH:%d\n",tick[pnr].coach);
	printf("*SEAT:%d\n",tick[pnr].seat);
	printf("*cost: Rs.%d\n",tick[pnr].cost);
	printf("*PNR:");
	for(i=0;i<4;i++)
	printf("%d ",tick[pnr].id[i]);
	printf("\n*************************************\n");
	}
	int gencheck(char g)
{ int x;
	if(g=='m'||g=='f')
	x++;
	return x;
	}
	
int bookticket(int d) {
		
		
		
		int c;
	switch(d) {
		int x;
		case 1: c=1000;
		break;
		case 2:
				c=900;
					break;
				
		case 3:
			c=990;
			break;
			case 4:
			c=1000;
		    break;
		case 6:
		c=1000;
		break;
		case 5:
		c=900;
		break;
		case 7:
		c=1200;
		break;
		default:
		c=0;
		break;
	
	}
	
	if(c>0)
	{
pnr++;
count++;
printf("the cost is %d\n",c);
tick[pnr].cost=c;
tick[pnr].destcode=d;
printf("enter your first name\n");
scanf("%s",&tick[pnr].name[0]);
	printf("enter your last name\n");
scanf("%s",&tick[pnr].name[1]);
	int x=0;
	char g;
//printf("enter your gender.m for male and f for female\n");
//scanf("%c",&g);
	//if(g=='m'||g=='f')
//printf("the gender is %c",g);

int date,month,year,dob=0;
    x=0;
printf("enter date of birth \n");
printf("enter date \n");
scanf("%d",&date);
printf("enter month\n");
scanf("%d",&month);
printf("enter year\n");
scanf("%d",&year);
x=dobcheck(date,month,year);
while(x!=3)
{
	x=0;
	printf("enter valid DOB\n");
	printf("enter date \n");
scanf("%d",&date);
printf("enter month\n");
scanf("%d",&month);
printf(" enter year\n");
scanf("%d",&year);
x=dobcheck(date,month,year);
	}
	if(x==3)
	{
		tick[pnr].dob[2]=year;
		tick[pnr].dob[1]=month;
		tick[pnr].dob[0]=date;
		for(i=0;i<3;i++)
	printf("\n");
	}
int a[4];int j;
		int r1=pnr/10,r2=pnr/100,r3=pnr/1000;
	a[0]=r3%10;
a[1]=r2%10;
a[2]=r1%10;
a[3]=pnr%10;
for(i=0;i<4;i++)
tick[pnr].id[i]=a[i];
printf("\n");
printf("\n");
printf("available seats are \n");
avl_seats(d);
int s,coach;
printf("select the coach\n");
scanf("%d",&coach);
printf("select the seat\n");
scanf("%d",&s);
 x=0;
while((t[d-1][coach-1][s-1]!=1))
{
printf("seat is unavailable \n");
printf("select the coach\n");
scanf("%d",&coach);
printf("select the seat\n");
scanf("%d",&s);
}

if(t[d-1][coach-1][s-1]==1)
{
	tick[pnr].coach=coach;
	tick[pnr].seat=s;
	t[d-1][coach-1][s-1]=0;
	
}
printf("congragulations! you have booked your ticket\n");
display(pnr);
}
if(c==0)
printf("one or more options are wrong \n");
return c;
}

int choice()
{
	int ch,tcost;
	printf("\n \n \nDisclaimer: answer 1 or 2 for yes and no respectively and in single integer according to the itenery. Other answers will not be recognised \n\n\n");
	printf("press 1 for train information and seat status \n");
	printf("press 2 for ticket booking\n");
	printf("press 3 for booking modification/cancellation\n");
	scanf("%d",&ch);
	switch (ch)
	{int d;
		int x; int c;
		default: printf("invalid option \n");
		break;
		case 1:
			
				printf("press 1 for train information\n");
				printf("press 2 for ticket list\n");
				printf("press 3 for list of available seats \n");
				printf("press 4 for ticket search \n");
				scanf("%d",&x);
			switch(x)
			{  
			case 3:
				printf("enter the destination code\n");
	printf("1 for Bangalore\n2 for Bombay\n3 for Calcutta\n4 for Karnavati\n5 for Hydrabad\n6 for Madras\n7 for Trivandrum\n");
				scanf("%d",&d);
				switch(d)
				{ 
					case 1:
						printf("Seats available in Karnataka express: \n\n");
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[0][i][j]==1)
								printf("%d ",j+1);
							}
						printf("\n");
						}printf("\n");
						break;
						case 2:("Seats in available in Bombay-Capitol express: \n\n");
							
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
							if(t[1][i][j]==1)
							printf("%d ",j+1);
							}
						printf("\n");
						}printf("\n");
				break;
				case 3:("Seats in available in Calcutta-Capitol express: \n\n");
							
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[2][i][j]==1)
							    printf("%d ",j+1);
							}
						printf("\n");
						
						} printf("\n");
				break;
				case 4:("Seats in available in Adi SJ Capitol Express express: \n\n");
							
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[3][i][j]==1)
							    printf("%d ",j+1);
							}
						printf("\n");
						
						} printf("\n");
				break;
				case 5:("Seats in available in NZM Duranto express: \n\n");
					
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[4][i][j]==1)
								printf("%d ",j+1);
							}
						printf("\n");
						}printf("\n");	
				break;
				case 6:("Seats in available in (GT) Grand Trunk express: \n\n");
						
						for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[5][i][j]==1)
									
								printf("%d ",j+1);
							}
						printf("\n");
						}printf("\n");
				break;
				case 7:("Seats in available in Kerela express: \n\n");
							for(i=0;i<7;i++)
						{
							printf("coach s%d: ",i+1);
							for(j=0;j<40;j++)
							{
								if(t[6][i][j]==1)
								printf("%d ",j+1);
							}
						printf("\n");
						}printf("\n");
				break;
				default:
					printf("option invalid \n");
					break;
				} break;
				
				case 2:
				for(j=1;j<=count;j++)
				 	display(j);
				   break;
				 case 4:printf("enter the destination code\n");
	printf("1 for Bangalore\n2 for Bombay\n3 for Calcutta\n4 for Karnavati\n5 for Hydrabad\n6 for Madras\n7 for Trivandrum\n");
				 	int d;
				 	scanf("%d",&d);
					 for(j=1;j<=count;j++)
				 	{
					if(tick[j].destcode==d) 
					 display(j);
				 }
				 break;
			}break;
    		case 2:
			printf("are you plying from Delhi?1 for yes and 2 for no\n");
			scanf("%d",&x);
			switch(x)
			{
			case 1:
			
	printf("enter the destination code\n");
	printf("1 for Bangalore\n2 for Bombay\n3 for Calcutta\n4 for Karnavati\n5 for Hydrabad\n6 for Madras\n7 for Trivandrum\n");
	scanf("%d",&d);
				tcost=bookticket(d);
				break;
				case 2:
					printf("this facility is only for trains plying from Delhi\n");
	     
		 break;
		 }
	break;
case 3:printf("press 1 for ticket modification,2 for cancellation\n");	
scanf("%d",&c);
switch(c)
{
	case 1:printf("ticket modification \n");
	printf("enter your PNR no \n");
	scanf("%d",&x);
	if(x<=count)
	{
	printf("your details are \n");
	display(x);
	t[tick[x].destcode-1][tick[x].coach-1][tick[x].seat-1]=1;
printf("enter the new details\n");
printf("enter the destination code\n");
printf("1 for Bangalore\n2 for Bombay\n3 for Calcutta\n4 for Karnavati\n5 for Hydrabad\n6 for Madras\n7 for Trivandrum\n");
scanf("%d",&d);
if(d>0&&d<=7)
tick[x].destcode=d;
printf("enter your first name \n");
scanf("%s",&tick[x].name[0]);
printf("enter your last name\n");
scanf("%s",&tick[pnr].name[1]);
for(i=0;i<2;i++)
printf("%s",tick[pnr].name[i]);	
int y=0;
int date,month,year,dob=0;
y=0;
printf("\nenter date of birth \n");
printf("enter date \n");
scanf("%d",&date);
printf("enter month\n");
scanf("%d",&month);
printf("enter year\n");
scanf("%d",&year);
y=dobcheck(date,month,year);

	if(y==3)
	{
		tick[x].dob[2]=year;
		tick[x].dob[1]=month;
		tick[x].dob[0]=date;
		for(i=0;i<3;i++)
	printf("\n");
	}
int j;
for(i=0;i<4;i++)
printf("\n");
printf("\n");
printf("available seats are \n");
avl_seats(d);
int s,coach;
printf("select the coach\n");
scanf("%d",&coach);
printf("select the seat\n");
scanf("%d",&s);
 y=0;
while((t[d-1][coach-1][s-1]!=1))
{
printf("seat is unavailable \n");
printf("select the coach\n");
scanf("%d",&coach);
printf("select the seat\n");
scanf("%d",&s);
}

if(t[d-1][coach-1][s-1]==1)
{
	tick[x].coach=coach;
	tick[x].seat=s;
	t[d-1][coach-1][s-1]=0;
	
}
printf("congragulations! you have booked your ticket\n");
display(x);

}
if(x>count)
printf("such a PNR is not registered \n"); 
break;
case 2: printf("ticket cancellation \n");
break;

}
} }
int main()
{
	update();
printf("                                **********************************************************\n                                ************** WELCOME TO INDIAN RAILWAYS ****************\n                                **********************************************************\n");
choice();

printf("do you want anything else. Press 1 for anything else, any other key to terminate \n");
int c;
scanf("%d",&c);
while(c==1)
{
choice();
printf("do you want anything else. Press 1 for anything else, any other key to terminate \n");
scanf("%d",&c);
}
printf("thank you! Do visit us again \n");
} 
