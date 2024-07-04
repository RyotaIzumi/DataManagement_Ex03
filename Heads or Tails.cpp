// Heads or Tails.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します

#include <iostream>
#include <string>
#include <time.h>

int countH = 0;
int countT = 0;

void playRound(int);
std::string choose();


int main() {

    srand((unsigned int)time(NULL));
    std::cout << "tossing a coin" << std::endl;
    playRound(1);
    playRound(2);
    playRound(3);
    std::cout << "Heads: " << countH << ", Tails: " << countT << std::endl;

}

void playRound(int n) {
    std::cout << "Round " << n << ": " << choose() << std::endl;
}

std::string choose() {
    RAND_MAX;
    int ram = rand() % 2;
    std::string word;

    switch (ram) {
    case 0: word = "Heads";countH++; break;
    case 1: word = "Tails";countT++; break;
    }

    return word;
}
