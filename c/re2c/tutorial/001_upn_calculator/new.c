/* Generated by re2c 0.13.5 on Tue Jun  4 14:31:58 2013 */
#line 1 "new.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scan(char *s, int l)
{
	char *p = s;
#define YYCTYPE		char
#define YYCURSOR	p
#define YYLIMIT		(s+l)
#define YYFILL(n)

	for(;;)
	{

#line 19 "new.c"
		{
			YYCTYPE yych;

			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy9;
			case '+':	goto yy5;
			case '-':	goto yy7;
			case '0':	goto yy2;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy4;
			default:	goto yy11;
			}
yy2:
			++YYCURSOR;
yy3:
#line 18 "new.re"
			{
		printf("Num: %c\n", n); continue;
	}
#line 48 "new.c"
yy4:
			yych = *++YYCURSOR;
			goto yy14;
yy5:
			++YYCURSOR;
#line 21 "new.re"
			{ printf("+\n"); continue; }
#line 56 "new.c"
yy7:
			++YYCURSOR;
#line 22 "new.re"
			{ printf("-\n"); continue; }
#line 61 "new.c"
yy9:
			++YYCURSOR;
#line 23 "new.re"
			{ printf("EOF\n"); return 0; }
#line 66 "new.c"
yy11:
			++YYCURSOR;
#line 24 "new.re"
			{ printf("ERR\n"); return 1; }
#line 71 "new.c"
yy13:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
yy14:
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy13;
			default:	goto yy3;
			}
		}
#line 25 "new.re"

	}
}




int main(int argc, char **argv)
{
	int i = 0;
	for(i = 0; i < argc; i++) {
		printf("argv %d: %s\n", i, argv[i]);
	}
	if(argc > 1) {
		return scan(argv[1], strlen(argv[1]));
	} else {
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
