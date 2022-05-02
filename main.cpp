#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim;
    cin >> dim;
    float num[dim];
    for(int i=0; i<dim; i++){
        cin >> num[i];
    }
    cout << max(num, dim);
    return 0;
}
