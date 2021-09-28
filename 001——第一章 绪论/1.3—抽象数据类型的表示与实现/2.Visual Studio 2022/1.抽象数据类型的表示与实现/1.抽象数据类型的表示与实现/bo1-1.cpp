//bo1-1.cpp������������Triplet��ElemType����c1-1.h���壩�Ļ���������8����

#include "c1.h"
#include "c1-1.h"

inline Status InitTriplet(Triplet& T, ElemType v1, ElemType v2, ElemType v3) {
	//���������������Ԫ��T��������T��3��Ԫ�صĳ�ֵΪv1,v2,��v3
	if (!(T = (ElemType*)malloc(3 * sizeof(ElemType))))
		exit(OVERFLOW);
	T[0] = v1, T[1] = v2, T[2] = v3;
	return OK;
}

inline Status DestroyTriplet(Triplet& T) {
	free(T);
	T = NULL;
	return OK;
}

inline Status Get(Triplet T, int i, ElemType& e) {
	//��ʼ��������Ԫ��T�Ѵ��ڣ�1<=i<=3�������������e����T�ĵ�iԪ��ֵ
	if (i < 1 || i>3)
		return ERROR;
	e = T[i - 1];
	return OK;
}

inline Status Put(Triplet T, int i, ElemType e) {
	//��ʼ��������Ԫ��T�Ѵ��ڣ�1<=i<=3����������� �ı�T�ĵ�iԪ��ֵΪe
	if (i < 1 || i>3)
		return ERROR;
	T[i - 1] = e;
	return OK;
}

inline Status IsAscending(Triplet T) {
	//��ʼ��������Ԫ��T�Ѵ��ڡ�������������T��3��Ԫ�ذ��������У��򷵻�1�����򷵻�0
	return (T[0] <= T[1] <= T[2]);
}

inline Status IsDescending(Triplet T) {
	//��ʼ��������Ԫ��T�Ѵ��ڡ�������������T��3��Ԫ�ذ��������У��򷵻�1�����򷵻�0
	return (T[0] >= T[1] >= T[2]);
}

inline Status Max(Triplet T, ElemType& e) {
	//��ʼ��������Ԫ��T�Ѵ��ڡ������������e����T�����Ԫ�ص�ֵ
	e = T[0] >= T[1] ? (T[0] > T[2] ? T[0] : T[2]) : (T[1] >= T[2] ? T[1] : T[2]);
	return OK;
}

inline Status Min(Triplet T, ElemType& e) {
	//��ʼ��������Ԫ��T�Ѵ��ڡ������������e����T�����Ԫ�ص�ֵ
	e = T[0] <= T[1] ? (T[0] <= T[2] ? T[0] : T[2]) : (T[1] <= T[2] ? T[1] : T[2]);
	return OK;
}