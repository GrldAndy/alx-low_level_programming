#inlcude <stdio.h>
/**
 * check for capital
 */
int _isupper(int c){
	if(c > 64 && c < 91){
		return (1);
	}
	else{
		return (0);
	}
}
/**
 * main function
 */
int main(void){
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
