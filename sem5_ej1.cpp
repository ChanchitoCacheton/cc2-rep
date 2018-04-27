#include <iostream>

using namespace std;


void sort_Cocktail(int a[], int n){

    bool estaCambiado = true;
    int inicio = 0;
    int fin = n - 1;
 
    while (estaCambiado) {
        // reset the swapped flag on entering
        // the loop, because it might be true from
        // a previous iteration.
        estaCambiado = false;
 
        // loop from left to right same as
        // the bubble sort
        for (int i = inicio; i < fin; ++i) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                estaCambiado = true;
            }
        }
 
        // if nothing moved, then array is sorted.
        if (!estaCambiado)
            break;
 
        // otherwise, reset the swapped flag so that it
        // can be used in the next stage
        estaCambiado = false;
 
        // move the end point back by one, because
        // item at the end is in its rightful spot
        --fin;
 
        // from right to left, doing the
        // same comparison as in the previous stage
        for (int i = fin - 1; i >= inicio; --i) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                estaCambiado = true;
            }
        }
 
        // increase the starting point, because
        // the last stage would have moved the next
        // smallest number to its rightful spot.
        ++inicio;
    }
}


void Print_arr(int *e,int *arr){

    cout<<"[ ";
    for(int i=0;i<sizeof(arr);arr++){
        cout<< *arr;
    }
    cout<<"]";
}



int main(){



    return 0;
}