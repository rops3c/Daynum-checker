#include <iostream>

int main(){
	//Writter Mohamed
	//Date 2020-6-13 | 3:19 AM
	int day;
	//Asking user to enter number of the day
	cout<<"Enter Day of the week: ";
	//Input DayNum
	std::cin>>day;
	switch(day){
		//Day starts with 0 = Monday
		case 0:
			std::cout<<"Its Monday";
			break;
		case 1:
			std::cout<<"Its Tuesday";
			break;
		case 2:
			std::cout<<"Its Wednesday";
			break;
		case 3:
			std::cout<<"Its Thursday";
			break;
		case 4:
			std::cout<<"Its Friday";
			break;
		case 5:
			std::cout<<"Its saturday";
			break;
		case 6:
			std::cout<<"Its sunday";	
			break;
		//Day 6 = Sunday
		default:
			std::cout<<"Out of week day X:D)";
}
	
	return 0;
}
