#include "list.h"
struct gmnode *gmcreat(){
	struct gmnode *gmhead=(struct gmnode*)malloc(sizeof(struct gmnode));
	gmhead->next=NULL;
	return gmhead;
}
struct gmnode *gmlist(struct gm data){
	struct gmnode *gmnew=(struct gmnode*)malloc(sizeof(struct gmnode));
	gmnew->next=NULL;
	gmnew->data=data;
	return gmnew;
}
void gmcr(struct gmnode *gmhead,struct gm data){
	struct gmnode *gmnew=gmlist(data);
	gmnew->next=gmhead->next;
	gmhead->next=gmnew;
}
void gmdy(struct gmnode *gmhead,char *yhname){
	struct gmnode *move=gmhead->next;
	while(move){
		if(strcmp(yhname,move->data.yhname)==0){
		printf("%s\t",move->data.name);
	}
		move=move->next;
	}
}
int gmcheck(struct gmnode *list,char *yhname,char *name){
	int flag=0;
	struct gmnode *p=NULL;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.name,name)==0&&strcmp(p->data.yhname,yhname)==0){
			flag=1;
			break;
		}else{
			p=p->next;
		}
	}
	if(p==NULL){
		printf("您还未购买过该商品\n");
	} 
	return flag;
}
void gmsc(struct gmnode *headnode,char *yhname,char *name){
	struct gmnode* move=headnode->next;
	struct gmnode* movef=headnode;
	while(strcmp(move->data.yhname,yhname)!=0||strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
	}
	movef->next=move->next;
	free(move);
}
