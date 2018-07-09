#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int General_1(int arr[],int n) //judge whether same colour or not
{
	if( arr[1] == arr[3] && arr[3] == arr[5] )
		return 1;
	else
		return 0;
}

int General_2(int arr[],int n) //judge whether order or not
{	int temp[3];
	int tem;
	for( int i = 0  ; i < 3 ; i ++ )
	{
		temp[i] = arr[i*2]; 
	}
	for( int i = 0 ; i < 2 ; i ++ )
	{
		for( int j = 0 ; j < 2 - i ; j ++ )
		{
			if( temp[j] > temp[j+1] )
			{
				tem = temp[j];
				temp[j] = temp[j+1];
				temp[j+1] = tem;
			}
		}
	}
	if( (temp[2] - temp[1]) == 1 && (temp[1] -temp[0] == 1) )
		return 1;
	else
		return 0;
}

int General_3(int arr[],int n) //judge whether  same value or not
{
	if( arr[0] == arr[2] && arr[2] == arr[4])
		return 1;
	else
		return 0;	
}

int General_4(int arr[],int n) //judge whether double same value or not
{
	if( (arr[0] == arr[2] && arr[0] != arr[4]) || (arr[0] == arr[4] && arr[0] != arr[2]) ||     (arr[2] == arr[4] && arr[0] != arr[4])  )
		return 1;
	else
		return 0;
}

int max(int arr_1[],int n1,int arr_2[],int n2)
{
	int sum_1 , sum_2;
	sum_1 = arr_1[0] + arr_1[2] + arr_1[4];
	sum_2 = arr_2[0] + arr_2[2] + arr_2[4];
	if( sum_1 > sum_2 )
		return 1;
	else if( sum_1 < sum_2 )
		return -1;
	else 
		return 0;
}
int Max_General_2(int arr_1[],int n1,int arr_2[],int n2)
{
	int max1 = 0 , max2 = 0;
	if( arr_1[0] > arr_1[2] && arr_1[0] > arr_1[4]   )
	{
		max1 = arr_1[0];
	}
	else if ( arr_1[2] > arr_1[0] && arr_1[2] > arr_1[4]  )
	{
		max1 = arr_1[2];
	}
	else if ( arr_1[4] > arr_1[0] && arr_1[4] > arr_1[2] )
	{
		max1 = arr_1[4];
	}
	if( arr_2[0] > arr_2[2] && arr_2[0] > arr_2[4]   )
	{
		max2 = arr_2[0];
	}
	else if ( arr_2[2] > arr_2[0] && arr_2[2] > arr_2[4]  )
	{
		max2 = arr_2[2];
	}
	else if ( arr_2[4] > arr_2[0] && arr_2[4] > arr_2[2] )
	{
		max2 = arr_2[4];
	}
	if( max1 > max2 )
		return 1;
	else if( max1 < max2 )
		return -1;
	else
		return 0;
}
int Max_General_3( int arr_1[],int n1,int arr_2[],int n2)
{
	if( arr_1[0] > arr_2[0] )
		return 1;
	else if( arr_1[0] < arr_2[0] )
		return -1;
	else
		return 0;
}

int Max_General_4(int arr_1[],int n1,int arr_2[],int n2)
{
	int dou_max1 = 0 , dou_max2 = 0;
	int sin_max1 = 0 , sin_max2 = 0;
	if( arr_1[0] == arr_1[2] ) 
	{
		dou_max1 = arr_1[0];
		sin_max1 = arr_1[4];
	}
	else if( arr_1[0] == arr_1[4] )
	{
		dou_max1 = arr_1[0];
		sin_max1 = arr_1[2];
	}
	else if ( arr_1[2] == arr_1[4] )
	{
		dou_max1 = arr_1[2];
		sin_max1 = arr_1[0];
	}
	if( arr_2[0] == arr_2[2] )
	{
		dou_max2 = arr_2[0];
		sin_max2 = arr_2[4];
	}
	else if( arr_2[0] == arr_2[4] )
	{
		dou_max2 = arr_2[0];
		sin_max2 = arr_2[2];
	}
	else if ( arr_2[2] == arr_2[4] )
	{
		dou_max2 = arr_2[2];
		sin_max2 = arr_2[0];
	}
	if( dou_max1 > dou_max2  )
		return 1;
	else if ( dou_max1 < dou_max2 )
		return -1;
	else 
	{
		if( sin_max1 > sin_max2 )
			return 1;
		else if( sin_max1 < sin_max2 )
			return -1;
		else 
			return 0;
	}
		
}


