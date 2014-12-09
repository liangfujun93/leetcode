#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std ;

class Solution {
public:

    vector< vector<int> > permuteUnique(vector<int> &num) {
        sort( num.begin(), num.end() ) ;
        int n = num.size() ;
        vector < vector <int> > ans ;
        while ( 1 ) {
            ans.push_back( num ) ;
            int pos1 = -1 ;
            for ( int i = n - 2; i >= 0; --i ) {
                if ( num[i] < num[i + 1]) {
                    pos1 = i ;
                    break ;
                }
            }
            if ( pos1 == -1 )    break ;
            int pos2 ;
            for ( int i = n - 1; i > pos1; --i ) {
                if ( num[i] > num[pos1]) {
                    pos2 = i ;
                    break ;
                }
            }
            swap( num[pos1], num[pos2] ) ;
            for ( int i = pos1 + 1, j = n - 1; i < j; ++i, --j ) {
                swap( num[i], num[j] ) ;
            }
        }
        return ans ;

    }

	
};
