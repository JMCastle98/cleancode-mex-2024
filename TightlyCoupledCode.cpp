// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class NexDigitronTPMS{
  public:
NexDigitronTPMS(){
            cout<<"NexDigitron TPMS Constructed "<<endl;
    }
    ~NexDigitronTPMS(){
            cout<<"NexDigitron TPMS Destructed "<<endl;
    }
};
class BoschTPMS{
    public:
BoschTPMS(){
            cout<<"Bosch TPMS Constructed "<<endl;
    }
    ~BoschTPMS(){
            cout<<"Bosch TPMS Destructed "<<endl;
    }
};
class Engine{
public:
    Engine(){
            cout<<"Engine Constructed "<<endl;
    }
    ~Engine(){
            cout<<"Engine Destructed "<<endl;
    }
};
class Car{
        //Contains,composition , death relationship
        Engine engineObj;
        //Dependency
        BoschTPMS* BoschtpmsObjPtr;
        NexDigitronTPMS* NexttpmsObjPtr;
        
        public:
        //Constructor Dependency injection
         Car(BoschTPMS* tpms): BoschtpmsObjPtr{tpms}, NexttpmsObjPtr{nullptr}{
            cout<<"Car Constructed "<<endl;
        }
        Car(NexDigitronTPMS* tpms): NexttpmsObjPtr{tpms}, BoschtpmsObjPtr{nullptr}{
            cout<<"Car Constructed "<<endl;
        }
        ~Car(){
            cout<<"Car Destructed "<<endl;
        }
        // method dependency injection
        void installTPMS(BoschTPMS* tpmsPtr){
          this->BoschtpmsObjPtr = tpmsPtr;
          this->NexttpmsObjPtr = nullptr;
        }
        
        void installTPMS(NexDigitronTPMS* tpmsPtr){
          this->NexttpmsObjPtr = tpmsPtr;
          this->BoschtpmsObjPtr = nullptr;
        }
};
void buildCarWithBoschTpms(BoschTPMS* ptr){
        Car car{ptr};//Dependendency Injection By Hand
}

void buildCarWithNextDigitromTpms(NexDigitronTPMS* ptr){
        Car car{ptr};//Dependendency Injection By Hand
}

int main() {
    // Write C++ code here
    BoschTPMS tpms;
    buildCarWithBoschTpms(&tpms);

    NexDigitronTPMS ndTpms;
    buildCarWithNextDigitromTpms(&ndTpms);

    cout<<"Car Completely Destructed"<<endl;
    return 0;
}