void Print_name(int arr[],int n)
{
	int temp[3];
	temp[0] = arr[0]*10+arr[1];
	temp[1] = arr[2]*10+arr[3];
	temp[2] = arr[4]*10+arr[5];
	for( int i = 0 ; i < 3  ; i ++ )
	{
		switch(temp[i])
		{
			case 21:
				printf( " 黑桃二 " );
				break;
			case 22:
				printf( " 红桃二 " );
				break;
			case 23:
				printf( " 梅花二 " );
				break;
			case 24:
				printf( " 方块二 " );
				break;
			case 31:
				printf( " 黑桃三 " );
				break;
			case 32:
				printf( " 红桃三 " );
				break;
			case 33:
				printf( " 梅花三 " );
				break;
			case 34:
				printf( " 方块三 " );
				break;
			case 41:
				printf( " 黑桃四 " );
				break;
			case 42:
				printf( " 红桃四 " );
				break;
			case 43:
				printf( " 梅花四 " );
				break;
			case 44:
				printf( " 方块四 " );
				break;
			case 51:
				printf( " 黑桃五 " );
				break;
			case 52:
				printf( " 红桃五 " );
				break;
			case 53:
				printf( " 梅花五 " );
				break;
			case 54:
				printf( " 方块五 " );
				break;
			case 61:
				printf( " 黑桃六 " );
				break;
			case 62:
				printf( " 红桃六 " );
				break;
			case 63:
				printf( " 梅花六 " );
				break;
			case 64:
				printf( " 方块六 " );
				break;
			case 71:
				printf( " 黑桃七 " );
				break;
			case 72:
				printf( " 红桃七 " );
				break;
			case 73:
				printf( " 梅花七 " );
				break;
			case 74:
				printf( " 方块七 " );
				break;
			case 81:
				printf( " 黑桃八 " );
				break;
			case 82:
				printf( " 红桃八 " );
				break;
			case 83:
				printf( " 梅花八 " );
				break;
			case 84:
				printf( " 方块八 " );
				break;
			case 91:
				printf( " 黑桃九 " );
				break;
			case 92:
				printf( " 红桃九 " );
				break;
			case 93:
				printf( " 梅花九 " );
				break;
			case 94:
				printf( " 方块九 " );
				break;
			case 101:
				printf( " 黑桃十 " );
				break;
			case 102:
				printf( " 红桃十 " );
				break;
			case 103:
				printf( " 梅花十 " );
				break;
			case 104:
				printf( " 方块十 " );
				break;
			case 111:
				printf( " 黑桃J  " );
				break;
			case 112:
				printf( " 红桃J  " );
				break;
			case 113:
				printf( " 梅花J  " );
				break;
			case 114:
				printf( " 方块J  " );
				break;
			case 121:
				printf( " 黑桃Q  " );
				break;
			case 122:
				printf( " 红桃Q  " );
				break;
			case 123:
				printf( " 梅花Q  " );
				break;
			case 124:
				printf( " 方块Q  " );
				break;
			case 131:
				printf( " 黑桃K  " );
				break;
			case 132:
				printf( " 红桃K  " );
				break;
			case 133:
				printf( " 梅花K  " );
				break;
			case 134:
				printf( " 方块K  " );
				break;
			case 141:
				printf( " 黑桃A  " );
				break;
			case 142:
				printf( " 红桃A  " );
				break;
			case 143:
				printf( " 梅花A  " );
				break;
			case 144:
				printf( " 方块A  " );
				break;
			default:
				printf("***");
				break;
		}
	}
	printf("\n");
}


void Text_mode( int a[],int b[])
{
	printf("\n");
	printf("此模式供测试判断牌面使用########\n\n");
	printf("第一个值代表牌面大小，2-14代表2—A\n\n");
	printf("第二个值代表花色，1-4分别代表黑红梅方\n\n");
	printf("****************************************************\n\n");
	
	for( int  i = 0 ; i < 6 ; i ++ )
	{
		if( i % 2 == 0 )
		{
			printf("输入第一副牌的牌面值（值的范围为2-14）：");
		}
		if( i % 2 == 1  )
		{
			printf("输入第一副牌的牌花色（值的范围为1-4）：");
		}
		scanf("%d",&a[i]);
	}
	printf("\n");
	for( int j = 0 ; j < 6 ; j ++ )
	{
		if( j % 2 == 0 )
		{
			printf("输入第二副牌的牌面值（值的范围为2-14）：");
		}
		if( j % 2 == 1 )
		{		
			printf("输入第二副牌的牌花色（值的范围为1-4）：");
		}
		scanf("%d",&b[j]);
	}
	printf("\n");
	
//	printf("测试完毕，是否希望继续测试？×××××××\n");	
}


