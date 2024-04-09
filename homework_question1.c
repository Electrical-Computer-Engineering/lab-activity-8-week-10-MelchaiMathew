#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 39

void my_strcpy(char one[],char two[]){
	int i = 0;
	while((one[i] = two[i]) != '\0'){
		i++;
	}
	one[i] = '\0';
}

char* ToPigLatin(char word[]){
	char pig[MAX],consonant[MAX];
	int i,pos,cap;
	i = 0;
	
	if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U'){
		while(word[i] != '\0'){
			pig[i] = word[i];
			i++;
		}
		pig[i] = 'w'; pig[i+1] = 'a'; pig[i+2] = 'y'; pig[i+3] = '\0';

		my_strcpy(word, pig);
		return word;
	}
	else{
		if(word[i] == 'Y' || word[i] == 'y'){
			consonant[i] = word[i];
			i++;
		}
		while(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'y'){
			consonant[i] = word[i];
			i++;
		}
		consonant[i] = '\0';
		pos = i;
		i = 0;
		while(word[pos+i] != '\0'){
			pig[i] = word[pos+i];
			i++;
		}
		pos = i;
		cap = i;
		i = 0;
		while(consonant[i] != '\0'){
			pig[pos+i] = consonant[i];
			i++;
		}
		pig[pos+i] = 'a'; pig[pos+i+1] = 'y'; pig[pos+i+2] = '\0';
		
		if(word[0] >= 'A' && word[0] <= 'Z'){
			pig[0] = pig[0] - 'a' + 'A';
			pig[cap] = pig[cap] - 'A' + 'a'; 
		}
		my_strcpy(word, pig);
		return word;
	}	
}

int main(){
	char input[MAX*5+5],word[MAX];
	int i,j;
	i = 0;
	
	printf("Input 5 words: ");fgets(input,sizeof(input),stdin);
	
	while(input[i]!= '\0'){
		if(input[i] == '\n'){
			input[i] = '\0';
			i--;
		}
		else
			i++;
	}
	
	i = 0;
	j = 0;
	printf("Pig Latin version of the 5 words: \n");
	while(input[i] != '\0'){
		if(input[i] == ' '){
			word[j] = '\0';
			printf("%s ",ToPigLatin(word));
			j = 0;
			word[j] = '\0';
		}
		else{
			word[j] = input[i];
			j++;
		}
		i++;
	}
	word[j] = '\0';
	printf("%s ",ToPigLatin(word));
}
