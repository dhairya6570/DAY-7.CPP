#include<iostream>

using namespace std;

class cafe{
	
	private:
		
		int cafe_id ;
		char cafe_name[50] ;
		char cafe_type[50] ;
		char cafe_rating[50] ;
		char cafe_location[50] ;
		int cafe_establish_year ;
		int cafe_staff_quantity ;
	
	public:
		
		cafe(){
			
				
			cout<<"Enter ID : ";
			cin>>cafe_id ;
			
			cout<<"Enter Cafe Name : ";
			cin>>cafe_name ;
			
			cout<<"Enter Cafe Type (like rooftop or normal) : ";
			cin>>cafe_type ;
			
			cout<<"Enter Cafe Rating (like 1 Star, 2 Start, ..., 7 Star) : ";
			cin>>cafe_rating ;
			
			cout<<"Enter Location (city name) : ";
			cin>>cafe_location ;
			
			cout<<"Enter Cafe Establish Year : ";
			cin>>cafe_establish_year ;
			
			cout<<"Enter Cafe staff quantity : ";
			cin>>cafe_staff_quantity ;
		
		}
			
		void get(){
			
			cout<<cafe_id<<endl ;
			cout<<cafe_name<<endl ;
			cout<<cafe_type<<endl ;
			cout<<cafe_rating<<endl ;
			cout<<cafe_location<<endl ;
			cout<<cafe_establish_year<<endl ;
			cout<<cafe_staff_quantity<<endl ;
						
		}
			
				
};

int main (){
	
	int i , n ;
	
	cout<<"Enter number of cafe towards enter it's data : " ;
	cin>>n ;
	cout<<endl ;
	
	
	cafe obj[n] ;
	
	for(i=0 ; i<n ; i++){
		
		obj[i];
		obj[i].get() ;
		
	}

	
	return 0 ;
}
