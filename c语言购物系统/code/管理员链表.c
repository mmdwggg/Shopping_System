#include "list.h"
struct glynode *glycreat(){
	struct glynode *glyhead=(struct glynode*)malloc(sizeof(struct glynode));
	glyhead->next=NULL;
	return glyhead;
}
struct glynode *glylist(struct gly data){
	struct glynode *glynew=(struct glynode*)malloc(sizeof(struct glynode));
	glynew->next=NULL;
	glynew->data=data;
	return glynew;
}
void glycr(struct glynode *glyhead,struct gly data){
	struct glynode *glynew=glylist(data);
	glynew->next=glyhead->next;
	glyhead->next=glynew;
}
void glydy(struct glynode *glyhead){
	struct glynode *move=glyhead->next;
	printf("�˺�\t����\n");
	while(move){
		printf("%s\t%s\n",move->data.name,move->data.mm);
		move=move->next;
	}
}
void glysc(struct glynode *headnode,char *name){
	struct glynode* move=headnode->next;
	struct glynode* movef=headnode;
	if(move==NULL){
		printf("����Ϊ��\n");
		glyxt();
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("δ�ҵ�����\n");
			glyxt();
		}
	}
	movef->next=move->next;
	free(move);
}
void glyxg(struct glynode *headnode,char *name){
	glysc(headnode,name);
		struct gly a;
		int b=0;
		printf("�������������ǳ�\n");
		scanf("%s",&a.name);
		b=glycheck(headnode,a.name);
		while(b==1){
		system("cls");
		printf("���ǳ��Ѿ���ռ�ã��뻻һ���ǳ�");
		system("pause");
		printf("�������������ǳ�\n");
		scanf("%s",&a.name);
		b=glycheck(headnode,a.name);
		}
		system("cls");
		printf("��������������\n"); 
		scanf("%s",&a.mm);
		glycr(headnode,a);
}
int glycheck(struct glynode *list,char *name){
	int flag=0;
	struct glynode *p=NULL;
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
void glycz(struct glynode *headnode,char *name){
	struct glynode* move=headnode->next;
	if(move==NULL){
		printf("����Ϊ��\n");
		system("pause");
		system("cls");
		return;
	}
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("δ�ҵ�\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("���ҵ�������\n");
			printf("%s\n",move->data.name);
		system("pause");
		system("cls");
	}
}
