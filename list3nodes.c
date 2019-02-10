//Creation of a list with three nodes
#include<stdio.h>
typedef struct node
{
	char info;
	struct node *nextNode;
}listNode;

int main()
{
	listNode *listOfChar,n1,n2,n3;
	
	/*store X in n1*/
	n1.info='X';
	n1.nextNode=NULL;
	/*n1 is the only node in the list now*/
	
	/*store Y in node n2*/
	n2.info='Y';
	n2.nextNode=&n1;
	/*n2 node is created and linked to n1*/
	
	/*store Z in node n3*/
	n3.info='Z';
	n3.nextNode=&n2;
	listOfChar=&n3;			//listOfChar helps to identify the position of the lists
	/*End of creation of lists*/
	
	printf("node n3 info=%c\t\t address that node n3 is holding=%x",n3.info,n3.nextNode);
	printf("\n");
	printf("node n2 info=%c\t\t address that node n2 is holding=%x",n2.info,n2.nextNode);
	printf("\n");
	printf("node n1 info=%c\t\t address that node n1 is holding=%x",n1.info,n1.nextNode);
	printf("\n");
	printf("Header address =%x",listOfChar);
}
