#include "head.h"


void func_case1(  )//增
{
					if (tmp > 4)
				{
					printf("**********************************************************************\n");
					printf("		无法增加，管理系统信息表格已经填满！\n");
					printf("**********************************************************************\n");
					return ;
				}

label:				printf("======================================================================\n");
					printf("	  	请输入新增人姓名和年龄：");
											scanf("%s", (*(p+tmp)).name);
					printf("======================================================================\n");
					
					while( scanf("%hhd",& (*(p+tmp)).age) != 1 || getchar() != '\n' )
					{	printf("				请输入正确格式的年龄：");
						while(getchar() != '\n');
					}
					for (i = 0; i < tmp; ++i)
					{
							if ( strcmp( (*(p+i)).name ,  (*(p+tmp)).name  ) == 0 )
						{								printf("**********************************************************************\n");
														printf("			已有此人。请重新添加！\n");	
														printf("**********************************************************************\n");
														goto label;

						}
					}

					tmp++;
}
void func_case2( )//显示
{
				student_num=1;
				for (i = 0; i < tmp; ++i)
				{
					printf("======================================================================\n");
					printf("		第%d个人的名字为：%s,年龄为%hhd \n",student_num,(*(p+i)).name,(*(p+i)).age );
					printf("======================================================================\n");
					student_num++;
				}
				if (tmp==0)
				{
					printf("@@@@@@@@@@@@@@@@@@@@@@@\n");
					printf("  目前无学生信息~\n");
					printf("@@@@@@@@@@@@@@@@@@@@@@@\n");
				}
}
 void func_case3( )//修改
{
				student_num=1;
				printf("======================================================================\n");
				for (i = 0; i < tmp; ++i)
				{
					printf("		  【%d】%s,年龄为%hhd \n",student_num,(*(p+i)).name,(*(p+i)).age);
					student_num++;
				}
				printf("======================================================================\n");
				
				bool flag=0;
				int modify_num;
				printf("______________________________________________________________________\n");
				printf(" 		请输入修改人编号:");
				while(scanf("%d",&modify_num) !=1 || getchar() != '\n')
				{
					printf("______________________________________________________________________\n");
					printf(" 		请重新输入正确的编号：\n");
					
					while(getchar() != '\n');
				}
				for( i=0;i<tmp;i++)
				{
					if ( (modify_num -1) == i )
				{
					printf("______________________________________________________________________\n");
					printf(" 		请输入修改后的姓名和年龄:");
					scanf("%s", (*(p+5)).name);
					scanf("%hhd",&((*(p+5)).age) );
					printf("______________________________________________________________________\n");
					//array[modify_num-1]=change;
					*(p+modify_num-1)= *(p+5);
					flag=1;
				}
				}
				if (flag ==0)
				{
					printf("______________________________________________________________________\n");
					printf(" 		无修改人编号！~\n");
					printf("______________________________________________________________________\n");
				}
}
 void func_case4(  )//删除
{
				student_num=1;
					bool flag1=false;
					printf("======================================================================\n");
				for (i = 0; i < tmp; ++i)
				{

					printf("		  (%d)%s,年龄为%hhd \n",student_num,(*(p+i)).name,(*(p+i)).age);
					student_num++;
				}
				printf("======================================================================\n");
				int rm_num = 1;
				printf("______________________________________________________________________\n");
				printf(" 		请输入删除人编号：");
				while(scanf("%d",&rm_num) != 1 || getchar() != '\n' )
				{
					printf("	     请重新输入正确的编号。");
					while(getchar() != '\n');
				}
				printf("______________________________________________________________________\n");
					for( i=0;i<tmp;i++)
				{
					if ( (rm_num -1) == i )
				{
				for (int j = 0; j < tmp; ++j)
				{
				//	array[rm_num-1]=array[rm_num];
					*(p+rm_num-1)= *(p+rm_num);
					rm_num++;		
				}
				tmp--;
				flag1=true;
				}
				}
				if (flag1 ==false)
				{	printf("@@@@@@@@@@@@@@@@@@@@@@@\n");
					printf("  无删除人编号！~\n");
					printf("@@@@@@@@@@@@@@@@@@@@@@@\n");
				}
}
	
