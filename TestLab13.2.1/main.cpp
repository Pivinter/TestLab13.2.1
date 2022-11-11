#include "pch.h"
#include <stdio.h>
#include <conio.h>
#define N 5 // директива препроцесора – макровизначення
#define SQR(x,y,z)  ((1)<=(z))&&((z)>(10))?(x+y,y+z)*(x+y,y+z) // макрос з параметром – визначення квадрата числа
// макрос визначення найбільшого з двох чисел
#define MAX(x,y,z) ((z)>=(10))||((1)>=(z))?(x*x,5*abs(y-z)) // макрос як умовний вираз
 // виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w) 
 // використовується символ продовження макроса '\'
 // символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

 // площа круга, вкладені макроси
#define SQCIRLE(r) (3.14*SQR(r)) 
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int a, b, c, // змінні для розрахунків
		b_plus_N, // допоміжна змінна
		a_kvadr, // квадрат числа
		maxim; // максимальне з трьох чисел
	char ch; // відповідь чи продовжувати виконання програми
	float rad, s; // радіус і площа круга
	do
	{
#if N<10 // якщо умова істинна, 
		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		scanf("%d", &a);// введення числа
		PRINTI(a); // макрос виведення числа
		scanf("%d", &b);
		PRINTI(b);
		scanf("%d", &c);
		PRINTI(c);
		a_kvadr = SQR(a, b, c):// макрос визначення квадрату числа
		PRINTI(a_kvadr);
		b_plus_N = SQR(a,b + N, c):
		PRINTI(b_plus_N);
		maxim = MAX(0,a_kvadr, b_plus_N):// пошук максимуму з двох чисел
		maxim = MAX(0,maxim, c):
		PRINTR(maxim); // макрос виведення результату
#else // компілювати іншу частину програми, якщо N >= 10
		{
			puts("define area of a circle");
			puts("Input radius of circle");
			scanf("%f", &rad);
			s = SQCIRLE(rad);
			PRINTR(s);
		}
#endif // завершення блоку умовної компіляції
		puts("Repeat? y /n "); ch = getch();
	} while (ch == 'y');
}