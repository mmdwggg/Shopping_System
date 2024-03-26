#include "list.h"
struct gwcnode *gwccreat(){
	struct gwcnode *gwchead=(struct gwcnode*)malloc(sizeof(struct gwcnode));
	gwchead->next=NULL;
	return gwchead;
}
struct gwcnode *gwclist(struct gwc data){
	struct gwcnode *gwcnew=(struct gwcnode*)malloc(sizeof(struct gwcnode));
	gwcnew->next=NULL;
	gwcnew->data=data;
	return gwcnew;
}
void gwccr(struct gwcnode *gwchead,struct gwc data){
	struct gwcnode *gwcnew=gwclist(data);
	gwcnew->next=gwchead->next;
	gwchead->next=gwcnew;
}
void gwcdy(struct gwcnode *gwchead){
	struct gwcnode *move=gwchead->next;
	printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
	while(move){
		printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
void gwcsc(struct gwcnode *headnode,char *name,char *yhname,int hy,char *zf){
	struct gwcnode* move=headnode->next;
	struct gwcnode* movef=headnode;
	if(move==NULL){
		printf("您的购物车为空\n");
	system("pause"); 
	system("cls"); 
	while(1){
	gwc(yhname,hy,zf,gwclist);
}
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("您的购物车中没有这件商品\n");
	system("pause"); 
	system("cls"); 
	while(1){
	gwc(yhname,hy,zf,gwclist);
}
		}
	}
	system("pause"); 
	system("cls"); 
	movef->next=move->next;
	free(move);
}
void gwccz(struct spnode *headnode,char *name){
	struct gwcnode* move=headnode->next;
	if(move==NULL){
		printf("您的购物车为空n");
		system("pause");
		system("cls");
		return;
	}
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("您的购物车中没有这件商品\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("您找的货如下如下\n");
			printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
		system("pause");
		system("cls");
	}
}
