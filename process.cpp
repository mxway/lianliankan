#include "process.h"
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<queue>
#define NUM 50
#define M 12
#define N 12
using namespace std;
int data_grid[M][N];
struct Node
{
	int x,y,step,flag;
};
//��ʼ������
void init()
{
	memset(data_grid,0,sizeof(data_grid));
	init_GridData();
}

/**
* ����������к�ͼƬ��־
*/
void init_GridData()
{
	int cnt = 0,data;
	srand(time(NULL));
	while(cnt < 50)
	{
		data = -1;
		setGridData(data);
		//����һ��ͼƬ��־
		setGridData(data);
		cnt++;
	}
}

/**
* ����lower��upper֮��������
* ��Χ[lower,upper]
*/
int generateRandNum(int lower,int upper)
{
	int range = upper-lower+1,result;
	result = rand()%range+lower;
	return result;
}

/**
* ��������кţ��к�
* ���dataΪ-1������һ����־
*/
void setGridData(int &data)
{
	int row,col;
	row = generateRandNum(1,10);
	col = generateRandNum(1,10);
	if(data == -1)
	{
		data = generateRandNum(1,19);
	}
	while(data_grid[row][col])
	{
		col++;
		if(col > 10)
		{
			col = 1;
			row++;
		}
		if(row > 10)
		{
			row = 1;
		}
	}
	data_grid[row][col] = data;
}

/** ���ڵ�(x,y)�Ƿ�Ϸ�,�Լ��Ƿ��ͨ�� **/
bool check(int x,int y)
{
	if(x>=0 && y>=0 && x<M && y<N)return 1;
	return 0;
}

/** �жϽڵ�(sx,sy)���ڵ�(ex,ey)�Ƿ������ **/
/** ת��������������� */
int bfsSearch(int sx,int sy,int ex,int ey)
{
	int visited[12][12],i,j;//�ڸýڵ�ʱ��ת�����
	//��������
	int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
	for(i=0; i<12; i++)
	{
		for(j=0; j<12; j++)
		{
			visited[i][j] = 99999;
		}
	}
	Node t1,t2;
	queue<Node> Q;
	//��ʼ�ڵ�Ϊ(sx,sy)
	t1.x = sx;
	t1.y = sy;
	t1.flag=-1;
	t1.step = 0;
	Q.push(t1);//���
	int dx,dy;

	while(!Q.empty())
	{
		t1 = Q.front();
		Q.pop();
		if(t1.x == ex && t1.y == ey && t1.step <=3)
		{
			return 1; //������ͨ
		}
		for(i=0; i<4; i++)
		{
			dx = t1.x+dir[i][0];
			dy = t1.y+dir[i][1];
			if(check(dx,dy) && t1.step<=3 )
			{
				if( (data_grid[dx][dy]==0) || (dx==ex && dy==ey))
				{
					t2.flag = i;
					t2.x = dx;
					t2.y = dy;
					//�жϷ����Ƿ���ǰһ���ڵ�ķ���һ�¡�
					if(t2.flag == t1.flag)
					{
						t2.step = t1.step;//һ�£�����û�иı�
					}
					else
					{
						t2.step = t1.step + 1; //�������ı䣬��������1
					}
					if(visited[t2.x][t2.y]>=t2.step && t2.step<=3)
					{
						visited[t2.x][t2.y] = t2.step;
						Q.push(t2);
					}
				}
			}
		}
	}
	return 0;
}

/**
* �Ƿ���ڿ������Ŀ�
*
*/
int ExistsPattern(int &sx, int &sy, int &ex,int &ey)
{
	int i,j;
	for(i=1; i<11; i++)
	{
		for(j=1; j<11; j++)
		{
			if(getConnectNode(i,j,ex,ey))
			{
				sx = i;
				sy = j;
				return 1;
			}
		}
	}
	sx = -1;
	sy = -1;
	return 0;//û�п������Ŀ��ˡ�
}

/**
* �Ƿ������ڵ�(sx,sy)��ͬ�������Ľڵ㡣
*
*/
int getConnectNode(int sx,int sy,int &ex,int &ey)
{
	int i,j;
	for(i=sx; i<11; i++)
	{
		for(j=sy+1; j<11; j++)
		{
			if(data_grid[sx][sy] == data_grid[i][j])
			{
				if(bfsSearch(sx,sy,i,j))
				{
					ex = i;
					ey = j;
					return 1;
				}
			}
		}
	}
	ex = -1;
	ey = -1;
	return 0;
}

//
int reArrange()
{
	return 0;
}