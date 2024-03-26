#include "list.h"
void sppx(struct spnode *headnode){
	struct spnode* move=headnode->next;
	struct spnode* movef=headnode;
	struct spnode* moven=move->next;
	int n=0,a,b;
	while(moven->next!=NULL){
		n++;
		moven=moven->next;
	}
	for(a=0;a<=n;a++){
		move=headnode->next;
		movef=headnode;
		moven=move->next;
		for(b=0;b<=n;b++){
		if(move->data.s<moven->data.s){
			movef->next=moven;
			move->next=moven->next;
			moven->next=move;
			movef=movef->next;
			moven=move->next;
		}
		else{
			movef=movef->next;
			move=move->next;
			moven=moven->next;
		}
	}
	}
	printf("≈≈–Ú≥…π¶\n");	
} 
