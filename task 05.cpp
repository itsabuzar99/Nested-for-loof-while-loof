#include <iostream>
using namespace std;
int main(){
	cout<<"seating arrangement in a theater :"<<endl;
	int rows=5;
    int seatsinrow=10;

    for (int row = 1; row <=rows; row++) {
        cout<<"row "<<row<<":"<<endl;
        for (int seat = 1; seat <= seatsinrow; seat++) {
            cout<<":seat"<<seat;
    }cout<<endl;
    }

    return 0;}
