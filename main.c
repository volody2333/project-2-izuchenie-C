#include <stdio.h>
#include <stdlib.h>

// ÒÅÌÀ 9: ÔÓÍÊÖÈß scanf() äëÿ ôîğìàòèâíîãî ââîäà.
int main(void)
{
	long long var_lli = 0;
	double var_d = 0;
//	char byte1 = '0', byte2 = '0';
	
    int res = scanf("%lld %lf", &var_lli, &var_d);
	
	printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);
	
	
//	int res = scanf("%c %c", &byte1, &byte2);
//	
//	printf("res = %d: byte1 = %c, byte2 = %c\n", res, byte1, byte2);
	
//	int res1 = scanf("%c", &byte1);
//	int res2 = scanf("%c", &byte2);
//	printf("byte1 = %c, byte2 = %c\n", byte1, byte2);
	
	
	return 0;
}























// ÒÅÌÀ 8: ÔÓÍÊÖÈÈ printf() ÄËß ÔÎĞÌÀÒÈÂÍÎÃÎ ÂÛÂÎÄÀ
//int main(void)
//{
//	// char, short - ïğèâîäèòñÿ ê òèïó int
//	// float - ïğèâîäèòñÿ ê òèïó double
//	
//	//int var_i =1208;
//	//double var_i =1208;
//	//char var_i =1208;
//	//float var_i = 12.56;
//	//long long var_i = -12345678901234;
//	//long double var_ld = 6345663.5252325;
//	
//	//printf("value = %Lf\n", var_ld);
//	//printf("value = %lld\n", var_i);
//	//printf("value = %d\n", var_i);
//	//printf("value = %x\n", var_i);
//	//printf("value = %f\n", var_i);
//	
//	short var_h = 100;
//	int var_i = 1024;
//	long double var_ld = 0.5;
//	
//	printf("var_h = %d, var_i = %d, %Lf\n", var_h, var_i, var_ld);
//
//int var_i = -1283;
//double var_d = 54.34675;
//
//printf("[%10d]\n", var_i);
//printf("[%10f]\n", var_d);
//printf("[%-10d]\n", var_i);
//printf("[%-10f]\n", var_d);
//printf("[%#X]\n", var_i);
//printf("[%+.2f]\n", var_d);
//
//	return 0;
//}









// ÒÅÌÀ 7: ÑÒÀÍÄÀĞÒÍÛÅ ÏÎÒÎÊÈ ÂÂÎÄÀ\ÂÛÂÎÄÀ.
//int main(void)
//{
//	int value1 = getchar();
//	 //int res = putchar(value);
// 	 //printf("\n%d\n", res);
//    int value2 = getchar();
//	
//	printf("%c %c\n", value1, value2);	
//	return 0;
//}





// ÒÅÌÀ 6: ÎÏÅĞÀÖÈÈ ÏĞÈÑÂÀÈÂÀÍÈß

//int main(void)
//{
//	char ch;
//	ch = 'd';
//	printf("ch = %c, code = %d\n", ch, ch);
//	
//	double d1, d2, d3, d4;
//	float var_f;
//	var_f = 10.0f;
//	d1 = 10.0f;
//	d2 = -7.;
//	d3 = 1e2;
//	d4 = 5e-3;
//	
//	int size_float = sizeof(float);
//	
//	return 0;
//}
// char ÈÑÏÎËÜÇÓÅÒÑß ÒÎËÜÊÎ Ñ ÑÈÌÂÎËÀÌÈ
// 5e-3 İÒÎ 5*10 Â ÌÈÍÓÑ ÒĞÅÒÜÅÉ ÑÒÅÏÅÍÈ = 0,005
