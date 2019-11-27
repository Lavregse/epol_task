#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[9], in_array[9][50], out_array[9][50];
    int i;
    cout << "Enter " << "i" << " element of string"<< endl;
    for(i = 0; i < 9; i++){
        cin >> str[i];
        if(str[i] == '1' || str[i] == '0');
        else cout << "Error input. Try again" << endl;
    }
    cout << "Enter array" << endl;
    for ( i = 0; i < 9; i++)
        cin >> in_array[i];
    cout << "Input array" << endl;
    for( i = 0; i < 9; i++) {
        if (str[i] == '1') {
            int j = 0;
            strcpy(out_array[j], in_array[i]);
            cout << out_array[j] << " ";
            j++;
        }
    }
    return 0;
}
