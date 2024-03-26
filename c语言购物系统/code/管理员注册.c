#include "list.h"
void glyml(){
	int mm=19980618;
	int m;
	char q[100];
	printf("请输入密令用以证明你已获得成为管理员的资格\n"); 
	scanf("%d",&m);
	system("cls");
	if(m==mm){
		struct glynode *glylist=glycreat();
		glyread("gly.txt",glylist);
		printf("恭喜您通过测试\n");
		printf("请注册\n"); 
		system("pause");
		system("cls");
		struct gly a;
		int b=0;
		printf("请输入您的昵称\n");
		scanf("%s",&a.name);
		b=glycheck(glylist,a.name);
		while(b==1){
		system("cls");
		printf("此昵称已经被占用，请换一个昵称");
		system("pause");
		printf("请输入您的昵称\n");
		scanf("%s",&a.name);
		b=glycheck(glylist,a.name);
		}
		system("cls");
		printf("请输入您的密码\n"); 
		scanf("%s",&a.mm);
		printf("请再次输入密码\n");
		scanf("%s",&q);
		while(strcmp(a.mm,q)!=0){
			printf("输入错误\n");
			printf("请再次输入密码\n");
			scanf("%s",&q); 
		} 
		glycr(glylist,a);
		glywrite("gly.txt",glylist);
		printf("注册成功，感谢您的使用\n");
		system("pause");
		system("cls");
	}
	if(m!=mm){
		printf("您没有注册管理员的资格\n");
		printf("即将为您返回主菜单\n");
		system("pause");
		system("cls");
	}
}
