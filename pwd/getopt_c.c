int getopt(int argc, char * const argv[], const char *optstring);

int getopt_long(int argc, char * const argv[], const char *optstring, const struct option *longopts, int *longindex);

int getopt_long_only(int argc, char * const argv[], const char *optstring, const struct option *longopts, int *longindex);


extern char *optarg;
extern int optind, opterr, optopt;

struct option {
const char  *name;       /* 参数名称 */
int          has_arg;    /* 指明是否带有参数 */
int          *flag;      /* flag=NULL时,返回value;不为空时,*flag=val,返回0 */
int          val;        /* 用于指定函数找到选项的返回值或flag非空时指定*flag的值 */
}; 

