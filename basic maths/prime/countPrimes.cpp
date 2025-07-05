// Given an integer n, return the number of prime numbers that are strictly less than n.
// #include<iostream>
// using namespace std;
// int countPrimes(int n) {
//     int NOfPrimes=0;
//     if(n<=1){
//         return NOfPrimes;
//     }
//     for(int i=2; i<n;i++){
//         for (int j = 2; j < i; j++)
//         {
//             if(i%j==0){
//                 break;
//             }
//         }
//         NOfPrimes++;
        
//     }
//     return NOfPrimes;
// }
// this program is almost true but you have to note that using break statemnet in the inner loop will not become any obstruction in front of 
// NOfPrimes++; this statement . therefore , it will be incremented in every iterator

// int main(){
//     int n=10;
//     int NOfPrimes=countPrimes(n);
//     cout<<NOfPrimes;
//     return 0;
// }

#include<iostream>
using namespace std;

int countPrimes(int n) {
    int NOfPrimes = 0;

    if (n <= 1) {
        return NOfPrimes;
    }

    for (int i = 2; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j<i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            NOfPrimes++;
        }
    }

    return NOfPrimes;
}

int main() {
    int n = 4837656;
    int NOfPrimes = countPrimes(n);
    cout << NOfPrimes;

    return 0;
}
