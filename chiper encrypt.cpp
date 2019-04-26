#include<stdio.h>
int main()
{
	char message[100], ch;
	char ch2[94]={'q','E','1','~',' ','Y','M','U','R','2','"','`','h',
					'N','I','d','P','z','i','%','^','t','@','(','A',
					'o',':','=','C','Q',',','n','x','4','S','[','7',
					'm','H','F','y','e','#','a','T','6','+','v',')',
					'D','f','K','L','$','r','?','b','k','O','G','B',
					'>','}','!','9','_','w','V','`',']','j','c','p',
					'5','J','Z','&','X','l','|','\\','8','s',';','g',
					'<','{','3','.','u','*','W','-','0'};
	int flag = 93;
	int i, key, temp, yoi;
	
	printf("Enter a message to encrypt: \n");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		if(message[i]!='/'){
			for(int j=0; j<flag; j++){
			if(ch2[j]==message[i]){
				temp = j;
				break;
				}
			}
		if(temp+key > flag){
			yoi = temp + key - flag -1;
		}
		else
			yoi = temp+key;
			message[i] = ch2[yoi];
		}
	}
	
	printf("Encrypted message:\n%s", message);
	
	return 0;
}
