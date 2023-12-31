#include <iostream>

using namespace std;
/*
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
 */

    //풀이 2번
    //유클리드 호제법 (mod연산 이용)

int gcd(int a, int b) {
	int c = a % b;

	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b); // 최대공약수 * 최소공배수 = 두 수의 곱
}

int main() {

	int n1, n2;
	cin >> n1 >> n2;

    cout << gcd(n1, n2) << '\n' << lcm(n1, n2);
    
    return 0;

}