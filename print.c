#include "main.h"

/**
  *_printchar - prints character
  *@va: argument pointer
  *@direct: the parameters struct
  *
  *Return: number of characters printed
  */

int _printChar(va_list va, directives *direct)
{
	char pad_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(va, int);

	if (direct->minus)
		sum += putchar(ch);
	while (pad++ < direct->width)
		sum += putchar(pad_char)
			if (!direct->mnus)
				sum += _putchar(ch);
	return (sum);
}

/**
  *_printInt - prints integer
  *@va: argument pointer
  *@direct: the directive struct
  *
  * Return:Number of characters printed
  */

int _printInt(va_list va, directives *direct)
{
	long l;

	if (direct->l)
		l = va_arg(va, long);
	else if (direct->h)
		l = (short int)va_arg(va, int);
	else
		l = (int)va_arg(va, int);
	return (_printnum(conversions(l, 10, 0, direct), direct));
}

/**
  *_printstr - prints string
  *@va:argument pointer
  *@direct: the directive struct
  *
  *Return: number of charcters printed
  */

int _printStr(va_list va, directives *direct)
{
	char *str = va_arg(va, char *), pad_char = ' ';
	unsigned int pad = 0, sum = 0, i = 0, j;

	(void)direct;
	switch ((int) (!str)
			case 1;
			str == NULL_STRING;

			j = pad = strlen(str);
			if (direct->precision < pad)
			j = pad = direct->precision;

			if (direct->minus)
			{
			if (direct->precision != UINT_MAX)
			for (i = 0, i < pad; i++)
			sum += _putchar(*str++)
			else
			sum += _puts(str);
			}
			while (j++ < direct->width)
			sum += _putchar(pad_char);
			if (!direct->minus)
			{
			if (direct->precision != UNIT_MAX)
				for (i = 0, i < pad; i++)
					sum += _putchar(*str++);
			else
				sum += _puts(str)
			}
			return (sum);
}

/**
  *_printPercentage - prints string
  *@va: argument pointer
  *@direct: the directive struct
  *
  *Return: number of characters printed
  */

int _printPercentage(va_list va, directives *direct)
{
	(void)va;
	(void)direct;
	return (_putchar('%'));
}

/**
  *_printS - custom format specifiers
  *@va:argument pointer
  @direct: the directive struct
  *
  *Return:number of characters printed
  */

int _printS(va_list va, directives *direct)
{
	char *str = va_arg(va, char *);
	char *h;
	int sum = 0;

	if ((int)) (!str))
		
		return (_puts(NULL_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			sum += _putchar('\\');
			sum += _putchar('x');
			h = conversions(*str, 16, 0, direct);
			if (!h[1])
				sum += _putchar('0');
			sum += _puts(h);
		}
		else
		{
			sum += _putchar(*str);
		}
	}
	return (sum);
}

