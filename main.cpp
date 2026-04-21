#include <iostream>
#include "MovieManager.h"

using namespace std;

int main() {
    MovieManager manager;
    int choice;

    while (true) {
        cout << "\n=== Movie Recommender ===" << endl;
        cout << "[영화]" << endl;
        cout << "1. 영화 추가" << endl;
        cout << "2. 제목으로 검색" << endl;
        cout << "3. 전체 목록 출력" << endl;
        cout << "0. 종료" << endl;
        cout << "선택 > ";
        cin >> choice;

        if (choice == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        } else if (choice == 1) {
            cout << "영화 추가 기능 실행 예정" << endl;
        } else if (choice == 2) {
            cout << "검색 기능 실행 예정" << endl;
        } else if (choice == 3) {
            cout << "출력 기능 실행 예정" << endl;
        } else {
            cout << "잘못된 번호입니다." << endl;
        }
    }

    return 0;
}