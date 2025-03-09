#include <stdio.h>
#include <stdlib.h>


void Hanoi(int,char,char,char);
int main(int argc, char *argv[]) {
	int num;
	printf("Enter number of discs: \n");
	scanf("%d",&num);
	printf("Rod 1:'A', Rod 2:'B', Rod 3:'C'\n");
	Hanoi(num,'A','B','C');
	return 0;
}

void Hanoi(int x,char from, char extra, char to)
{
	if(x==1)
	{
		printf("Moving disc '1' from rod '%c' to rod '%c'.\n",from,to);
		return;
	}
	Hanoi(x-1,from,to,extra);
	printf("Moving disc '%d' from rod '%c' to rod '%c'.\n",x,from,to);
	Hanoi(x-1,extra,from,to);
}

