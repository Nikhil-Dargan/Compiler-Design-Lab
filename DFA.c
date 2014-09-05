#include<string.h>
#include<stdio.h>
int row=3,col=2;
int a_or_b(char t);
int main()
{

int init=0,num=0;
int final[1];
int q[3][2];
int i=0,j,count=0,final_count=0,m=0;
FILE *f;
f=fopen("test.txt","r");
int col=0,row=0,temp=0;
char ch;
while(!feof(f))
{

   fscanf(f,"%d",&num);
    fscanf(f,"%c",&ch);
    if(count==0)
	{
		init=num;
	}
   else if(count == 1)
	{
		final[final_count]=num;
		final_count++;
	}
	else
	{
		q[count-2][col]=num;
		col++;
	}
    //ch=fgetc(f);
    
	if(ch != ' ')
	{
		//printf("asass");
        count++;
		temp=col;
        col=0;
	}
}
row=count-1;
//col=temp;
printf("%d %d",col,row);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
		printf("%d \t",q[i][j]);
	printf("\n");
}
fclose(f);
printf("input :");
char input[10];
scanf("%s",input);
int input_length=strlen(input);
printf("%s",input);
i=0;
while(1)
{
        if(input_length-i <= 0)
        {
                    for(m=0;m<final_count;m++)
                        if(init==final[m])
                        {
                        printf("accepted\n");
                        goto aaaa;
                        }
                printf("not accepted\n\n");
                goto aaaa;
        	//break;
        }
        else
	{
	if(q[init][a_or_b(input[i])]!=-1)
	{
		init=q[init][a_or_b(input[i])];
		
	}
	else
	{
		printf("not");
		break;
	}
	}

	i++;
}
aaaa: printf("");
 }

int a_or_b(char t)
{

	if(t=='a')
		return 0;
	else
		return 1;
		
}
