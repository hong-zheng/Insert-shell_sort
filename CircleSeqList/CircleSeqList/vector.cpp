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

// ���������ʺ�������ͬʱ������������������Ч�����
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

// ���������ʵ��
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

// //ϣ������
//void shellSort(int arr[], int length){
//	// 1�����������
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2�����ղ���������������
//	// ÿ�β�����1
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

// ϣ����������ѣ�����ֻ��Ӳ��ס��
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
//	// 1�����������
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2�����ղ���������������
//	// ÿ�β�����1
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
// ��������
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

// ��������
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
	// �������򣬽��������в��뵽��������֮��
	// �ڻ������������Ч�����
	// ��������ʱ���ݵ����бȽ��ٵ������Ч�ʱȽϸ�


	// �����㷨(�б�׼���㷨����)
	// shell����(shell�����ģ�����������Ż�����һ�ֱȽϿ���㷨���õ���������)




	// ��������
	// Ͱ����













	// list ˫��̬����
	// ������������
	// �������ɾ��Ч�ʸ�
	// ������������������
	// ������ʲ�ѯЧ�ʸ�
	// ��ͬ�����ݽṹ�����ڲ�ͬ�ĳ��ϼ���ҵ���߼�

	//deque:˫��Ķ�̬����
	// ���� ���������֮�������
	// ��ѯ�������������������ɾ�����������������
	//deque<int> deque; // ˫��


	//list<string> ls;
	system("pause");
	return 0;
}

int maiwn(void){
	// vector list deque map set
	// ���� �洢���� �и��ڲ��࣬��Ϊ������iterator,���������ڶ�λ������Ԫ�صĵ�ַ������Ԫ�ص��׵�ַbegin end(��β������)
	// ���������ı䣬������ʧЧ
	// ģ���࣬ʹ����ģ������һ����������
	vector<int> v;  // ��̬����
	// vector ��̬����  ����
	v.push_back(2); // ������ĩβ���һ��Ԫ��
	v.push_back(5); // ������ĩβ���һ��Ԫ��
	v.push_back(4); // ������ĩβ���һ��Ԫ��
	v.push_back(7); // ������ĩβ���һ��Ԫ��

	// ����
	cout << v[0];
	cout << endl;
	cout << v.at(0);
	cout << endl;

	// ����
	for (size_t i = 0; i < v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// ɾ�����һ��
	v.pop_back();
	// ����
	for (size_t i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	// ɾ�����е�һ��
	//v.erase();
    // ����������ķ���ֵ��������Ԫ�صĵ�ַ
	vector<int>::iterator it;// ����v�����ĵ���������

	// ʹ�õ�����λ��
	it = v.begin(); // ������ָ���һ��λ��
	v.insert(it, 2334); // ����Ԫ�ص�ĳһ��λ��
	it += 2;
	v.erase(it);
	// ����
	for (size_t i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	// ÿһ�δӶ�̬������ɾ��Ԫ�أ���Ҫ�����ڴ�Σ�it��Ҫ���³�ʼ��
	// it�Ѿ������仯��������������ı䣬�������ʧЧ��ÿ��ʹ�õ�������Ҫ�Ե��������г�ʼ��
	
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