int rank_1 = 0;
int rank_2 = 0;
int rank_3 = 0;
int rank_4 = 0;
int rank_5 = 0;
int equ_rank = 0;
int Con = 0;
void Judge_bigger(int a[],int b[],int times)
{
	
		int Ga_1 = 0;
		int Ga_2 = 0;
		int Ga_3 = 0;
		int Ga_4 = 0;
		int Ga_5 = 0;

		int Gb_1 = 0;
		int Gb_2 = 0;
		int Gb_3 = 0;
		int Gb_4 = 0;
		int Gb_5 = 0;


		int max_ab = 2;
		Ga_1 = General_1(a,6);
		Gb_1 = General_1(b,6);
		if( Ga_1 > Gb_1 )
		{
			printf("A赢同花..\n");
			rank_1++;
		}		
		else if( Ga_1 <  Gb_1 )
		{
			printf("B赢同花..\n");
			rank_1++;
		}
		else if( Ga_1 == Gb_1 && Ga_1 == 1  )
		{
			Ga_2 = General_2(a,6);
			Gb_2 = General_2(b,6);
			if( Ga_2 > Gb_2 )
			{
				printf("A赢同花顺..\n");
				rank_1++;
			}
			else if( Ga_2 < Gb_2 )
			{
				printf("B赢同花顺..\n");
				rank_1++;
			}
			else if( Ga_2 == Gb_2 && Ga_2 == 1   )
			{
				int mark_2 = 0;
				mark_2 = Max_General_2(a,6,b,6);
				if( mark_2 == 1 )
				{
					printf("A赢同花顺,顺子大..\n");
					rank_1++;
				}
				else if( mark_2 == -1 )
				{

					printf("B赢同花顺,顺子大..\n");
					rank_1++;
				}	
				else
				{
					printf("平局，同花顺点数相同..\n");
					equ_rank++;
				}
			}
			else
			{
				int mark_5 = 0;
				mark_5 = max(a,6,b,6);
				if( mark_5 == 1 )
				{
					printf("A赢同花,杂牌点数大..\n");
					rank_1++;
				}
				else if ( mark_5 == -1 )
				{
					printf("B赢同花,杂牌点数大..\n");
					rank_1++;
				}
				else 
				{
					printf("平局，同花点数相同..\n");
					equ_rank++;
				}
			} 
		}
		else
		{
			Ga_2 = General_2(a,6);
			Gb_2 = General_2(b,6);
			if( Ga_2 > Gb_2  )
			{
				printf("A赢顺子..\n");
				rank_2++;
			}
			else if( Ga_2 < Gb_2 )
			{
				printf("B赢顺子..\n");
				rank_2++;
			}
			else if( Gb_2 == Ga_2 && Ga_2 == 1 )
			{
				int mark_2_2 = 0;
				mark_2_2 = Max_General_2(a,6,b,6);
				if( mark_2_2 == 1 )
				{
					printf("A赢顺子大..\n");
					rank_2++;
				}
				else if( mark_2_2 == -1 )
				{
					printf("B赢顺子大..\n");
					rank_2++;
				}
				else 
				{
					printf("平局，顺子等大..\n");
					equ_rank++;
				}
			}
			else
			{
				Ga_3 = General_3(a,6);
				Gb_3 = General_3(b,6);
				if( Ga_3 > Gb_3 ) 
				{
					printf("A赢,同点..\n");
					rank_3++;
				}
				else if( Ga_3 < Gb_3 )
				{
					printf("B赢,同点..\n");
					rank_3++;
				}
				else if( Ga_3 == Gb_3 && Ga_3 == 1 )
				{
					int mark_3_3 = 0;
					mark_3_3 = Max_General_3(a,6,b,6);
					if( mark_3_3 == 1 )
					{
						printf("A赢,同点点数大..\n");
						rank_3++;
					}
					else if( mark_3_3 == -1 )
					{
						printf("B赢,同点点数大..\n");
						rank_3++;
					}
					else
					{
						printf("平局，同点点数相同..\n");
						equ_rank++;
					}
				}
				else
				{
					Ga_4 = General_4(a,6);
					Gb_4 = General_4(b,6);
					if( Ga_4 > Gb_4 )
					{
						printf("A赢,对子..\n");
						rank_4++;
					}
					else if( Ga_4 < Gb_4 )
					{
						printf("B赢,对子..\n");
						rank_4++;
					}
					else if( Ga_4 == Gb_4 && Ga_4 == 1 )
					{
						int mark_4_4 = 0;
						mark_4_4 = Max_General_4(a,6,b,6);
						if( mark_4_4 == 1 )
						{
							printf("A赢,对子大..\n");
							rank_4++;
						}
						else if( mark_4_4 == -1 )
						{
							printf("B赢,对子大..\n");
							rank_4++;
						}
						else
						{
							printf("平局，对子点数相同单牌点数相同..\n");
							equ_rank++;
						}	
					}
					else
					{
						int mark_5_5 = 0;
						mark_5_5 = max(a,6,b,6);
						if( mark_5_5 == 1 )
						{
							printf("A赢,杂牌点数大..\n");
							rank_5++;
						}
						else if( mark_5_5 == -1 )
						{
							printf("B赢,杂牌点数大..\n");
							rank_5++;
						}
						else 
						{
							printf("平局，杂牌点数总数相同..\n");
							equ_rank++;
						}
					}
				}
			}
		}
		printf("\n");
	
/*	if( times != 0 )
	{
		printf("同花赢的概率为：%f \n",rank_1/(times*1.0));
		printf("顺子赢的概率为：%f \n",rank_2/(times*1.0));
		printf("同点赢的概率为：%f \n",rank_3/(times*1.0));
		printf("对子赢的概率为：%f \n",rank_4/(times*1.0));
		printf("散牌赢的概率为：%f \n",rank_5/(times*1.0));
		printf("平局赢的概率为：%f \n",equ_rank/(times*1.0));
		printf("\n");
	}*/
}

