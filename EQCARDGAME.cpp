// Date:- 19/1/22
//Author Sapnil Patel

/* Alice has a standard deck of 52 cards. She wants to play a card game with K−1 of her friends. This particular game requires each person to have an equal number of cards, so Alice needs to discard a certain number of cards from her deck so that she can equally distribute the remaining cards amongst her and her friends.

Find the minimum number of cards Alice has to discard such that she can play the game.

Note: It doesn't matter which person gets which card. The only thing that matters is that each person should have an equal number of cards. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int card_remove = 52 % k;
        cout<<card_remove<<endl;
    }
}