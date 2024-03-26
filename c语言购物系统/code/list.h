#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct gly{
	char mm[100];
	char name[100];
};
struct glynode{
	struct gly data;
	struct glynode *next;
}; 
struct sp{
	char name[100];
	char type[100];
	int s;
	char t;
};
struct spnode{
	struct sp data;
	struct spnode *next;
};
struct yh{
	char mm[100];
	char name[100];
	char tel[100];
	char p[600];
	char vx[100];
	char zf[100];
	int hy; 
};
struct yhnode{
	struct yh data;
	struct yhnode *next;
};
struct gwc{
	char name[100];
	char type[100];
	int s;
	char t;
};
struct gwcnode{
	struct gwc data;
	struct gwcnode *next;
};
struct ms{
	char name[100];
	char type[100];
	int s;
};
struct msnode{
	struct ms data;
	struct msnode *next;
};
struct ywd{
	char name[100];
	char yw[1000]; 
};
struct ywdnode{
	struct ywd data;
	struct ywdnode *next;
};
struct pl{
	char yhname[100];
	char name[100];
	char pl[1000]; 
};
struct plnode{
	struct pl data;
	struct plnode *next;
};
struct gm{
	char yhname[100];
	char name[100]; 
};
struct gmnode{
	struct gm data;
	struct gmnode *next;
};
