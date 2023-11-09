#include <iostream>
#include <map>
#include <vector>

#define FASTIO std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
using namespace std;

map<int, int> Medicine;
int main() {
    FASTIO

    int N, M;
    cin >> N;

    for(int i = 0; i < N; i++){
        int Medi_Effi, Medi_Name;
        cin >> Medi_Effi >> Medi_Name;

        Medicine[Medi_Effi] = Medi_Name;
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        int Symptom_Num;
        bool check = true;
        vector<int> Prescription;
        cin >> Symptom_Num;
        for(int j = 0; j < Symptom_Num; j++){
            int Symptom_Name;
            cin >> Symptom_Name;

            if(Medicine.count(Symptom_Name) != 0)
                Prescription.push_back(Medicine[Symptom_Name]);
            else
                check = false;
        }

        if(check)
            for(auto i : Prescription)
                cout << i << ' ';
        else
            cout << "YOU DIED";
        cout << '\n';
    }
    return 0;
}