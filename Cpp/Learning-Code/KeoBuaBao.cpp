#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void Gach();
void GiaoDien(void);
void KeoBuaBao();
std::string choice(int choice);
std::string SoSanh(int playerChoice,int comChoice);

int main() {
    KeoBuaBao();
    return 0;
}

void Gach(int n) {
    std::cout << "+";
    for (int i = 0 ; i <= n ; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}

void GiaoDien(void) {
    cout << "Keo Bua Bao??." << std::endl;
    std::cout << "1. Keo" << std::endl;
    std::cout << "2. Bua" << std::endl;
    std::cout << "3. Bao" << std::endl;
}

void KeoBuaBao() {
    srand(time(NULL));
    int player, com, max = 3, min = 1;
    com = rand() % (max - min + 1) + min;
    // TODO: code o day:
    GiaoDien();

    int chon;
    do {
        std::cout << "Moi ban Nhap:";
        std::cin >> player;

        Gach(30);
        std::cout << "|* Ban da ra " + choice(player) << "                |"  << std::endl;
        com = rand() % (max - min + 1) + min;
        std::cout << "|* May da ra " + choice(com) << "                |"  << std::endl;
        Gach(30);

        std::cout << SoSanh(player, com);

        //      yeu cau dung lai tu nguoi choi
        std::cin.ignore();
        std::cout << std::endl;
        Gach(30);
        std::cout << "\nBan co muon dung lai khong?" << std::endl;
        std::cout << "1. Co!" << std::endl;
        std::cout << "0. Khong!" << std::endl;
        Gach(20);
        std:: cout << "\nNhap lua chon de thoat hay choi tiep: ";
        std::cin >> chon;
        std::cout << endl;
        Gach(20);
    } while (chon != 0);
}

std::string choice(int choice) {
    if (choice == 1) {
        return "Keo";
    }
    else if (choice == 2) {
        return "Bua";
    }
    else if (choice == 3) {
        return "Bao";
    }
    return "Loi";
}

std::string SoSanh(int playerChoice,int comChoice) {
    if((playerChoice == 1 && comChoice == 2)
         || (playerChoice == 2 && comChoice == 3)
         || (playerChoice == 3 && comChoice == 1)) {
                return "|->Ban da thua 1 con robot";
    } else if ((playerChoice == 1 && comChoice == 3) 
                || (playerChoice == 2 && comChoice == 1) 
                || (playerChoice == 3 && comChoice == 2)) {
                return "|->Ban da thang 1 con robot     |";
    } else if((playerChoice == 1 && comChoice == 1) 
                || (playerChoice == 2 && comChoice == 2) 
                || (playerChoice == 3 && comChoice == 3)) {
                return "|->Hoa ra ban cung chi bang 1 con robot";
    }

    return "idk";
}

//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//            Phật phù hộ, không bao giờ BUG
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~