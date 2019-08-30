#include <stdio.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>
#include </home/cpplay/git/lib_c/h/prand.h>
#include </home/cpplay/c/pwd/c/pwd.h>
#include </home/cpplay/c/pwd/ccolor.h>

#define opt_cn		'n'
#define opt_type	't'
#define opt_fname	'f'
#define opt_ps		'p'
#define opt_help	'h'

static const char *short_options=":n:t:f:p:h";

static struct option long_options[]={
	{"cn", required_argument, NULL, opt_cn},
	{"type", required_argument, NULL, opt_type},
	{"fname", required_argument, NULL, opt_fname},
	{"ps", required_argument, NULL, opt_ps},
	{"help", no_argument, NULL, opt_help},
	{NULL, 0, NULL, 0}
};

int
main(int argc, char **argv)
{
	int opt;
	int cn=16, a[3]={20, 26, 26};
	float P[3];
	const char *dir=".account/", *fname_y=NULL, *ps=NULL;
	char filename[0x200], *fname=filename, time_str[0x30];
	FILE *fp;
	while((opt=getopt_long_only(argc, argv, short_options, long_options, NULL))!=-1){
		switch(opt){
		case opt_cn:
			if(sscanf(optarg, "%d", &cn)<1){
				fprintf(stderr,
					WHITE_S("%s: ") L_RED_S("error: ") "argument ‘%s‘ expected %%d\n",
					argv[0], optarg);
				return -11;
			}
			if(cn<1){
				fprintf(stderr,
					WHITE_S("%s: ") L_RED_S("error: ") "argument ‘%s‘ expected positive number\n",
					argv[0], optarg);
				return -12;
			}
		break;
		case opt_type:
			if(sscanf(optarg, "%d%*[^0-9]%d%*[^0-9]%d", a, a+1, a+2)<3){
				fprintf(stderr,
					WHITE_S("%s: ") L_RED_S("error: ") "argument ‘%s‘ expected %%d:%%d:%%d!\n",
					argv[0], optarg);
				return -21;
			}
			if(set_hitp(a, 3, P)){
				fprintf(stderr,
					WHITE_S("%s: ") L_RED_S("error: ") "char_type less than zero or too big: %d:%d:%d\n",
					argv[0], a[0], a[1], a[2]);
				return -22;
			}
		break;
		case opt_fname:
			fname_y=optarg;
		break;
		case opt_ps:
			ps=optarg;
		break;
		case opt_help:
			printf(
"rand_passwd:\n"
"  -n --cn <%%d>		set char num\n"
"  -t --type <%%d:%%d:%%d>	set char type  P(0-9) : P(A-Z) : P(a-z)\n"
"  -h --help		display this message\n"
);
			return -0xffff;
		break;
		case ':':
			fprintf(stderr,
				WHITE_S("%s: ") L_RED_S("error: ") "missing argument after " WHITE_S("‘%s’\n"),
				argv[0], argv[optind-1]);
			return -0x100;
		break;
		case '?':
			fprintf(stderr,
				WHITE_S("%s: ") L_RED_S("error: ") "unrecognized command line option " WHITE_S("‘%s’\n"),
				argv[0], argv[optind-1]);
			return -0x200;
		break;
		default:
			printf( L_RED "default: opt=0x%X\n" ENDCC, opt);
		}
	}
	if(access(dir, F_OK))
		mkdir(dir, 0755);

	strftime_x(time_str, 0x30, "%Y%m%d-%H:%M:%S");
	strcpy(fname, dir);
	if(fname_y)
		strcat(fname, fname_y);
	else{
		strcat(fname, "id_rand_");
		strcat(fname, time_str);
	}
	fp=fopen(fname, "w+");

	set_seed(time(NULL));
	set_hitp(a, 3, P);
	fprintf(fp, "username: ");
	rand_strf(fp, cn, a);
	fputc('\n', fp);

	rand_turn(prand()%10+5);

	fprintf(fp, "password: ");
	rand_strf(fp, cn, a);
	fputc('\n', fp);
	fprintf(fp, "filename: %s\n", fname);
	fprintf(fp, "maketime: %s\n", time_str);
	if(ps)
		fprintf(fp, "#_____ps: %s\n", ps);

	cat(fp);
	fclose(fp);
	printf( WHITE_S("\n%s: ") "your account has been saved in " L_CYAN_S("\'%s\'\n"), argv[0], fname);
	return 0;
}
