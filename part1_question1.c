#include <stdio.h>
#include <stdlib.h>

int my_isalpha(char c){
	return ((c >= 'a' && c<= 'x') || (c >= 'A' && c<= 'X'));
}
int my_isdigit(char c){
	return (c >= '0' && c <= '9');
}
int my_isupper(char c){
	return (c >= 'A' && c<= 'X');
}
char my_to_upper(char c){
	if(c >= 'a' && c<= 'x')
		return(c - 'a'+ 'A');
	else
		return(c);
}
char my_to_lower(char c){
	if(c >= 'A' && c<= 'X')
		return(c - 'A'+ 'a');
	else
		return(c);
}
int main(){
	int i = 0;
	char c;
	
	for(i = 0; i < 2; i++){
		printf("Enter char to test my_isalpha: ");scanf("%c",&c);getchar();
		printf("%d\n",my_isalpha(c));
	}
	for(i = 0; i < 2; i++){
		printf("Enter char to test my_isdigit: ");scanf("%c",&c);getchar();
		printf("%d\n",my_isdigit(c));
	}
	for(i = 0; i < 2; i++){
		printf("Enter char to test my_isupper: ");scanf("%c",&c);getchar();
		printf("%d\n",my_isupper(c));
	}
	for(i = 0; i < 2; i++){
		printf("Enter char to test my_to_upper: ");scanf("%c",&c);getchar();
		printf("%c\n",my_to_upper(c));
	}
	for(i = 0; i < 2; i++){
		printf("Enter char to test my_to_lower: ");scanf("%c",&c);getchar();
		printf("%c\n",my_to_lower(c));
	}
}
