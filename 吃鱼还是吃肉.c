#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int xb,h,w;
		scanf("%d%d%d",&xb,&h,&w);
		if(xb==0){
			if(h==129) printf("wan mei! ");
			else if(h>129) printf("ni li hai! ");
			else printf("duo chi yu! ");
			if(w==25) printf("wan mei!\n");
			else if(w>25) printf("shao chi rou!\n");
			else printf("duo chi rou!\n");
		}else{
			if(h==130) printf("wan mei! ");
			else if(h>130) printf("ni li hai! ");
			else printf("duo chi yu! ");
			if(w==27) printf("wan mei!\n");
			else if(w>27) printf("shao chi rou!\n");
			else printf("duo chi rou!\n");
		}
	}
	return 0;
}
/*
���Ҹ����� 8 ���б����ı�׼���Ϊ 130 ���ס���׼����Ϊ 27 ���8 ��Ů�����ı�׼���Ϊ 129 ���ס���׼����Ϊ 25 ���

������Ҫ����С������������أ���������Ӫ���Ľ��顣

�����ʽ��
�����ڵ�һ�и���һ�������� 10 �������� N����� N �У�ÿ�и���һλ�������������ݣ�

�Ա� ��� ����



�����Ա��� 1 ��ʾ������0 ��ʾŮ������ߺ����ض��ǲ����� 200 ����������

�����ʽ��
����ÿһλ��������һ���и�����Ľ��飺

���̫���ˣ������duo chi yu!������㣩��
���̫���ˣ������duo chi rou!������⣩��
�������׼�������wan mei!����������
���̫���ˣ������ni li hai!������������
���̫���ˣ������shao chi rou!���ٳ��⣩��
��������ߣ����������ء����仰֮��Ҫ�� 1 ���ո�

����������
4
0 130 23
1 129 27
1 130 30
0 128 27



���������
ni li hai! duo chi rou!
duo chi yu! wan mei!
wan mei! shao chi rou!
duo chi yu! shao chi rou!
*/
