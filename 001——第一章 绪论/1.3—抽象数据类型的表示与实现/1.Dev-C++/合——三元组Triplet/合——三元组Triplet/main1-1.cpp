//main1-1.cpp 检验基本操作bo1-1.cpp的主函数
//#include "c1.h"要将程序中所有#include命令所包含的文件拷贝到当前目录下
//以下两行可根据需要选用一个（且只能选用一个），而无需改变基本操作bo1.4.cpp
//#include "c1-1.h"在此命令之前要定义ElemType的类型
#include "bo1-1.cpp"//在此命令之前要包括c1-1.h文件（因为其中定义了Triplet）
int main() {
	Triplet T;
	ElemType m;
	Status i;
	i = InitTriplet(T, 5, 7, 9);//初始化三元组T，其3个元素依次是5，7，9
	// 	i=InitTriplet(T,5.0,7.0,9.0);//当ElemType为双精度型是，可取带上句
	printf("调用初始化函数后，i=%d（1：成功）T的3个值为", i);
	cout << T[0] << ' ' << T[1] << ' ' << T[2] << endl;
	printf("\n");
	//为避免ElemType的类型变化的影响，用cout取代printf()。注意结尾要加endl
	i = Get(T, 2, m);//将三元组T的第2个值赋给m
	if (i == OK)//调用Get()成功
		cout << "T的第2个值为：" << m << endl;
	printf("\n");
	i = Put(T, 2, 6);//将三元组T的第2个值改为6
	if (i == OK)//调用Put()成功
		cout << "将T的第2个值改为6后，T的3个值为" << T[0] << ' ' << T[1] << ' ' << T[2] << endl;
	printf("\n");
	i = IsAscending(T);//此类函数实参与ElemType的类型无关，当ElemType的类型变化时候，实参无需改变
	printf("调用测试升序的函数后，i=%d（0：否 1：是）\n", i);
	printf("\n");
	printf("调用测试降序的函数后，i=%d（0：否 1：是）\n", i);
	printf("\n");

	if (i = Max(T, m) == OK)//先赋值再比较
		cout << "T中的最大值为" << m << endl;
	printf("\n");

	if (i = Min(T, m) == OK)//先赋值再比较
		cout << "T中的最小值为" << m << endl;
	printf("\n");
	DestroyTriplet(T);//函数也可以不带回返回值
	cout << "销毁后，T=" << T << "(NULL)" << endl;
	printf("\n");
	return 0;
}
