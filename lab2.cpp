#include <iostream>
using namespace std;
int main (){
   int arr[4]={1,2,3,1};
   bool polindrom = true;
   for(int i=0;i<4/2;i++){
    if (arr[i]!=arr[4-1-i]){
        polindrom = false;
        break;
    }
   }
   if(!polindrom){
    cout<<"arr not palindrom";

   } else{cout<<"arrpolindrom";}
   
   
    return 0;
}
