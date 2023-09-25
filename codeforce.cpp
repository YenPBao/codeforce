/*Alphen has an array of positive integers a
 of length n
Alphen can perform the following operation:
For all i
 from 1
 to n
, replace ai
 with max(0,ai−1)
Alphen will perform the above operation until a
 is sorted, that is a
 satisfies a1≤a2≤…≤an
. How many operations will Alphen perform? Under the constraints of the problem, it can be proven that Alphen will perform a finite number of operations.*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std ;
int main (){
    int size , testcase ;

    cout << "Enter the testcase ";
    std::cin >> testcase ;
int result=0 ;
    while (testcase --){
    cout << "Enter the size of Alphen : ";
    std::cin >> size ;
    int Alphen[size];
    cout << " Enter " << size << "element of array" << endl ;
    for (int i = 0 ; i < size ; i++ )
    {
        cout << " Enter the " << i<< "number " <<endl ;
        std::cin>> Alphen[i] ;
    }
    for(int j = 0 ; j < size -1 ; j++) {
        if (Alphen [j] >= Alphen [j+1]){
            result = max(Alphen[j], result) ;
        }
        return result ;
    }
    return result ;
    }
    cout << result ; 
    return 0 ;
}