#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kEmpty, kObstacle};

using namespace std;
ifstream f("1.board");
ofstream g("data.out");

vector<State> ParseLine(string line) { //string dizisinden tek boyut vektor geri doner
    istringstream sline(line);         // string i streamle tek tek int atıyor
    int n;
    char c;
    vector<State> row;
    while (sline >> n >> c && c == ',') { // önce int sonra char= , olacak şekilde
      if (n == 0) {
        row.push_back(State::kEmpty); // row satır vektoru içine state ler atılır
      } else {
        row.push_back(State::kObstacle); // row satır vektoru içine state ler atılır
      }
    }
    return row;//state dizisi/vektoru tek boyutlu geri dönecek
}

vector<vector<State>> ReadBoardFile(string path) { //dış dosya içinden okuma yaparak cok boyutlu vektor oluşturur
  ifstream myfile (path); // path içindekileri myfile a at
  vector<vector<State>> board{}; // iki boyutlu vektor oluştur
  if (myfile) {           // myfile oluştuysa
    string line;
    while (getline(myfile, line)) {   //getline metoduyla myfile içindekiler file içine teker teker atılır satır boyunca
      vector<State> row = ParseLine(line); // parseline metoduyla string atılan elemanlardan state vektoru oluşturulur
      board.push_back(row); // State lerden oluşan satır vektoru board cok boyutlu vektorune atılır
    }
  }
  return board; // çok boyutlu state vektoru geri döner
}

string CellString(State cell) { // state leri sembollere dönüştürür
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   ";
  }
}

void PrintBoard(const vector<vector<State>> board) {  //iki boyutlu diziyi ekrana basar
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]); // stateleri sembole dönüştürerek ekrana tek tek basar
    }
    cout << "\n";
  }
}

/**
 * Implementation of A* search algorithm
 */
vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]) {


  cout << "No path found!" << "\n";
  return std::vector<vector<State>> {};
}

// TODO: Write the Heuristic function here.
int Heuristic(int a1[2], int a2[2]){
    int t1,t2,i;
    int length = 0;
    length = sizeof(a1) ;
    cout << "length "<< length<< "\n";
    int response[length];

    for(i=0; i<length ; i++){
        response[i] = abs(a1[i]-a2[i]);
        cout << response[i]<<" "<<i << "\n";
    }
    //cout << &response;
//    return response;
}

#include "test.cpp" // For testing solution
int main() {
  int init[2]{0, 0};
  int goal[2]{4, 5};
  auto board = ReadBoardFile(f);
  auto solution = Search(board, init, goal);
  PrintBoard(solution);
  // Tests
  //TestHeuristic();
  Heuristic(init,goal);

}
