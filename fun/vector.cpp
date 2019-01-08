vector<int> v
vector<int> v(n, i) n个值为i的元素
vector<int> v(n) n个0值元素

int a[4]={0,1,2,3,3};
vector<int> v(a,a+5);//v的size为5, v被初始化为a的5个值
	//后一个指针要指向将被拷贝的末元素的下一位置
vector<int> v1(v);//v1是v的拷贝

v.max_size()
v.begin()
v.end()
v.size()

v.push_back(t)
v.pop_back()
v.size()
v.resize(2*v.size)   将v的容量翻倍               
v.resize(2*v.size, 99) 翻倍(并把新元素的值初始化为99)
v.empty()
v[n]  返回v中位置为n的元素
v.insert(pointer,number,content) 向v中pointer位置插入number个content的内容。
v.insert(pointer,content), v.insert(pointer,a[2],a[4])将a[2]到a[4]三个元素插入
v.erase(pointer1,pointer2) 删除pointer1到pointer2中间(包含pointer1所指)的元素
v1==v2 	( !=, <, <=, >, >= )

vector<int>::iterator p=v.begin( ); p指向v的第一个元素,*p取所指向元素的值
对于const vector<typeName>仅仅能用vector<typeName>::const_iterator类型的指针訪问

v.clear()      删除容器中的全部元素
搜索算法：find() 、search() 、count() 、find_if() 、search_if() 、count_if() 
分类排序：sort() 、merge() 
删除算法：unique() 、remove() 
生成和变异：generate() 、fill() 、transformation() 、copy() 
关系算法：equal() 、min() 、max() 
sort(v1.begin(),vi.begin()+v1.size/2）; 对v1的前半段元素排序
