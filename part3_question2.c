#include <stdio.h>
#include <stdlib.h>

void my_strdel(char x[],int i){
	int j = i;
	while(x[j+1] != '\0'){
		x[j] = x[j+1];
		j++;
	}
	x[j] = '\0';
}

char* my_strdif(char x[], char y[]){
	int i, j;
	i = 0;
	j = 0;
	while(y[i] != '\0'){
		while(x[j] != '\0'){
			if(y[i] == x[j]){
				my_strdel(x,j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return(x);
}

int main(){
	char x[32],y[32];
	int i;
	
		printf("Enter string one: ");fgets(x,sizeof(x),stdin);
		printf("Enter string two: ");fgets(y,sizeof(y),stdin);
		
		printf("Returned string: %s",my_strdif(x,y));
}
