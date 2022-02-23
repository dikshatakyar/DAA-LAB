#include<iostream>
#include<fstream>
using namespace std;
template<class t>
class selectsort{
		public:
		t arr[1000];
		int n,count;
		
		void input(){
		count=0;
		cout<<"Enter the size of array : \n";
		cin>>n;
		cout<<"Elements before sorting: \n";
		for(int i=0;i<n;++i){
		arr[i]=(rand()%1000+1);
		cout<<arr[i]<<" ";
		}
		}
		void display(){
		cout<<"\n Elements are : \n";
		for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
		}
		}
		void sorting(){
		  for(int i=0;i<n-1;i++) {
		        for(int j=i+1;j<n;j++) {
		            if(arr[j]<arr[i]) {
		           int temp=arr[j];
		            arr[j]=arr[i];
		            arr[i]=temp;
		            }
						++count;
		        }
		    }
		}
};

int main(){
		ofstream f("selectionSort.csv");
		char ch;
		
		do{
		
		selectsort<int> s1;
		s1.input();
		s1.sorting();
		s1.display();
		if(f){
		f<<s1.n<<","<<s1.count;
		f<<endl;
		}
		cout<<"\n no. of comparisions  are "<<s1.count<<endl;
		cout<<"Continue?\n";
		cin>>ch;
		}while(ch=='y' || ch=='Y');

		return 0;
		
}

