
#include<iostream>
using namespace std;

int main () {
cout << "\n ----- example 4 : 2D graph ----"<<endl;
//9-by-9 graph
const int GRIDSIZE =9;
for (int row =1; row<= GRIDSIZE; row++){
for (int col =1; col <=GRIDSIZE; col++){
if (col==5 || row==5){
    cout << "x";
}else 
cout<<" . ";


}

}
cout<<endl;


cout << "\n ----- example 5: 2D graph ---"<<endl;
//10- by - 10 graph plot letter H
const int GRID =10;
for (int row =1; row <=GRID ; row++) {
    for (int col =1; col <=GRID; col++){
/* if (col>=3 && col<=4 && row>=2 && row <=8)
    cout << "%";
    else 
    cout<< ",";*/
   cout<<" . ";
}
cout<<endl;


}




return 0;
}