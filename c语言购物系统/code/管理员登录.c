#include "list.h"
void glydl(){
	struct glynode *glylist=glycreat();
	glyread("gly.txt",glylist);
	struct glynode *move=NULL; 
	move=glylist->next;
	if(move==NULL){
		printf("我们好惨，没有员工，快来注册一位吧\n");
		system("pause");
		return;
	}
	printf("请输入您的昵称\n");
	char name[100];
	scanf("%s",name);
	system("cls");
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("未找到这位管理员\n");
			system("pause");
			system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("请输入密码\n");
			char m[100];
			scanf("%s",&m);
			system("pause");
			system("cls");
			while(strcmp(m,move->data.mm)!=0){
				printf("笨蛋！输错了，重来\n");
				scanf("%s",&m);
				system("cls");
			}
			if(strcmp(m,move->data.mm)==0){
				printf("登录成功\n");
				system("pause");
				system("cls");
				while(1){
				glyxt(move->data.name,move->data.mm); 
			}
			}
	}
}
