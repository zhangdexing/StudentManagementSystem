#include "head.h"

//info_t array[5];
int tmp=0;
int i,j,flag2,mode,student_num,elect;
info_t *p;
info_t *q;
info_t str_tmp;

int main(int argc, char const *argv[])


{	
	//q=malloc(sizeof(int)*4);
	p=malloc(sizeof(info_t)*6);
	if (p ==NULL)
	{
		printf("full~\n");
		return -1;
	}
	while(1)
	{
		
		printf(""YELLOW"======================================================================\n");
		printf(""RED"请输入你的模式[1]增加[2]显示[3]修改[4]删除[5]筛选模式[6]退出："YELLOW" \n");
		printf("======================================================================\n");

		while ( scanf("%d",&mode) != 1)
		{
			printf("**********************************************************************\n");
			printf("			请正确输入对应模式的“数字”！\n");
			while(getchar() != '\n');
			printf("**********************************************************************\n");
		}
		printf("======================================================================\n");
		system("clear");
		if (mode==6)	
			{		
					printf("============================\n");
					printf("	已退出!~\n");
					printf("============================\n");
					break;
			}
		call_back(mode-1);
		/*switch(mode)
		{
			case 1:
				if (tmp > 4)
				{
					printf("**********************************************************************\n");
					printf("			无法增加，管理系统信息表格已经填满！\n");
					printf("**********************************************************************\n");
				break;	
				}
			    func_case1( );
				
				break;
			case 2:
				func_case2();
				
				break;
			case 3:
				func_case3();
				
				break;
			case 4:
				func_case4();
				
				break;
			case 5:
				func_case6();
				break;
			case 6:
				flag2=1;
					printf("============================\n");
					printf("	已退出!~\n");
					printf("============================\n");
					break;
			default:
					printf("============================\n");
					printf("	输入模式有误！~\n");
					printf("============================\n");
		}*/
			
	}
		free(p);
		free(q);
		return 0;
	}
