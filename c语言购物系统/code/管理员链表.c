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
	printf("账号\t密码\n");
	while(move){
		printf("%s\t%s\n",move->data.name,move->data.mm);
		move=move->next;
	}
}
void glysc(struct glynode *headnode,char *name){
	struct glynode* move=headnode->next;
	struct glynode* movef=headnode;
	if(move==NULL){
		printf("数据为空\n");
		glyxt();
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("未找到此人\n");
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
		printf("请输入您的新昵称\n");
		scanf("%s",&a.name);
		b=glycheck(headnode,a.name);
		while(b==1){
		system("cls");
		printf("此昵称已经被占用，请换一个昵称");
		system("pause");
		printf("请输入您的新昵称\n");
		scanf("%s",&a.name);
		b=glycheck(headnode,a.name);
		}
		system("cls");
		printf("请输入您的密码\n"); 
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
		printf("数据为空\n");
		system("pause");
		system("cls");
		return;
	}
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("未找到\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("您找的人如下\n");
			printf("%s\n",move->data.name);
		system("pause");
		system("cls");
	}
}
