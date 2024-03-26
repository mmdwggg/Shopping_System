void xt(){
	int a;
	printf("请选择您想进行的操作。\n"); 
	printf("1.进入用户系统\n"); 
	printf("2.进入管理员系统\n");
	printf("0.退出系统\n");
	scanf("%d",&a);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("进入用户系统中\n");
		system("pause");
		system("cls");
		yh();
		break; 
		case 2:printf("进入管理员系统中\n");
		system("pause");
		system("cls"); 
		gly(); 
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
} 
