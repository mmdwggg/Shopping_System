#include "list.h"
void glywrite(char* fileName,struct glynode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct glynode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s\n",pMove->data.name,pMove->data.mm);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void glyread(char* fileName,struct glynode* listHeadNode)
{
	struct gly tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s",&tempData.name,&tempData.mm)!=EOF)
	 {
	 	glycr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
 void spwrite(char* fileName,struct spnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct spnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %d %c\n",pMove->data.name,pMove->data.type,pMove->data.s,pMove->data.t);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void spread(char* fileName,struct spnode* listHeadNode)
{
	struct sp tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s %d %c",&tempData.name,&tempData.type,&tempData.s,&tempData.t)!=EOF)
	 {
	 	spcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
  void yhwrite(char* fileName,struct yhnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct yhnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %s %s %s %s %d\n",pMove->data.name,pMove->data.mm,pMove->data.tel,pMove->data.p,pMove->data.vx,pMove->data.zf,pMove->data.hy);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void yhread(char* fileName,struct yhnode* listHeadNode)
{
	struct yh tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s %s %s %s %s %d",&tempData.name,&tempData.mm,&tempData.tel,&tempData.p,&tempData.vx,&tempData.zf,&tempData.hy)!=EOF)
	 {
	 	yhcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
 void wwrite(char* fileName,int w,int sr)
{
	sr+=w;
  FILE* fp =fopen(fileName,"w");
  	fprintf(fp,"%d\n",sr);
  fclose(fp);
}
int wread(char* fileName)
{
	int w;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%d",&w)!=EOF)
	 {
	  }
	  fclose(fp); 
	  return w;
 }
  void mswrite(char* fileName,struct msnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct msnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %d\n",pMove->data.name,pMove->data.type,pMove->data.s);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void msread(char* fileName,struct msnode* listHeadNode)
{
	struct ms tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s %d",&tempData.name,&tempData.type,&tempData.s)!=EOF)
	 {
	 	spcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
   void ywdwrite(char* fileName,struct ywdnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct ywdnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s\n",pMove->data.name,pMove->data.yw);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void ywdread(char* fileName,struct ywdnode* listHeadNode)
{
	struct ywd tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s",&tempData.name,&tempData.yw)!=EOF)
	 {
	 	ywdcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
    void plwrite(char* fileName,struct plnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct plnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s %s\n",pMove->data.yhname,pMove->data.name,pMove->data.pl);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void plread(char* fileName,struct plnode* listHeadNode)
{
	struct pl tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s %s",&tempData.yhname,&tempData.name,&tempData.pl)!=EOF)
	 {
	 	plcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
     void gmwrite(char* fileName,struct gmnode* listHeadNode)
{
  FILE* fp =fopen(fileName,"w");
  struct gmnode* pMove=listHeadNode->next;
  while(pMove)
  {
  	fprintf(fp,"%s %s\n",pMove->data.yhname,pMove->data.name);
  	pMove=pMove->next;
  }
  fclose(fp);
}
void gmread(char* fileName,struct gmnode* listHeadNode)
{
	struct gm tempData;
	FILE* fp=fopen(fileName,"r");
	if(fp==NULL)
	{
		fp=fopen(fileName,"w+");
	 }
	 while(fscanf(fp,"%s %s",&tempData.yhname,&tempData.name)!=EOF)
	 {
	 	gmcr(listHeadNode,tempData);
	  }
	  fclose(fp); 
 }
