#include <bits/stdc++.h>

using namespace std;

int Coprime(int N){
    if(N == 0){
        return 0;
    }
    int counter = 0;
    for(int i = 1; i < N; i++){
        counter++;
        for(int j = 2; j <= i; j++){
            if(i % j == 0 && N % j == 0){
                counter--;
                break;
            }
        }
    }
    return counter;
}


int main()
{
    int N;

    cin >> N;

    cout << Coprime(N) << endl;

    return 0;
}
