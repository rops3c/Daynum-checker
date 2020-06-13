#include "iostream"
using namespace std;
int main(){
	//Writter Mohamed
	//Date 2020-6-13 | 3:19 AM
	int day;
	//Asking user to enter number of the day
	cout<<"Enter Day of the week: ";
	//Input DayNum
	cin>>day;
	switch(day){
		//Day starts with 0 = Monday
		case 0:
			cout<<"Its Monday";
			break;
		case 1:
			cout<<"Its Tuesday";
			break;
		case 2:
			cout<<"Its Wednesday";
			break;
		case 3:
			cout<<"Its Thursday";
			break;
		case 4:
			cout<<"Its Friday";
			break;
		case 5:
			cout<<"Its saturday";
			break;
		case 6:
			cout<<"Its sunday";	
			break;
		//Day 6 = Sunday
		default:
			cout<<"Out of week day X:D)";
}
	
	return 0;
}
