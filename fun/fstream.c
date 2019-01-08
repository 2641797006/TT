fstream f("fname", ios::openmode mode=ios::out);

f.open("fname", ios::out, int prot=0)
dec 格式化为十进制数值数据 输入和输出  
endl 输出一个换行符并刷新此流 输出  
ends 输出一个空字符 输出  
hex 格式化为十六进制数值数据 输入和输出  
oct 格式化为八进制数值数据 输入和输出  
setpxecision(int p) 设置浮点数的精度位数 输出 
f<<hex<<666;

f.put('c')
f.get(char &c)
c=f.get()
f.get(char *buf, int num, char delim='\n')
f.read(unsigned char *buf,int num)
f.write(const unsigned char *buf,int num);
f.eof()

f.tellg()
f.tellp()
f.seekg(streamoff offset,seek_dir origin); (read)
f.seekp(streamoff offset,seek_dir origin); (write)
ios::beg：　　文件开头  
ios::cur：　　文件当前位置  
ios::end：　　文件结尾  

f.is_open()
f.sync()
f.bad()
f.fail()
f.good()
f.clear()

