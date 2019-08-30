string s("hello");
string s(3, '6');

s.at(i)
s[i]

s.data() //返回一个非null终止的c字符数组
s.c_str() //返回一个以null终止的c字符串

s.capacity()
s.max_size()
s.size()
s.length()
s.empty()
s.resize(len, '\0')
s>>
s<<
getline(stdin, s);('\n'end)

s1=s
s.assign("hello")
s.assign("hello, world", 5), s=="hello"
s.assign(s1)
s.assign(3, '6')
s.assign(s1="hehe, hello!", 6, 5)

s+=s1
s.append(", world")
s.append(", world, lala!", 7)
s.append(s1)
s.append(s1="llo, world!", 3, 7)
s.append(3, '.') //在当前字符串结尾添加n个字符c

s==s1  >, <, >=, <=, !=
s.compare(s1)
s.compare(pos, n, s1) //比较当前字符串从pos开始的n个字符组成的字符串与s的>大小
s.compare(pos, n, s1, pos1, n1) //比较当前字符串pos, n个字符与s1, pos1开始的n1个字符大小

s1=substr(int pos = 0,int n = npos) //返回pos开始的n个字符组成的字符串
s.swap(s1) //交换当前字符串与s1的值


