#include "list.h"
void glydl(){
	struct glynode *glylist=glycreat();
	glyread("gly.txt",glylist);
	struct glynode *move=NULL; 
	move=glylist->next;
	if(move==NULL){
		printf("���Ǻòң�û��Ա��������ע��һλ��\n");
		system("pause");
		return;
	}
	printf("�����������ǳ�\n");
	char name[100];
	scanf("%s",name);
	system("cls");
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("δ�ҵ���λ����Ա\n");
			system("pause");
			system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("����������\n");
			char m[100];
			scanf("%s",&m);
			system("pause");
			system("cls");
			while(strcmp(m,move->data.mm)!=0){
				printf("����������ˣ�����\n");
				scanf("%s",&m);
				system("cls");
			}
			if(strcmp(m,move->data.mm)==0){
				printf("��¼�ɹ�\n");
				system("pause");
				system("cls");
				while(1){
				glyxt(move->data.name,move->data.mm); 
			}
			}
	}
}
