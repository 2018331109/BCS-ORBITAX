#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define test int tc; cin>> tc; while(tc--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    test {
        ll n, k;
        cin >> n >> k;
        
        // Create a vector to store card information.
        vector<vector<ll>> cards(n, vector<ll>(2));
        
        // Input the card values and quantities.
        for(int i = 0; i < n; i++) {
            ll cardValue;
            cin >> cardValue;
            cards[i][0] = cardValue; // First column stores card values.
        }
        
        for(int i = 0; i < n; i++) {
            ll cardQuantity;
            cin >> cardQuantity;
            cards[i][1] = cardQuantity; // Second column stores card quantities.
        }
        
        // Create a vector to store selections made by the players.
        vector<ll> selections(k);
        for(ll i = 0; i < k; i++)
            cin >> selections[i];
        
        ll totalCards = 0;
        for(int i = 0; i < n; i++) {
            totalCards += cards[i][1]; // Calculate the total number of cards.
        }
        
        // Sort the cards based on their values.
        sort(cards.begin(), cards.end());
        
        ll leftPointer = 0, rightPointer = n - 1;
        
        for(ll i = 0; i < k; i++) {
            selections[i] = totalCards - selections[i]; // Calculate the remaining cards.
            
            if(i % 2 == 0) { // Chef's turn
                while(leftPointer < n && cards[leftPointer][1] <= selections[i]) {
                    selections[i] -= cards[leftPointer][1];
                    totalCards -= cards[leftPointer][1];
                    cards[leftPointer][1] = 0;
                    leftPointer++;
                }
                if(leftPointer < n) {
                    cards[leftPointer][1] -= selections[i];
                    totalCards -= selections[i];
                    selections[i] = 0;
                }
            }
            else { // Chefu's turn
                while(rightPointer >= 0 && cards[rightPointer][1] <= selections[i]) {
                    selections[i] -= cards[rightPointer][1];
                    totalCards -= cards[rightPointer][1];
                    cards[rightPointer][1] = 0;
                    rightPointer--;
                }
                if(rightPointer >= 0) {
                    cards[rightPointer][1] -= selections[i];
                    totalCards -= selections[i];
                }
            }
        }
        
        ll answer = 0ll;
        for(ll i = 0; i < n; i++) {
            answer += cards[i][1] * cards[i][0]; // Calculate the sum of remaining cards' values.
        }
        
        cout << answer << endl;
    }
    return 0;
}

