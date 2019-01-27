int isalnum(int);	//0-9 a-z A-Z :1, 0
int isalpha(int);	//a-z:2 A-Z:1  0
int iscntrl(int);	//0x0-0x1f||0x7f:1  0
isspace isdigit islower isupper
int isgraph(int);	//对映的ASCII码可打印，且非空格字符:1 0
int isprint(int);	//可打印字符(0x20-0x7e):1 0
int ispunct(int);	//标点符号或特殊符号(非空格,非数字,非英文字母):1 0
int isxdigit(int);	//0-9 a-f A-F:1 0
int tolower(int);	//把字符转换成小写字母,非字母字符不做出处理
int toupper(int);	//把字符转换成大写字母,非字母字符不做出处理
int isblank(int);	//空格, \t:1 0
int isascii(int);	//0x0-0x7f:1 0
int toascii(int);	//转换成7 位的unsigned char 值，第八位则会被清除

