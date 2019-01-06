void *memchr (const void *, int, size_t);
	从buf所指内存区域的前count个字节查找字符ch	buf, ch, count  |  str*, 'a', strlen(str*)
char *strchr (const char *, int);
	查找字符串s中首次出现字符c的位置,返回首次出现c的位置的指针，如果s中不存在c则返回NULL
char *strrchr (const char *, int);
	找一个字符c在另一个字符串str中末次出现的位置（也就是从str的右侧开始查找字符c首次出现的位置）

char *strpbrk (const char *, const char *)
	顺序在字符串s1中搜寻与s2中字符的第一个相同字符，返回这个字符在S1中第一次出现的位置

char *strerror (int);
	strerror()用来依参数errnum 的错误代码来查询其错误原因的描述字符串, 然后将该字符串指针返回

size_t strspn (const char *, const char *);
	返回字符串 str 开头连续包含字符串 accept 内的字符数目
size_t strcspn (const char *, const char *);
	返回字符串 str 开头连续不含字符串 accept 内的字符数目

char *strstr (const char *, const char *);
	该函数返回在 haystack 中第一次出现 needle 字符串的位置，如果未找到则返回 null

char *strtok (char *, const char *);
	分解字符串为一组字符串。s为要分解的字符串，delim为分隔符字符串

size_t strxfrm (char *, const char *, size_t);
	返回source字符串的长度，不包含‘\0’

void *_memccpy (void *, const void *, int, size_t);
	返回指向字符ch后的第一个字符的指针，如果src前n个字节中不存在ch则返回NULL。ch被复制

char *_strdup (const char *);
	回一个指针,指向为复制字符串分配的空间;如果分配空间失败,则返回NULL值

char *_strlwr (char *);
	返回转换后的小写字符串，其实就是将str返回
char *_strupr (char *);
	返回转换后的大写字符串，其实就是将str返回

char *_strset (char *, int);
	把原字符串中所有字符都换成ch表示的字符
char *_strnset (char *, int, size_t);
	只把原字符串中前n个字符换成ch表示的字符

char *_strrev (char *);
	返回指向逆置后的字符串的指针

void _swab (const char *, char *, size_t);
	调换字符串中的两个相邻的字符并赋给另一个字符串

wchar_t *wcscat (wchar_t *, const wchar_t *);
	unsigned short 把Src所指字符串添加到Dest结尾处，覆盖Dest结尾处的'\0'并添加'\0'
wchar_t *wcschr (const wchar_t *, wchar_t);
	查找字符串s中首次出现字符c的位置,返回首次出现c的位置的指针，如果s中不存在c则返回NULL
int wcscmp (const wchar_t *, const wchar_t *);
wchar_t *wcscpy (wchar_t *, const wchar_t *);