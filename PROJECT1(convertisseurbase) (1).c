	#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char* string(int number,int base);
int numero(char hexa[50],int base);
int main() {
	int base1,base2,decimal;
	char exi;
	char x[50];
printf("entrer un nombre ");
	scanf("%s",x);
		do{
	printf("entrer sa base \n");
	scanf("%d",&base1);
	}while(base1<2 || base1>16);
			decimal= numero(x,base1);
		do{printf("entrer la base a convertir\n");
	scanf("%d",&base2);
	}while(base2<2 || base2>16);

	char* numbase=string(decimal,base2);
	printf("LE NOMBRE CONVERTI EST %s \n",numbase);
		printf("ENTRER 0 TO CONTINUE OR ANY KEY TO EXIT\n");
		scanf("%s",&exi);
if(exi==48)
	return main();
	else
	exit(0);
}
int numero(char hexa[50],int base)
{
	int deci[50],n[50];
	int k,i,j,somme,exi;
	somme=0;
k = strlen(hexa);//LENGTH OF STRING

for(i=0;i<k;i++){
deci[i]	=hexa[i];//ASCII NUMBER
if(deci[i]>=48 && deci[i]<=57)//ASCII OF 1 TO 9 BETWEEN 48 & 57
	 n[i]=deci[i]-48;
	 else if(deci[i]>=65 && deci[i]<=70)//ASCII OF A(10) TO F(15) BETWEEN 65 & 70
	 		 n[i]=deci[i]-55;
	 		 	else if(deci[i]>=97 && deci[i]<=102)//ASCII OF a(10) TO f(15) BETWEEN 97 & 102
	 		 n[i]=deci[i]-87;
	 		 else { //CHECKING IF INPUT DIFF THAN '1'TO'9' OR 'A'TO'F'
	 			printf("WRONG NUMBER\n");
	 		  return main(); }
	 		 	if ( n[i]>=base){//CHECKING IF INPUT BELONG TO THIS BASE
		printf("WRONG BASE\n");
	 		  return main(); 
}
}
j=k-1;
for(i=0;i<k;i++){
			somme=somme+n[j]*pow(base,i);//CONVERTING TO DECIMAL 
				j--;
	}
	return somme;
}
char* string(int number,int base)
{
	
	char newnumber[50];
		char T[50];
	int i,j,k,test;
	i=0,j=0;
	//converting from base i to BINARY
	while(number!=0)
	{test=number%base;
	if (test>=0 && test<=9)
T[i]=48+test;
else /*if (test >=10 && test<=15)*/
T[i]=55+test;
	i++;
	number=number/base;
	}
	k=i;


  for (i = k - 1, j = 0; i >= 0; i--, j++)
    newnumber[j] = T[i];

      	  char *result = (char *)malloc(k+1);//ALLOCATING SPACE
     strcpy(result,newnumber);//COPY T TO THE POINTER
  //    T[i] ='\0';
return result;
}
