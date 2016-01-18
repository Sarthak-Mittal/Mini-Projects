#include<stdio.h>
#include<stdlib.h>

int oneD_num(void);
int twoD_num(void);
int threeD_num(void);
int multiplication_question(void);
int addition_question(void);
int subtraction_question(void);
void positiveComment();
void negetiveComment();
int diff,cho;

int main(void)
{


while(1)
    {
        int correct = 0;
        int wrong = 0;
        int count = 0;

        printf("Choose difficulty level on scale of 3\n\n");
        scanf("%d",&diff);
        printf("Choose type of problems\n\n");
            printf("-1  for ADDITION\n");
            printf("-2  for SUBTRACTION\n");
            printf("-3  for MULTIPLICATION\n");
            printf("-4  for Mixed problems\n");
        scanf("%d",&cho);

        while(count < 10)
        {
            int r,var;

            if(cho == 4)
               var = 1+rand()%3;
            else
               var = cho;

            switch(var)
            {
                case 1:
                    r = addition_question();
                    break;
                case 2:
                    r = subtraction_question();
                    break;
                case 3:
                    r = multiplication_question();
                    break;
            }
            count += r;
            if(r>1)
            {
                wrong +=r-1;
                correct += 1;
            }
            else
                correct += 1;

            if(count >= 10)
                {
                    r = (correct*10);
                    if(r > 75)
                        printf("Congratulations, you are ready to go to the next level!\n\n");
                    else
                        printf("Please ask your teacher for extra help.\n\n");
                        printf("\n\n NEXT STUDENT.\n\n");
                }
        }
    }
}

int multiplication_question(void)
{
        int status = 0;
        int a,b,temp_C=0;
        int S_ans;
        int C_ans;
        switch (diff)
        {
          case 1:
                a = oneD_num();
                b = oneD_num();
                break;
          case 2:
                a = twoD_num();
                b = twoD_num();
                break;
          case 3:
                a = threeD_num();
                b = threeD_num();
                break;
        }

        C_ans = a * b;

    do
    {
      printf("How much is %d times %d ?\n",a,b);
      scanf("%d",&S_ans);
        if(C_ans == S_ans)
        {
          ++temp_C;
          positiveComment();
          status = 1;   //status is 1 if answer is correct.
        }
        else
        {
          ++temp_C;
          negetiveComment();
        }
    }
    while(status != 1);
return temp_C;
}


int addition_question(void)
{
        int status = 0;
        int a,b,temp_C=0;
        int S_ans;
        int C_ans;
        switch (diff)
        {
          case 1:
                a = oneD_num();
                b = oneD_num();
                break;
          case 2:
                a = twoD_num();
                b = twoD_num();
                break;
          case 3:
                a = threeD_num();
                b = threeD_num();
                break;
        }

        C_ans = a + b;

    do
    {
      printf("How much is %d plus %d ?\n",a,b);
      scanf("%d",&S_ans);
        if(C_ans == S_ans)
        {
          ++temp_C;
          positiveComment();
          status = 1;   //status is 1 if answer is correct.
        }
        else
        {
          ++temp_C;
          negetiveComment();
        }
    }
    while(status != 1);
return temp_C;
}


int subtraction_question(void)
{
        int status = 0;
        int a,b,temp_C=0;
        int S_ans;
        int C_ans;
        switch (diff)
        {
          case 1:
                a = oneD_num();
                b = oneD_num();
                break;
          case 2:
                a = twoD_num();
                b = twoD_num();
                break;
          case 3:
                a = threeD_num();
                b = threeD_num();
                break;
        }

        C_ans = a - b;

    do
    {
      printf("How much is %d minus %d ?\n",a,b);
      scanf("%d",&S_ans);
        if(C_ans == S_ans)
        {
          ++temp_C;
          positiveComment();
          status = 1;   //status is 1 if answer is correct.
        }
        else
        {
          ++temp_C;
          negetiveComment();
        }
    }
    while(status != 1);
return temp_C;
}


int oneD_num(void)
{
    int a;
    a = 1 + rand()%9;
    return a;
}


int twoD_num(void)
{
    int a;
    a = 1 + rand()%99;
    return a;
}


int threeD_num(void)
{
    int a;
    a = 1 + rand()%999;
    return a;
}


void positiveComment()
{

        int a = 1 + rand()%4;

    switch(a)
    {
    case 1: printf("Very Good!\n\n");
            break;
    case 2: printf("Excellent!\n\n");
            break;
    case 3: printf("Nice work!\n\n");
            break;
    case 4: printf("Keep up the good work!\n\n");
            break;
    }

}


void negetiveComment()
{

        int a = 1 + rand()%4;

    switch(a)
    {
    case 1: printf("No. Please try again.\n\n");
            break;
    case 2: printf("Wrong. Try once more.\n\n");
            break;
    case 3: printf("Don't give up!\n\n");
            break;
    case 4: printf("No. Keep trying.\n\n");
            break;
    }

}
