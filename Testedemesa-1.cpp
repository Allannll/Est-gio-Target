#include <iostream>
using namespace std;

int main() {
int n;
cout << "Informe um número da sequência Fibonacci: ";
cin >> n;

int ult = 1;
int penult = 0;
bool pertence = false;

if (n == 0 || n == 1) {
pertence = true;
} else {
     
while (ult + penult <= n) {
int proximo = ult + penult;
if (proximo == n) {
pertence = true;
break;
}
penult = ult;
ult = proximo;
}
}

if (pertence) {
cout << "O número " << n << " pertence à sequência de Fibonacci." << endl;
} else {
cout << "O número " << n << " não pertence à sequência de Fibonacci." << endl;
}
    return 0;
}