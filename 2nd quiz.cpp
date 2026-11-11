#include <iostream>
using namespace std;
int sum(int a[]) {
    int sum= 0;
    for (int i = 0; i < 5; i++)
        sum+= a[i];
    return sum;
}
int multiply(int a[]) {
    int product= 1;
    for (int i = 0; i < 5; i++)
        product*= a[i];
    return product;
}
double average(int a[]) {
    return sum(a) / 5.0;
}
int minimum(int a[]) {
    int min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int maximum(int a[]) {
    int max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int range(int a[]) {
    return maximum(a)-minimum(a);
}
void display(int a[]) {
    cout << "\nSum = " << sum(a);
    cout << "\nMultiplication = " << multiply(a);
    cout << "\nAverage = " << average(a);
    cout << "\nMinimum = " << minimum(a);
    cout << "\nMaximum = " << maximum(a);
    cout << "\nRange = " << range(a);
}
int main() {
    int a[5];
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    display(a);
    return 0;
}
