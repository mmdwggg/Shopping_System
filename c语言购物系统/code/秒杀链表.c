#include "list.h"
struct msnode *mscreat(){
	struct msnode *mshead=(struct msnode*)malloc(sizeof(struct msnode));
	mshead->next=NULL;
	return mshead;
}
struct msnode *mslist(struct ms data){
	struct msnode *msnew=(struct msnode*)malloc(sizeof(struct msnode));
	msnew->next=NULL;
	msnew->data=data;
	return msnew;
}
void mscr(struct msnode *mshead,struct ms data){
	struct msnode *msnew=mslist(data);
	msnew->next=mshead->next;
	mshead->next=msnew;
}
void msdy(struct msnode *mshead){
	struct msnode *move=mshead->next;
	printf("    ���� \t\t����  \t\t��ʱ�ۼ�\n");
	while(move){
		printf("%10s\t%12s\t%10d\n",move->data.name,move->data.type,move->data.s);
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
void mssc(struct msnode *headnode,char *name){
	struct msnode* move=headnode->next;
	struct msnode* movef=headnode;
	if(move==NULL){
		printf("��ʱ��ɱ�б���ʱ����Ʒ\n");
	system("pause"); 
	system("cls"); 
	sp();
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("��ʱ��ɱ�б�û���ⶫ��\n");
	system("pause"); 
	system("cls"); 
	sp();
		}
	}
	system("pause"); 
	system("cls"); 
	movef->next=move->next;
	free(move);
}
int mscheck(struct msnode *list,char *name){
	int flag=0;
	struct msnode *p=NULL;
	p=list->next;
	while(p!=NULL){
		if(strcmp(p->data.name,name)==0){
			flag=1;
			break;
		}else{
			p=p->next;
		}
	}
	return flag;
}
