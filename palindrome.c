#include <stdio.h>
#include <string.h>

char* scan_string();

void is_palindrome(char* str);

int main() {
    char string[50];
    scan_string(string);
    is_palindrome(string);
	return 0;
}





char* scan_string(char* string) {
	scanf("%s", string);
	return string;
}

void is_palindrome(char* string) {
    
	int pointer_left = 0;
	int pointer_right = strlen(string) - 1;
	
	while (pointer_left < pointer_right) {
	    
	    if (string[pointer_left] != string[pointer_right]) {
	        printf("Слово не является палиндромом");
	        return;
	    }
	    
	    pointer_left++;
	    pointer_right--;
	}
	printf("Слово является палиндромом");
}
