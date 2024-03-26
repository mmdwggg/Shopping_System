#include "list.h"
struct yhnode *yhcreat(){
	struct yhnode *yhhead=(struct yhnode*)malloc(sizeof(struct yhnode));
	yhhead->next=NULL;
	return yhhead;
}
struct yhnode *yhlist(struct yh data){
	struct yhnode *yhnew=(struct yhnode*)malloc(sizeof(struct yhnode));
	yhnew->next=NULL;
	yhnew->data=data;
	return yhnew;
}
void yhcr(struct yhnode *yhhead,struct yh data){
	struct yhnode *yhnew=yhlist(data);
	yhnew->next=yhhead->next;
	yhhead->next=yhnew;
}
void yhdy(struct yhnode *yhhead){
	struct yhnode *move=yhhead->next;
	printf("账号\t\t电话\t\t收货地址\t\t微信\t\t会员等级\n");
	while(move){
		printf("%s\t%15s\t%15s\t%15s\t\t\t%d\n",move->data.name,move->data.tel,move->data.p,move->data.vx,move->data.hy);
		move=move->next;
	}
}
void yhsc1(struct yhnode *headnode,char *name,char *n,char* mm){
	struct yhnode* move=headnode->next;
	struct yhnode* movef=headnode;
	if(move==NULL){
		printf("数据为空\n");
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("未找到此人\n");
			yhgl(n,mm);
		}
	}
	movef->next=move->next;
	free(move);
}
void yhsc2(struct yhnode *headnode,char *name,int hy,char *zf,struct gwcnode* gwclist){
	struct yhnode* move=headnode->next;
	struct yhnode* movef=headnode;
	if(move==NULL){
		printf("数据为空\n");
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("未找到此人\n");
			yhxt(name,hy,zf,gwclist);
		}
	}
	movef->next=move->next;
	free(move);
}
void yhxg(struct yhnode *headnode,char *name,int hy,char *zf,struct gwcnode* gwclist){
	yhsc2(headnode,name,hy,zf,gwclist);
		struct yh a;
		int b=0;
		printf("请输入您新的昵称\n");
		scanf("%s",&a.name);
		b=yhcheck(headnode,a.name);
		while(b==1){
		system("cls");
		printf("此昵称已经被占用，请换一个昵称");
		system("pause");
		printf("请输入您新的昵称\n");
		scanf("%s",&a.name);
		b=yhcheck(headnode,a.name);
		}
		system("cls");
		printf("请输入您的密码\n"); 
		scanf("%s",&a.mm);
		system("pause");
		system("cls");
		printf("请输入您的电话\n"); 
		scanf("%s",&a.tel);
		system("pause");
		system("cls");
		printf("请输入您的收货地址\n"); 
		scanf("%s",&a.p);
		system("pause");
		system("cls");
		printf("请输入您的微信号码\n"); 
		scanf("%s",&a.vx);
		system("pause");
		system("cls");
		printf("请输入您的支付密码\n"); 
		scanf("%s",&a.zf);
		system("pause");
		system("cls");
		a.hy=hy;
		system("pause");
		system("cls");
		yhcr(headnode,a);
}
int yhcheck(struct yhnode *list,char *name){
	int flag=0;
	struct yhnode *p=NULL;
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
void yhcz(struct yhnode *headnode,char *name){
	struct yhnode* move=headnode->next;
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
			printf("账号\t\t电话\t\t收货地址\t\t微信\t\t会员等级\n");
			printf("%s\t%15s\t%15s\t%15s\t\t\t%d\n",move->data.name,move->data.tel,move->data.p,move->data.vx,move->data.hy);
		system("pause");
		system("cls");
	}
}
