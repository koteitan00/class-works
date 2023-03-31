#include<stdio.h>
#include<string.h>

int main(void){
	char str[21];
	char *ptr;

	printf("文字列を入力してください： ");
	scanf("%20s",str);
	printf("%s\n",str);

	ptr = str;
	for(int i = 0;i < strlen(ptr); i++){
		if(ptr[i] >= 'a' && ptr[i] <= 'z'){
			ptr[i] += 'A' - 'a';
		}else if(ptr[i] >= 'A' && ptr[i] <= 'Z'){
			ptr[i] += 'a' - 'A';
		}
	}

	printf("%s\n",ptr);

	return 0;
}

