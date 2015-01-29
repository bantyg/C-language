int int_reduce(int *,int,int (*)(int,int),int);
float float_reduce(float *,int,float (*)(float,float),float);
char char_reduce(char *,int,char (*)(char,char));
char* string_reduce(char **,int ,char* (*)(char *,char *));