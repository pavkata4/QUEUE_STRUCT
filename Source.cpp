 #include<iostream>
 using namespace std;
 typedef struct Element* ptr;
 struct Element {
	 ptr Next;
	 int Data;
	
};
 int main() {
	 setlocale(LC_ALL, "BULGARIAN");
	 ptr start = NULL, end = NULL, p = NULL;
	 int x;
     cout << "Please eneter data: ";
	 cin >> x;
	 p = new Element;
	 p->Data = x;
	 p->Next = start;
      start = p;
	 end = p;
	 bool want;
	 cout << "Are you want to enter more data? Yes - 1, No - 0: ";
	 cin >> want;
	 while (want) {
		 cout << "Please enter data" << endl;
		 cin >> x;
		 p = new Element;
		 p->Data = x;
		 p->Next = end->Next;
		 end->Next = p;
		 end = p;
		cout << "Are you want to enter more data? Yes - 1, No - 0: ";
		 cin >> want;
		
	}
	 cout << "The queue: " << endl;
	 p = start;
	 while (p != NULL) {
		 cout << p->Data << " ";
		 p = p->Next;
		
	}
	return 0;
}