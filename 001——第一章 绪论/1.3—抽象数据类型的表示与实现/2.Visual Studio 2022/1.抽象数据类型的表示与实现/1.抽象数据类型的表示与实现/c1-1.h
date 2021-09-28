#pragma once
//三元组抽象数据类型Triplet 
//c1-1.h 采用动态分配的顺序存储结构
typedef int ElemType;//定义抽象数据类型ElemType,在本程序中为整型
//typedef double ElemType;定义抽象数据类型ElemType,在本程序中为双精度型
typedef ElemType* Triplet;//由InitTriplet分配3个元素的存储空间
//Triplet类型是ElemType类型的指针，存放ElemType类型的地址 