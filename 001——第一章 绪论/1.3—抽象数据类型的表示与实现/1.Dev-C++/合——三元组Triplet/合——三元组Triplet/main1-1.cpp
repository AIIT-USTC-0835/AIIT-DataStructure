//main1-1.cpp �����������bo1-1.cpp��������
//#include "c1.h"Ҫ������������#include�������������ļ���������ǰĿ¼��
//�������пɸ�����Ҫѡ��һ������ֻ��ѡ��һ������������ı��������bo1.4.cpp
//#include "c1-1.h"�ڴ�����֮ǰҪ����ElemType������
#include "bo1-1.cpp"//�ڴ�����֮ǰҪ����c1-1.h�ļ�����Ϊ���ж�����Triplet��
int main() {
	Triplet T;
	ElemType m;
	Status i;
	i = InitTriplet(T, 5, 7, 9);//��ʼ����Ԫ��T����3��Ԫ��������5��7��9
	// 	i=InitTriplet(T,5.0,7.0,9.0);//��ElemTypeΪ˫�������ǣ���ȡ���Ͼ�
	printf("���ó�ʼ��������i=%d��1���ɹ���T��3��ֵΪ", i);
	cout << T[0] << ' ' << T[1] << ' ' << T[2] << endl;
	printf("\n");
	//Ϊ����ElemType�����ͱ仯��Ӱ�죬��coutȡ��printf()��ע���βҪ��endl
	i = Get(T, 2, m);//����Ԫ��T�ĵ�2��ֵ����m
	if (i == OK)//����Get()�ɹ�
		cout << "T�ĵ�2��ֵΪ��" << m << endl;
	printf("\n");
	i = Put(T, 2, 6);//����Ԫ��T�ĵ�2��ֵ��Ϊ6
	if (i == OK)//����Put()�ɹ�
		cout << "��T�ĵ�2��ֵ��Ϊ6��T��3��ֵΪ" << T[0] << ' ' << T[1] << ' ' << T[2] << endl;
	printf("\n");
	i = IsAscending(T);//���ຯ��ʵ����ElemType�������޹أ���ElemType�����ͱ仯ʱ��ʵ������ı�
	printf("���ò�������ĺ�����i=%d��0���� 1���ǣ�\n", i);
	printf("\n");
	printf("���ò��Խ���ĺ�����i=%d��0���� 1���ǣ�\n", i);
	printf("\n");

	if (i = Max(T, m) == OK)//�ȸ�ֵ�ٱȽ�
		cout << "T�е����ֵΪ" << m << endl;
	printf("\n");

	if (i = Min(T, m) == OK)//�ȸ�ֵ�ٱȽ�
		cout << "T�е���СֵΪ" << m << endl;
	printf("\n");
	DestroyTriplet(T);//����Ҳ���Բ����ط���ֵ
	cout << "���ٺ�T=" << T << "(NULL)" << endl;
	printf("\n");
	return 0;
}
