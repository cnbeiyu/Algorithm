//�������Σ���������A_final��B_final,C_final ,֮ǰ�ǵ�ĩβû����һ�е���0���� ,���ɾ��0����Excel���� 
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *fp_A=fopen("C:\\Users\\kk\\Desktop\\C.txt","r");
	int **a;//�����ά����
	int i_A,j_A;
	int row_A=36,column_A=7;//�У���(�ǵøģ����� 
	char ch_A;
	//�����ڴ�
	a=(int**)malloc(sizeof(int*)*row_A);
	for(i_A=0;i_A<row_A;i_A++)
	{
		a[i_A]=(int*)malloc(sizeof(int)*column_A);
	}
	//��������
	while(!feof(fp_A))
		for(i_A=0;i_A<row_A;i_A++)
			for(j_A=0;j_A<column_A;j_A++)
				fscanf(fp_A,"%d,",&a[i_A][j_A]);
	//�����ʾ
	int A_final[row_A*column_A];
	FILE *fp_A_final=fopen("C:\\Users\\kk\\Desktop\\C_final.txt","w");
	int l = 0,m,n;
	for(i_A=0;i_A<row_A;i_A++)
	{
		for(j_A=0;j_A<column_A;j_A++)
		{
			A_final[l] = a[i_A][j_A];
			fprintf(fp_A_final,"%d\n",A_final[l++]);
		}
	}
	free(a);
	return 0;
}