void func_case5(  )//筛选
{
				if (tmp==0)
				{
					printf("===============================\n");	
					printf("	目前无学生信息~\n");
					printf("===============================\n");	
					return ;
				}
				q=malloc(sizeof(info_t)*6);

				//strcpy( char*q, (p );

				student_num=1;
				printf("======================================================================\n");
				for (i = 0; i < tmp; i++)
				{
					strcpy( (char *)(*(q+i)).name, (char *) (*(p+i)).name );
				//	strcpy( (char *)((*(q+i)).age), (char *) ((*(p+i)).age ));
					(*(q+i)).age=(*(p+i)).age;
					printf("	 第%d个人的名字为：%s,年龄为%hhd \n",student_num,(*(q+i)).name,(*(q+i)).age );
					student_num++;
				}
		
					printf("======================================================================\n");
					printf("		  [1]按名字大小[2]按年龄大小：\n");
					
					while(   (scanf("%d",&elect)  != 1) ||  getchar() != '\n'  )
					{
							while(getchar() != '\n');
labe2:						printf("---------------------------\n");
							printf("   请按正确形式输入\n");
							printf("---------------------------\n");
						

					}
					if ( elect < 1 || elect > 2 )
					{
						goto labe2;
					}
					printf("======================================================================\n");
					

				switch (elect)
	{
				case 1:
				printf("===============================\n");
				printf("	 【1】升序【2】降序\n");
				printf("===============================\n");
				int c1;
				while(  ( scanf("%d",&c1)  != 1) || getchar() != '\n'  )
					{
							while(getchar() != '\n');
labe3:						printf("---------------------------\n");
							printf("   请按正确形式输入\n");
							printf("---------------------------\n");
						

					}
					if ( c1 < 1 || c1 > 2 )
					{
						goto labe3;
					}
					printf("======================================================================\n");
				
				if(c1==1)
				{
					for( j=0 ; j< tmp; j++)
					{
						for ( i = j+1; i < tmp ; ++i)
						{
							if ( strcmp( (*(q+i)).name , (*(q+j)).name ) < 0  )
							{
								str_tmp=*(q+i);
								*(q+i) =*(q+j);
								*(q+j) = str_tmp;
							}
						}
					
					}
				}
				if(c1==2)
				{
					for( j=0 ; j< tmp; j++)
					{
						for ( i = j+1; i < tmp ; ++i)
						{
							if ( strcmp( (*(q+i)).name , (*(q+j)).name ) > 0  )
							{
								str_tmp=*(q+i);
								*(q+i) =*(q+j);
								*(q+j) = str_tmp;
							}
						}
					
					}
				}
				break;

				case 2:
				printf("===============================\n");
				printf("    【1】升序【2】降序\n");
				printf("===============================\n");
				int c2;
					while(  ( scanf("%d",&c2)  != 1 ) || getchar() != '\n'  )
					{
							while(getchar() != '\n');
labe4:						printf("---------------------------\n");
							printf("   请按正确形式输入\n");
							printf("---------------------------\n");
						

					}
					if ( c2 < 1 || c2 > 2 )
					{
						goto labe4;
					}
				
				if(c2==1)
				{
					for( j=0 ; j< tmp; j++)
					{
						for ( i = j+1; i < tmp ; ++i)
						{
							if ( (*(q+i)).age  < (*(q+j)).age    )
							{
								str_tmp=*(q+i);
								*(q+i) =*(q+j);
								*(q+j) = str_tmp;
							}
						}
					
					}
				}
				if(c2 ==2)
				{
					for( j=0 ; j< tmp; j++)
					{
						for ( i = j+1; i < tmp ; ++i)
						{
							if ( (*(q+i)).age  > (*(q+j)).age    )
							{
								str_tmp=*(q+i);
								*(q+i) =*(q+j);
								*(q+j) = str_tmp;
							}
						}
					
					}
				}
				
				break;
	}			
				system("clear");
				printf("===============================\n");
				printf("          筛选结果为~\n");
				printf("===============================\n");
				student_num=1;
				printf("======================================================================\n");
				for (i = 0; i < tmp; ++i)
				{
					printf("第%d个人的名字为：%s,年龄为%hhd \n",student_num,(*(q+i)).name,(*(q+i)).age );
					student_num++;
				}
				printf("======================================================================\n");
				
}



