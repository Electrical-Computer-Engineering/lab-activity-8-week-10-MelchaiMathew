#include <stdio.h>
#include <stdlib.h>

int my_strlen(char s[]){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
char* my_toleft(char x[]){
	int i;
	for(i = 0;i<my_strlen(x)-1;i++){
		x[i] = x[i+1];
	}
	x[i] = '\0';
	return x;
}
void my_strcpy(char one[],char two[]){
	int i = 0;
	while((one[i] = two[i]) != '\0'){
		i++;
	}
	one[i] = '\0';
}
int main(){
	char x[32];
	int i, rows;
	
	printf("Enter string: ");scanf("%s",x);getchar();
	rows = my_strlen(x);
	printf("%s\n",x);
	for(i = 0;i<rows;i++){
		my_strcpy(x,my_toleft(x));
		printf("%s\n",x);
	}
}
