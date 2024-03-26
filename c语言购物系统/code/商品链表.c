#include "list.h"
struct spnode *spcreat(){
	struct spnode *sphead=(struct spnode*)malloc(sizeof(struct spnode));
	sphead->next=NULL;
	return sphead;
}
struct spnode *splist(struct sp data){
	struct spnode *spnew=(struct spnode*)malloc(sizeof(struct spnode));
	spnew->next=NULL;
	spnew->data=data;
	return spnew;
}
void spcr(struct spnode *sphead,struct sp data){
	struct spnode *spnew=splist(data);
	spnew->next=sphead->next;
	sphead->next=spnew;
}
void spdy(struct spnode *sphead){
	struct spnode *move=sphead->next;
	printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
	while(move){
		printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
void yzspdy(struct spnode *sphead){
	struct spnode *move=sphead->next;
	printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
	while(move){
		if(move->data.t=='Y'){
		printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
	}
		move=move->next;
	}
	system("pause"); 
	system("cls"); 
}
void spsc(struct spnode *headnode,char *name){
	struct spnode* move=headnode->next;
	struct spnode* movef=headnode;
	if(move==NULL){
		printf("�ֿ�û���ˣ���үȥ����\n");
	system("pause"); 
	system("cls"); 
	sp();
	}
	while(strcmp(move->data.name,name)!=0){
		movef=move;
		move=move->next;
		if(move==NULL){
			printf("û����ⶫ��\n");
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
void spxg(struct spnode *headnode,char *name){
	spsc(headnode,name);
		struct sp a;
		int b=0;
		printf("���������Ʒ��������\n");
		scanf("%s",&a.name);
		b=spcheck(headnode,a.name);
		while(b==1){
		system("cls");
		printf("�������Ѿ���ռ�ã��뻻һ������\n");
		system("pause");
		printf("���������Ʒ����\n");
		scanf("%s",&a.name);
		b=spcheck(headnode,a.name);
		}
		system("cls");
		printf("���������Ʒ������ �ۼ� �Ƿ��Ƽ�Y/N\n"); 
		scanf("%s %d %c",&a.type,&a.s,&a.t);
		spcr(headnode,a);
		system("pause");
		system("cls"); 
}
int spcheck(struct spnode *list,char *name){
	int flag=0;
	struct spnode *p=NULL;
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
void spcz(struct spnode *headnode,char *name){
	struct spnode* move=headnode->next;
	if(move==NULL){
		printf("����û���ˣ��ý�����\n");
		system("pause");
		system("cls");
	}
	while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("�ۼҺ���û�����ֶ���\n");
		system("pause");
		system("cls");
			break;
		}
	}
	if(move!=NULL){
			printf("���ҵĻ���������\n");
			printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
		system("pause");
		system("cls");
	}
}
void spmsxg(struct spnode *headnode,char *name,struct msnode *mslist){
		struct sp a;
		struct ms b;
		struct spnode* move=headnode->next;
			while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("�ۼҺ���û�����ֶ���\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
		strcpy(b.name,name);
		strcpy(a.name,name);
		strcpy(a.type,move->data.type);
		strcpy(b.type,move->data.type);
		a.t=move->data.t;
	}
		printf("���������Ʒ����ɱ�۸�\n");
		scanf("%d",&a.s);
		b.s=a.s;
		spsc(headnode,name);
		spcr(headnode,a);
		mscr(mslist,b);
}
void spmssc(struct spnode *headnode,char *name,struct msnode *mslist){
		struct sp a;
		struct ms b;
		struct spnode* move=headnode->next;
			while(strcmp(move->data.name,name)!=0){
		move=move->next;
		if(move==NULL){
			printf("�ۼҺ���û�����ֶ���\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
		strcpy(b.name,name);
		strcpy(a.name,name);
		strcpy(a.type,move->data.type);
		strcpy(b.type,move->data.type);
		a.t=move->data.t;
	}
		printf("���������Ʒ�������۸�\n");
		scanf("%d",&a.s);
		b.s=a.s;
		spsc(headnode,name);
		spcr(headnode,a);
		mssc(mslist,b.name); 
}
