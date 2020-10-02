#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    #ifdef ONPC
        freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif // ONPC

    int k = 0;
    /**Var 1**/
    int_fast16_t *a = new int_fast16_t[5];
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it >= 0) ++k;
    }
    cout << "1st var: " << k << endl;

    /**Var 2**/
    k = 0;
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it < 0) ++k;
    }
    cout << "2nd var: " << k << endl;


    /**Var 3**/
    k = 0;
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it == 0) ++k;
    }
    cout << "3rd var: " << k << endl;

    /**Var 4**/
    k = 0;
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it != 0) ++k;
    }
    cout << "4th var: " << k << endl;

    /**Var 5**/
    k = 0;
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it > 0) ++k;
    }
    cout << "5th var: " << k << endl;

    /**Var 6**/
    for (int_fast16_t *it = a; it < a + 5; ++it)
    {
        scanf("%x", it);
        if (*it < 0) ++k;
    }
    cout << "6th var: " << k << endl;

delete [] a;

return 0;
}
