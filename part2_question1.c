#include <stdio.h>
#include <stdlib.h>

int my_strlen(char s[]){
	int i = 0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}
int my_strcmp(char one[],char two[]){
	int i = 0;
	if(my_strlen(one) != my_strlen(two))
		return(0);
	else{
		while(one[i] != '\0'){
			if(one[i] != two[i])
				return(0);
			i++;
		}
	}
	return(1);
}

int my_strncmp(char one[],char two[],int n){
	int i;
	for(i = 0; i < n; i++){
		if(one[i] != two[i])
			return(0);
	}
	return(1);
}	

char* my_strcpy(char one[],char two[]){
	int i = 0;
	while((one[i] = two[i]) != '\0'){
		i++;
	}
	one[i] = '\0';
	return(one);
}
char* my_strcat(char one[],char two[]){
	int i = 0;
	int j = my_strlen(one);
	while((two[i]) != '\0'){
		one[j+i] = two[i];
		i++;
	}
	one[j+i] = '\0';
	return(one);
}
char* my_reverse(char one[],char two[]){
	int i;
	char temp;
	for(i = 0; i < my_strlen(two)/2;i++){
		temp = two[i];
		two[i] = two[my_strlen(two)-1-i];
		two[my_strlen(two)-1-i] = temp;
	}
	i = 0;
	while((one[i] = two[i]) != '\0'){
		i++;
	}
	one[i] = '\0';
	return(one);
}
int main(){
	int i = 0;
	int n;
	char c,one[32],two[32];
	
	for(i = 0; i < 2; i++){
		printf("STRCMP: Enter string one: ");scanf("%s",one);getchar();
		printf("STRCMP: Enter string two: ");scanf("%s",two);getchar();
		printf("%d\n",my_strcmp(one,two));
	}
	for(i = 0; i < 2; i++){
		printf("STRNCMP: Enter string one: ");scanf("%s",one);getchar();
		printf("STRNCMP: Enter string two: ");scanf("%s",two);getchar();
		printf("STRNCMP: Enter n value to compare: ");scanf("%d",&n);getchar();
		printf("%d\n",my_strncmp(one,two,n));
	}
	for(i = 0; i < 2; i++){
		printf("STRCPY: Enter string one: ");scanf("%s",one);getchar();
		printf("STRCPY: Enter string two: ");scanf("%s",two);getchar();
		printf("%s\n",my_strcpy(one,two));
	}
	for(i = 0; i < 2; i++){
	 	printf("STRCAT: Enter string one: ");scanf("%s",one);getchar();
		printf("STRCAT: Enter string two: ");scanf("%s",two);getchar();
		printf("%s\n",my_strcat(one,two));
	}
	for(i = 0; i < 2; i++){
		printf("REVERSE: Enter string one: ");scanf("%s",one);getchar();
		printf("REVERSE: Enter string two: ");scanf("%s",two);getchar();
		printf("%s\n",my_reverse(one,two));
	}
	
}
