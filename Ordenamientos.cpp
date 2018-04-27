#include <iostream>

using namespace std;

void swap(int *x,int *y){
    int aux=*x;
    *x=*y;
    *y=aux;
}
void printArray(int arr[],int length){

    cout<<" [";
    for(int *i=arr;i<&arr[length];i++){
           if(*i==arr[length-1]){
            cout<<*i<<endl;
           }
           else
            cout<<*i<<",";
    }
    cout<<"] "<<endl;
}

void sort_cocktail(int arr[],int length){
    bool isSwapped=true;
    while(isSwapped){
        isSwapped=false;
        for(int *i=arr;i<&arr[length];++i){
            if(*i>*(i+1)){
                swap(i,i+1);
                isSwapped=true;
            }
        }
        if(!isSwapped){break;}
        isSwapped=false;
        for(int *i=&arr[length]-1;i>=arr;--i){
            if(*i>*(i+1)){
                swap(i,i+1);
                isSwapped=true;
            }
        }
    }
}

int main(){

    int arr[6]={24,32,1,2,45,3};

    sort_cocktail(arr,6);
    printArray(arr,6);

    return 0;
}