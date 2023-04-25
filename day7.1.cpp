#include<iostream>
#include<string.h>

using namespace std;

class Diamond{
	
	private:
		
		int comp_id ;
		char comp_name[50] ;
		int comp_staff_quantity ;
		int comp_revenue ;
		int comp_import_raw_diamonds ;
		int comp_export_diamonds ;
		char comp_ceo[50] ;
		
	public:
		
		Diamond(int n1 , char n2[] , int n3 , int n4 , int n5 , int n6 , char n7[]){
			
			comp_id = n1 ;
			strcpy(comp_name,n2) ;
			comp_staff_quantity = n3 ;
			comp_revenue = n4 ;
			comp_import_raw_diamonds = n5 ;
			comp_export_diamonds = n6 ;
			strcpy(comp_ceo,n7) ;
			
		}
		
		void get(){
			
			cout<<comp_id<<"\t"<<comp_name<<"\t"<<comp_staff_quantity<<"\t"<<comp_revenue<<"\t"<<comp_import_raw_diamonds<<"\t"<<comp_export_diamonds<<"\t"<<comp_ceo<<endl;
			
		}
		
		
};

int main (){
	
	int i , n ;
	
	cout<<"Enter number of Diamond companies towards enter it's data : " ;
	cin>>n ;
	cout<<endl;
	
	Diamond o[n];
	
	for(i=0 ; i<n ; i++){
		
		o[i].Diamond o() ;
		
	}
	
	for(i=0 ; i<n ; i++){
		
		obj.g();
		
	}
	
//	Diamond o(1,"dd",20,500000,10000,6000,"patel");
//	obj.g();
	
	return 0 ;
}
