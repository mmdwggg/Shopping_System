#include "list.h"
struct plnode *plcreat(){
	struct plnode *plhead=(struct plnode*)malloc(sizeof(struct plnode));
	plhead->next=NULL;
	return plhead;
}
struct plnode *pllist(struct pl data){
	struct plnode *plnew=(struct plnode*)malloc(sizeof(struct plnode));
	plnew->next=NULL;
	plnew->data=data;
	return plnew;
}
void plcr(struct plnode *plhead,struct pl data){
	struct plnode *plnew=pllist(data);
	plnew->next=plhead->next;
	plhead->next=plnew;
}
void pldy(struct plnode *plhead){
	struct plnode *move=plhead->next;
	while(move){
		printf("用户昵称:%s\t商品名称:%s\t评论:%s\n",move->data.yhname,move->data.name,move->data.pl);
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
