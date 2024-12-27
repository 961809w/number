#include <iostream>

using namespace std;

int calculateSum(int numbers[], int size) { //합계함수
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum;
}
double calculateAvg(int numbers[], int size) { //평균함수
    int sum = calculateSum(numbers, size);

    return sum / 5;
}

int main() {
    int numbers[5];

    cout << "숫자 5개를 입력해주세요. " << endl;

    // 5개의 숫자 입력 받기
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번째 숫자: ";
        cin >> numbers[i];
    }
    cout << endl;

    // 입력된 숫자 출력
    cout << "입력한 숫자들 : ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4) {
            cout << ",";
        }
    }
    cout << endl;

    int total = calculateSum(numbers, 5);
    cout << "합계 : " << total << endl;

    double average = calculateAvg(numbers, 5);
    cout << "평균 : " << average << endl;

    return 0;
}



