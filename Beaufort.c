#include<stdio.h>
#include<string.h>
 
int main(){
    char message[500],key[500];
    int messageLen = strlen(text), keyLen = strlen(key), i, j; 
    char newKey[messageLen];
    char encryptedMessage[messageLen];
    char decryptedMessage[messageLen];
  

    printf("Text to encrypt: ");
	gets(text);
	printf("\n");
	
	printf("Key: ");
	gets(key);
	printf("\n");
	   
    
    for(i = 0, j = 0; i < messageLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < messageLen; ++i)
        encryptedText[i] = ((newKey[i] - text[i]) % 26) + 'A';
 
    encryptedText[i] = '\0';
 
    //decryption
    for(i = 0; i < messageLen; ++i)
        decryptedText[i] = (((newKey[i] - encryptedText[i]) + 26) % 26) + 'A';
 
    decryptedText[i] = '\0';
 
    printf("Original text: %s", text);
    printf("\nKey: %s", key);
    printf("\nNew generated key : %s", newKey);
    printf("\nEncrypted text: %s", encryptedText);
    printf("\nDecryptefd text: %s", decryptedText);
 
    return 0;
}