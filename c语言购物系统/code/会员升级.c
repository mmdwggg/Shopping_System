#include "list.h"
hysj(char *name,int hy,double w,struct yhnode *yhlist){
		struct yhnode* move=yhlist->next;
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
	}
	if(hy==0){
	if(w>=200&&w<1000) move->data.hy=1;
	if(w>=1000&&w<10000) move->data.hy=2;
	if(w>=10000) move->data.hy=3;
	yhwrite("yh.txt",yhlist);
	}
	if(hy==1){
	if(w>=1000&&w<10000) move->data.hy=2;
	if(w>=10000) move->data.hy=3;
	yhwrite("yh.txt",yhlist);
	}
	if(hy==2){
	if(w>=10000) move->data.hy=3;
	yhwrite("yh.txt",yhlist);
	}
}
