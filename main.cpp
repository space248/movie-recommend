#include <iostream>
#include <string>
#include "MovieManager.h"
#include "UserManager.h"

int main() {
    MovieManager movieMgr;
    UserManager userMgr;
    int choice;

    while (true) {
        std::cout << "\n=== Movie Recommender ===\n";
        std::cout << "[영화]\n1. 영화 추가\n2. 제목으로 검색\n3. 전체 목록 출력\n4. 평점순 정렬 출력\n";
        std::cout << "[사용자]\n5. 사용자 추가\n6. 사용자 목록 출력\n";
        std::cout << "[평점]\n7. 평점 입력\n8. 영화별 평점 보기\n0. 종료\n";
        std::cout << "선택 > ";
        
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        if (choice == 0) break;

        if (choice == 1) {
            std::string title;
            int year; 
            double rating;
            std::cout << "제목: "; std::cin >> title;
            std::cout << "연도: "; std::cin >> year;
            std::cout << "평점: "; std::cin >> rating;
            movieMgr.addMovie(Movie(title, year, rating));
            std::cout << "영화 추가 완료.\n";
        } 
        else if (choice == 2) {
            std::string title;
            std::cout << "검색할 제목: "; std::cin >> title;
            Movie* m = movieMgr.findByTitle(title);
            if (m) std::cout << "검색 결과: " << *m << "\n";
            else std::cout << "없는 영화입니다.\n";
        } 
        else if (choice == 3) {
            movieMgr.printAll();
        } 
        else if (choice == 4) {
            movieMgr.sortByRating();
            movieMgr.printAll();
        }
        else if (choice == 5) {
            std::string name;
            std::cout << "사용자 이름: "; std::cin >> name;
            userMgr.addUser(User(name));
            std::cout << "사용자 추가 완료.\n";
        }
        else if (choice == 6) {
            userMgr.printAll();
        }
        else if (choice == 7) {
            std::cout << "M3 마일스톤에서 구현될 예정입니다.\n";
        }
        else if (choice == 8) {
            std::cout << "M3 마일스톤에서 구현될 예정입니다.\n";
        }
    }
    return 0;
}