#include <iostream>
#include <string>
using namespace std;

//template<typename TYPE>	//templated class
////template<class TYPE>
//class List
//{
//public:
//	TYPE key;
//	//TYPE key. 이렇게 하면 TYPE 자체가 variable
//	List<TYPE>* next; //pointer to next element of list
//	List<TYPE>* append(TYPE key)
//	{
//		List<TYPE>* freshElement = new List<TYPE>;
//		freshElement->key = key;
//		freshElement->next = NULL;
//		this->next = freshElement;
//		
//		return freshElement;
//	}
//};

//template<class TYPE1, typename TYPE2>
//class List
//{
//public:
//	TYPE1 key1; TYPE2 key2;
//	List<TYPE1, TYPE2>* append(TYPE1 key1, TYPE2 key2)
//	{
//		List<TYPE1, TYPE2>* freshElement = new List<TYPE1, TYPE2>;
//		freshElement->key1 = key1;
//		freshElement->key2 = key2;
//
//		return freshElement;
//	}
//};

//template <class TYPE>
//class ListOf {
//public:
//	TYPE data;
//	ListOf<TYPE>* next;
//
//	// constructor
//	ListOf<TYPE>(TYPE d) {
//		data = d;
//		next = NULL;
//	}
//
//	ListOf<TYPE>* append(TYPE i) {
//		ListOf<TYPE>* newItem = new ListOf<TYPE>(i);
//		next = newItem;
//		return newItem;
//	}
//
//	void printList() {
//		ListOf<TYPE>* ptr = this;
//		while (ptr != NULL) {
//			cout << ptr->data << endl;
//			ptr = ptr->next;
//		} // while
//	}
//};

//template<typename TYPE1, int CONST>
//class List
//{
//public:
//	List<TYPE1, CONST - 1> subList;
//	void print()
//	{
//		cout << CONST << endl;
//	}
//};
//template<typename TYPE1>
//class List<TYPE1, 4>	//10-1보다 작기만 하면 됨
//{
//
//};

//template<class T>
//T add(T x, T y)
//{
//	return x + y;
//}
////template specialization
//template<>
//char* add(char* s1, char* s2)
//{
//	strcat_s(s1, 40, s2);
//	return s1;
//}

////template<int C = 0>
//template<int C>	//integral parameter
//class A
//{
//public:
//	int getTemplateArg()
//	{
//		return C;
//	}
//};
//template<>
//class A<0>
//{
//public:
//	int getTemplateArg()
//	{
//		return 20;
//	}
//};

//template<int N>
//class FAC
//{
//public:
//	int value()
//	{
//		return N * facNminus1.value();
//	}
//	FAC<N - 1> facNminus1;
//};
//template<>
//class FAC<0>
//{
//public:
//	int value()
//	{
//		return 1;
//	}
//};

int main()
{
	/* Linked List in Google gogo*/
	/* only with TYPE1 */
	/*List<int> intList; List<double> doubleList;
	cout << intList.append(12)->key << endl;
	cout << intList.append(4)->key << endl;
	cout << intList.append(5)->key << endl;
	cout << intList.append(6)->key << endl;

	cout << intList.key << endl;
	cout << intList.next->key << endl;
	//cout << intList.next->next->key << endl;*/


	/* with TYPE1,2 */
	/*List<int, const char*> intList;
	cout << intList.append(12, "Norbert")->key1 << endl;
	cout << intList.append(12, "Norbert")->key2 << endl;*/


	/* nested template instance */
	/*ListOf<int>* anchor = new ListOf<int>(5);
	anchor->append(4)->append(9)->append(10);
	anchor->printList();

	ListOf<int>* anchor1 = new ListOf<int>(12);
	anchor1->append(6)->append(0)->append(19);
	anchor1->printList();

	ListOf<ListOf<int>*> ragged_array(anchor);
	ragged_array.append(anchor1);
	ragged_array.printList();

	cout << ragged_array.next->data->next->data;*/
	//https://github.com/jwvg0425/ProjectArthas/wiki/2%EC%A3%BC%EC%B0%A8-%EC%8A%A4%ED%84%B0%EB%94%94-C-----Template
	//중첩템플릿
	//http://tcpschool.com/cpp/cpp_template_class
	//클래스템플릿

	//https://blockdmask.tistory.com/45?category=249379
	//https://m.blog.naver.com/PostView.nhn?blogId=4roring&logNo=221145837492&proxyReferer=https%3A%2F%2Fwww.google.com%2F
	//템플릿 

	/* subList */
	/*List<int, 10> list;
	list.print();
	list.subList.print();*/


	/* example in function add */
	/*char s1[] = "Today";
	char s2[] = " is a nice day...";
	cout << add(s1, s2) << endl;	//add<>(s1, s2)

	int x = 5, y = 2;
	cout << add<int>(x, y) << endl;	//type inferrence*/


	/* class A */
	/*A<5> obj1;
	cout << obj1.getTemplateArg() << endl;
	A<0> obj2;	//디폴트가 있으면 A<> obj3;자동으로 A<0>
	cout << obj2.getTemplateArg() << endl;*/
	//class template 은 메인에서 사용시 <> 필요

	/* factorial */
	//FAC<5> obj;	//do computation during compile time
	//cout << obj.value() << endl;


	return 0;
}
