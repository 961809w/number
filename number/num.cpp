#include <iostream>

using namespace std;

int calculateSum(int numbers[], int size) { //�հ��Լ�
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum;
}
double calculateAvg(int numbers[], int size) { //����Լ�
    int sum = calculateSum(numbers, size);

    return sum / 5;
}

int main() {
    int numbers[5];

    cout << "���� 5���� �Է����ּ���. " << endl;

    // 5���� ���� �Է� �ޱ�
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "��° ����: ";
        cin >> numbers[i];
    }
    cout << endl;

    // �Էµ� ���� ���
    cout << "�Է��� ���ڵ� : ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4) {
            cout << ",";
        }
    }
    cout << endl;

    int total = calculateSum(numbers, 5);
    cout << "�հ� : " << total << endl;

    double average = calculateAvg(numbers, 5);
    cout << "��� : " << average << endl;

    return 0;
}



