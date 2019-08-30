#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>

#define isslash_o(c) (c=='/'||c=='\\')
#define isslash(c) isslash_o((c))

int
mkdirs(const char *_path)
{
	int c;
	char *path, *pc;
	path=strdup(_path);
	if(!path)
		return -1;
	for(pc=path;;pc++){
		c=*pc;
		if(!c)
			break;
		if(isslash(c)){
			*pc=0;
			if(access(path, F_OK)&&mkdir(path, 0755))
				return -2;
			*pc='/';
		}
	}
	free(path);
	return 0;
}
