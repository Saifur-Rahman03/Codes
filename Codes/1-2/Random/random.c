#include<stdio.h>
int main(){
	char str[]="Ibqqz!Cjsuiebz!wbjzb♥♥♥!xjti!zpv!ibwf!bo!xpoefsgvm!mjgf!☺☺☺",*p;
	p=str;
	while(*p!='\0')
		--*p++;
	printf("%s",str);
	return 0;
}
