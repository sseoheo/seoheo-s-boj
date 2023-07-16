#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int nbr_1, nbr_2, GCF, LCM; // 최대공약수 : Great Comomon Factor, 최소공배수 : Least Common Multiple;

    cin >> nbr_1 >> nbr_2;

    if (nbr_1 >= nbr_2) {
        GCF = nbr_2;
        LCM = nbr_1;
    }
    else {
        GCF = nbr_1;
        LCM = nbr_2;
    }

    while (GCF > 0) {
        if (nbr_1 % GCF == 0 and nbr_2 % GCF == 0)
            break;
        else
            GCF--;
    }

    while (LCM <= nbr_1 * nbr_2) {
        if (LCM % nbr_1 == 0 and LCM % nbr_2 == 0)
            break;
        else
            LCM++;
    }

    cout << GCF << '\n' << LCM;


    return 0;
    
}