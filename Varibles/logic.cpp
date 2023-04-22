#include<iostream>

int main() {
  // Toán tử quan hệ
  int a = 3 , b = 4;
  
  bool test1 = a > b; // False --> in ra màn hình số 0
  
  bool test2 = a < b; // True --> in ra màn hình số 1
  
  bool test3 = a >= b; // False --> in ra màn hình số 0
  
  bool test4 = a <= b; // True --> in ra màn hình số 1
  
  bool test5 = a != b; // True --> in ra màn hình số 1
  
  bool test6 = a == b; // False --> in ra màn hình số 0
   
  
  /* Toán tử logic 
    and : &&
    or : ||
    not : !
  */
  
  bool test7 = true || true // True
	bool test8 = true || false // True
	bool test9 = false || false // False
	bool test10 = false || true // True
    
	
  int c = 5 , d = 6 , f = 7;
	
	bool test11 = ( c < d ) && ( d > f ) // true && false --> false
	bool test12 = ( c < ) || ( d > f ) // true || false --> true  	

}   
