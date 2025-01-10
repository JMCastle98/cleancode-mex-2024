#include <iostream>
#include <string>
#include <vector> // dynamic unordered container 
#include <functional>

using namespace std;

//Separation
// function , Object
//pure function - functional programming
//testable ,predicatble , no sideeffects ,ideal for multi threading , performant
int startsWithB(const string& str) { return toupper(str[0]) == 'B'; } 
int startsWithC(const string& str) { return toupper(str[0]) == 'C'; }
int startsWith(const string& str, char myChar) { return toupper(str[0]) == toupper(myChar); }
int isEven(int number){ return number % 2==0;}

            /* Parameterize Data*/  /* Parameterize function using function pointer*/
template<typename Type>
void queryAnyTypeArray(const vector<Type> source,function<int(Type)> predicate){
    
     for (Type item:source) { 
        if (predicate(item)) { 
            cout<<item<<endl; //operator overloading 
            } 
     }
         
}
 int main() {
     // Define an array of strings 
     const vector<string> names= {"Bosch", "Bangalore", "Mexico", "Canada" ,"India"}; 
     const vector<int> numbers={2,4,5,6,67,7,8};
//queryAnyTypeArray<string>(names,startsWithB);
     queryAnyTypeArray<int>(numbers,isEven);
     queryAnyTypeArray<string>(names, [](const string& stringParam) { return startsWith(stringParam, 'B'); });
            return 0; 
    } 
            