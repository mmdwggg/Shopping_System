#include "list.h"
struct ywdnode *ywdcreat(){
	struct ywdnode *ywdhead=(struct ywdnode*)malloc(sizeof(struct ywdnode));
	ywdhead->next=NULL;
	return ywdhead;
}
struct ywdnode *ywdlist(struct ywd data){
	struct ywdnode *ywdnew=(struct ywdnode*)malloc(sizeof(struct ywdnode));
	ywdnew->next=NULL;
	ywdnew->data=data;
	return ywdnew;
}
void ywdcr(struct ywdnode *ywdhead,struct ywd data){
	struct ywdnode *ywdnew=ywdlist(data);
	ywdnew->next=ywdhead->next;
	ywdhead->next=ywdnew;
}
void ywddy(struct ywdnode *ywdhead){
	struct ywdnode *move=ywdhead->next;
	while(move){
		printf("ÓÃ»§êÇ³Æ:%s\tÔ¸Íû:%s\n",move->data.name,move->data.yw);
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
