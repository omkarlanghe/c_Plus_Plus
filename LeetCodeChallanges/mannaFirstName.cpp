#include <iostream>
using namespace std;

int main()
{
    int t;
    char str[151];
    cin>>t;
    while(t--) {
        int suvo = 0, suvojit = 0;
        cin>>str;
        for(int i = 0 ; str[i] != '\0' ; i++){
            if(str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V' && str[i+3] == 'O') {
                if (str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V' && str[i+3] == 'O' && str[i+4] == 'J' && str[i+5] == 'I' && str[i+6] == 'T') {
                    suvojit++;
                } else {
                    suvo++;
                }
            } 
        }
        cout << "SUVO" << " = " << suvo << ", SUVOJIT = " << suvojit << endl;
    }
    return 0;
}