void Produce_puke(int a[],int b[])
{
		for( int j = 0 ; j < 6  ; j ++  )
		{
			if( j % 2 == 0 )
			       a[j] = rand() % 13 + 2;//generade the value
			else
				a[j] = rand() % 4 + 1;//generade the kind
			if( j == 3 )
			{
				while( a[j-1] == a[0] && a[j] == a[1] )
				{
					
				      	a[j-1] = rand() % 13 + 2;//generade the value
					a[j] = rand() % 4 + 1;//generade the kind
				}
			}
			if( j == 5 )
			{
				while( (a[j-1] == a[0] && a[j] == a[1]) || (a[j-1] == a[2] && a[j] == a[3]) )
				{

				      	a[j-1] = rand() % 13 + 2;//generade the value
					a[j] = rand() % 4 + 1;//generade the kind
				}
			}
		}
		for( int j = 0 ; j < 6 ; j ++ )
		{
			printf("%d\n",a[j]);
		}   
		printf("A的牌： ");
		Print_name(a,6);
		printf("\n");
		for( int j = 0 ; j < 6 ; j ++ )
		{
			if( j % 2 == 0)
				b[j] = rand() % 13 + 2;
			else
				b[j] = rand() % 4 + 1;
			if( j == 1 )
			{
				while( (b[j-1] == a[0] && b[j] == a[1]) || (b[j-1] == a[2] && b[j] == a[3]) || (b[j-1] == a[4] && b[j] == a[5]) )
				{
					b[j-1] = rand() % 13 + 2;
					b[j] = rand() % 4 + 1; 	
				}
			}
			if( j == 3 )
			{
				while( (b[j-1] == a[0] && b[j] == a[1]) || (b[j-1] == a[2] && b[j] == a[3]) || (b[j-1] == a[4] && b[j] == a[5]) || (b[j-1] == b[0] && b[j] == b[1]) )
				{
					b[j-1] = rand() % 13 + 2;
					b[j] = rand() % 4 + 1; 	
				}
			}	
			if( j == 5 )
			{
				while( (b[j-1] == a[0] && b[j] == a[1]) || (b[j-1] == a[2] && b[j] == a[3]) || (b[j-1] == a[4] && b[j] == a[5]) || (b[j-1] == b[0] && b[j] == b[1]) || (b[j-1] == b[2] && b[j] == b[3]) )
				{
					b[j-1] = rand() % 13 + 2;
					b[j] = rand() % 4 + 1; 	
				}
			}	
			
		}
		for( int j = 0 ; j < 6 ; j ++ )
		{
			printf("%d\n",b[j]);
		}   
		printf("B的牌： ");
		Print_name(b,6);
		printf("\n");
}

int main()
{
	srand((unsigned)time(NULL)); 
	int a[6],b[6];
	int times = 0; //the times that we want to test
	printf("××××××输入0可以进入测试模式，或者直接输入游戏次数直接开始游戏：");
//	printf("请输入测试的次数：");
	scanf("%d",&times);
	printf("\n");
	if( times > 0  )
	{
		for( int i = 0 ; i < times ; i ++ )
		{
			Produce_puke(a,b);
			Judge_bigger(a,b,times);
		}
	}
	else if( times == 0 )
	{
		printf("×××××××成功进入测试模式××××××\n");
		Text_mode(a,b);	
		Print_name(a,6);
		Print_name(b,6);
		printf("\n");
		Judge_bigger(a,b,0);
	}
	else 
	{
		printf("您的输入有误！/n");
	}
	if( times != 0 )
	{
		printf("同花赢的概率为：%f \n",rank_1/(times*1.0));
		printf("顺子赢的概率为：%f \n",rank_2/(times*1.0));
		printf("同点赢的概率为：%f \n",rank_3/(times*1.0));
		printf("对子赢的概率为：%f \n",rank_4/(times*1.0));
		printf("散牌赢的概率为：%f \n",rank_5/(times*1.0));
		printf("平局赢的概率为：%f \n",equ_rank/(times*1.0));
		printf("\n");
	}
	return 0;
}


