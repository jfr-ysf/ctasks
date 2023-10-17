#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "rus");
	int a=10;
	printf("%d\n", a);
	a=15;
	printf("%d\n", a);	
	case_1();
	printf("\n");
	case_2();
	return 0;
}
void case_1(){
	/* роме переменных в программе на —и дл€ хранени€ данных могут использоватьс€ константы, которые предвар€ютс€ ключевым словом const, и указатели также могут указывать на константы, но в этом случае перед определением указател€ также ставитс€ слово const:*/
    const int a = 10;
    const int *pa = &a;
    printf("фдрес=%p \t value=%d \n", pa, *pa);

}
void case_2(void)
{
    int a = 10;
    const int *pa = &a;
    printf("value=%d \n", *pa);     /*10 */
    a = 22;
    printf("value=%d \n", *pa);     /* 22*/
    /*pa = 34;   так нельз€ делать*/    
}

