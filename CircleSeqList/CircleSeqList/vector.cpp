#define _CRT_SRCURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<iterator>
#include<list>
#include<deque>
using std::cout;
using std::cin;
using std::vector;
using namespace std;

// 插入排序适合数据少同时在数组基本有序情况下效率最高
//void InsertSort(int arr[],int length){
//	int j = 0;
//	for (size_t i = 1; i < length;i++){
//		if (arr[i] < arr[i-1]){
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp<arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void InsertSort(int arr[], int length){
//	for (size_t i = 1; i < length;i++){
//		if (arr[i] < arr[i-1]){
//			int tmp = arr[i];
//			int j = 0;
//			for (j = i-1; j >= 0 && tmp < arr[j];j--){
//				arr[j+1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}
void print(int* arr,int len){
	for (int i = 0; i < len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//void insert_sort(int arr[],int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp < arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j+1] = tmp;
//		}
//	}
//}

//void insert_sort(int* arr,int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp < arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void INSERT_SORT(int* arr,int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; (j >= 0) && (tmp < arr[j]); j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// 插入排序的实现
//void INSERT_SORT(int* arr, int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// //希尔排序
//void shellSort(int arr[], int length){
//	// 1、计算初步长
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2、按照步长来做插入排序
//	// 每次步长减1
//	while (step >= 1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length; i++){
//				if (arr[i] < arr[i - 1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step = step / 2;
//	}
//}

// 希尔排序真的难，，，只能硬记住先
//void shellSort(int arr[],int len){
//	int step = len / 2;
//	while (step >=1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					int j = 0;
//					int tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//
//		}
//		step /= 2;
//	}
//}
//
//void shellSort(int arr[], int len){
//	int step=len;
//	while (step>=1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					int tmp = arr[i];
//					int j = 0;
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}
//void shellSort(int arr[], int len){
//	int step = len/2;
//	int j = 0;
//	int tmp = 0;
//	while (step >= 1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp;j-=step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}
//void shellSort(int arr[], int length){
//	// 1、计算初步长
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2、按照步长来做插入排序
//	// 每次步长减1
//	while (step >= 1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length; i++){
//				if (arr[i] < arr[i - 1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step = step / 2;
//	}
//}
// 插入排序
//void insert_sort(int arr[],int length){
//	for (int i = 1; i < length; i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// 插入排序
void insert_sort(int arr[],int len){
	for (int i = 1; i < len;i++){
		if (arr[i] < arr[i-1] ){
			int j = 0;
			int tmp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}

void shellSort(int arr[], int length){
	int step = length / 2;
	while (step>=1){
		for (int k = step; k < length;k++){
			for (int i = 1; i < length;i++){
				if (arr[i] < arr[i-1]){
					int j = 0;
					int tmp = arr[i];
					for (j = i - step; j >= 0 && arr[j] >  tmp;j-=step){
						arr[j + step] = arr[j];
					}
					arr[j + step] = tmp;
				}
			}
		}
		step /= 2;
	}
}
int main(void){
	int arr[] = { 35, 2, 4, 75, 6, 45, 34, 23 };
	int len = sizeof(arr) / sizeof(arr[0]);
	print(arr, len);
	shellSort(arr, len);
	print(arr, len);
	// 插入排序，将无序序列插入到有序序列之中
	// 在基本有序情况下效率最高
	// 插入排序时数据的序列比较少的情况下效率比较高


	// 排序算法(有标准的算法函数)
	// shell排序(shell发明的，插入排序的优化，是一种比较快的算法，用得最多的排序)




	// 基数排序
	// 桶排序













	// list 双向动态链表
	// 数组链表区别
	// 链表插入删除效率高
	// 数组连续，链表连续
	// 数组访问查询效率高
	// 不同的数据结构适用于不同的场合及其业务逻辑

	//deque:双向的动态队列
	// 介于 链表和数组之间的容器
	// 查询低于数组高于链表，插入删除高于数组低于链表
	//deque<int> deque; // 双向


	//list<string> ls;
	system("pause");
	return 0;
}

int maiwn(void){
	// vector list deque map set
	// 容器 存储数据 有个内部类，称为迭代器iterator,迭代器用于定位，返回元素的地址，返回元素的首地址begin end(逾尾迭代器)
	// 容器发生改变，迭代器失效
	// 模板类，使用类模板制作一个容器对象
	vector<int> v;  // 动态数组
	// vector 动态数组  无序
	v.push_back(2); // 向数组末尾添加一个元素
	v.push_back(5); // 向数组末尾添加一个元素
	v.push_back(4); // 向数组末尾添加一个元素
	v.push_back(7); // 向数组末尾添加一个元素

	// 查找
	cout << v[0];
	cout << endl;
	cout << v.at(0);
	cout << endl;

	// 遍历
	for (size_t i = 0; i < v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// 删除最后一个
	v.pop_back();
	// 遍历
	for (size_t i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	// 删除其中的一个
	//v.erase();
    // 迭代器对象的返回值就是容器元素的地址
	vector<int>::iterator it;// 创建v容器的迭代器对象

	// 使用迭代器位置
	it = v.begin(); // 迭代器指向第一个位置
	v.insert(it, 2334); // 插入元素到某一个位置
	it += 2;
	v.erase(it);
	// 遍历
	for (size_t i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// 每一次从动态数组中删除元素，都要拷贝内存段，it需要重新初始化
	// it已经发生变化，如果容器发生改变，则迭代器失效，每次使用迭代器都要对迭代器进行初始化
	
	for (it = v.begin(); it != v.end(); it++){
		cout << *it <<" ";
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}
