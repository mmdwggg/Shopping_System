#include "list.h"
void yhdl(){
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	struct yhnode *move=NULL; 
	move=yhlist->next;
	if(move==NULL){
		printf("���Ǻòң�û���û�������ע��һλ��\n");
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
			printf("δ�ҵ���λ����\n");
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
				struct gwcnode *gwclist=gwccreat();
				while(1){
				yhxt(move->data.name,move->data.hy,move->data.zf,gwclist); 
			}
			}
	}
}
